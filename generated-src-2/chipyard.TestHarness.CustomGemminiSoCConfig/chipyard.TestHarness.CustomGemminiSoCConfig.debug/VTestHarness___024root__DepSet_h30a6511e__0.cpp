// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__27(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__27\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
        = vlSelf->TestHarness__DOT__SimJTAG__DOT__init_done_sticky;
    vlSelf->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
        = vlSelf->TestHarness__DOT__SimJTAG__DOT__tickCounterReg;
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_1) 
                       & (1U != vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                      & (0U != vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: SerialAdapter.sv:249: Assertion failed in %NTestHarness.ram.adapter: Assertion failed: Bad TSI command\n    at SerialAdapter.scala:231 assert(false.B, \"Bad TSI command\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/SerialAdapter.sv", 249, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/SerialAdapter.sv:250:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: SerialAdapter.sv:251: Assertion failed in %NTestHarness.ram.adapter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/SerialAdapter.sv", 251, "");
        }
    }
    if (VL_UNLIKELY((1U & (((
                            // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/UARTTx_TestHarness_UNIQUIFIED.sv:121:13
verbose&&done_reset
                             & ((~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__counter)))) 
                                & (~ (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__empty)))) 
                            & (0U != vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxm__DOT__plusarg_reader_1__DOT__myplus)) 
                           & (~ (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"UART TX (%x): %c\n",
                   8,vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                   [vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value],
                   8,vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                   [vlSelf->TestHarness__DOT__uart_sim_0__DOT__rxq__DOT__deq_ptr_value]);
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txm__DOT__valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__ptr_match) 
                        & (IData)(vlSelf->TestHarness__DOT__uart_sim_0__DOT__txq__DOT__maybe_full))))) {
        VL_WRITEF("[%0t] %%Error: UARTAdapter.sv:96: Assertion failed in %NTestHarness.uart_sim_0: Assertion failed\n    at UARTAdapter.scala:48 when (txq.io.enq.valid) { assert(txq.io.enq.ready) }\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/UARTAdapter.sv", 96, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/UARTAdapter.sv:97:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: UARTAdapter.sv:98: Assertion failed in %NTestHarness.uart_sim_0\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/UARTAdapter.sv", 98, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__28(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__28\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb)))) {
        VL_WRITEF("[%0t] %%Error: TLRAM.sv:244: Assertion failed in %NTestHarness.ram.srams: Assertion failed\n    at SRAM.scala:224 assert (!(r_full && d_wb) || (d_full && d_read && d_need_fix))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLRAM.sv", 244, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLRAM.sv:245:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLRAM.sv:246: Assertion failed in %NTestHarness.ram.srams\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLRAM.sv", 246, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:172: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 172, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:173:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:174: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 174, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:178: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 178, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:179:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:180: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 180, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__29(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__29\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)((3U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:184: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 184, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:185:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:186: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 186, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:190: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 190, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:191:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:192: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 192, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__30(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__30\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:196: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 196, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:197:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:198: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 198, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:202: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 202, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:203:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:204: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 204, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__31(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__31\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:208: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 208, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:209:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:210: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 210, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:214: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 214, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:215:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:216: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 216, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:220: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 220, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:221:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:222: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 222, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__32(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__32\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)((3U == (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:226: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 226, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:227:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:228: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 228, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:232: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 232, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:233:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:234: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 234, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__33(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__33\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:238: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 238, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:239:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:240: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 240, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (7U == (0x3fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:244: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 244, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:245:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:246: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 246, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__34(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__34\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xdU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:250: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 250, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:251:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:252: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 252, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:256: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 256, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:257:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:258: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 258, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__35(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__35\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0x10000U != (0x1ffffU & ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 4U) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:262: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 262, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:263:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:264: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 264, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:268: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 268, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:269:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:270: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 270, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__36(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__36\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:274: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 274, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:275:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:276: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 276, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xdU)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x7fff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x10U)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0x1fffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xbU)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x10U)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x7fff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xdU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x10U)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0x1fffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xfU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0x10U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:280: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 280, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:281:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:282: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 282, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__37(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__37\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:286: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 286, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:287:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:288: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 288, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0x10000U != (0x1ffffU & ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 4U) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:292: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 292, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:293:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:294: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 294, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__38(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__38\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:298: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 298, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:299:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:300: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 300, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:304: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 304, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:305:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:306: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 306, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__39(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__39\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xdU)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x7fff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x10U)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0x1fffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xbU)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x10U)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x7fff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xdU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x10U)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0x1fffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xfU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0x10U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:310: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 310, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:311:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:312: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 312, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__40(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__40\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0x10000U != (0x1ffffU & ((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 4U) 
                                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:316: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 316, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:317:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:318: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 318, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:322: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 322, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:323:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:324: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 324, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__41(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__41\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:328: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 328, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:329:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:330: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 330, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xffU & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x13U) 
                                         | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xdU)) 
                                        & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                << 7U) 
                                               | (0x7fff80U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                      << 7U) 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 9U)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x10U)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                      << 5U) 
                                                     | (0x1fffe0U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                            << 5U) 
                                                           & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xbU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x10U)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                            << 3U) 
                                                           | (0x7fff8U 
                                                              & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                  << 3U) 
                                                                 & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xdU)))) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ 
                                                                     (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0x10U)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                  << 1U) 
                                                                 | (0x1fffeU 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                        << 1U) 
                                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0xfU)))) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ 
                                                                         (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0x10U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:334: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 334, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:335:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:336: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 336, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__42(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__42\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:340: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 340, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:341:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:342: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 342, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:346: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 346, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:347:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:348: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__43(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__43\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:352: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 352, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:353:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:354: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 354, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xdU)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x7fff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x10U)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0x1fffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xbU)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x10U)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x7fff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xdU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x10U)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0x1fffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xfU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0x10U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:358: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 358, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:359:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:360: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 360, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__44(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__44\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (3U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:364: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 364, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:365:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:366: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 366, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:370: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 370, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:371:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:372: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__45(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__45\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (0x23U == (0x27U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:376: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 376, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:377:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:378: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 378, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xdU)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x7fff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x10U)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0x1fffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xbU)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x10U)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x7fff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xdU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x10U)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0x1fffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xfU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0x10U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:382: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 382, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:383:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:384: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__46(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__46\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:388: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 388, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:389:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:390: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 390, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (((vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       << 0x10U) | 
                                      (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0x10U)) & 
                                     (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:394: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 394, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:395:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:396: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 396, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__47(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__47\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:400: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 400, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:401:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:402: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 402, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xdU)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x7fff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x10U)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0x1fffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xbU)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0x10U)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x7fff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xdU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x10U)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0x1fffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xfU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0x10U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:406: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 406, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:407:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:408: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 408, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__48(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__48\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x15U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:412: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 412, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:413:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:414: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 414, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:418: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 418, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:419:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:420: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 420, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:424: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 424, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:425:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:426: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 426, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__49(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__49\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                      & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:430: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 430, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:431:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:432: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 432, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:436: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 436, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:437:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:438: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 438, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:442: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 442, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:443:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:444: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 444, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__50(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__50\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hab13b6e5__0;
    VlWide<8>/*255:0*/ __Vtemp_hb353c0f3__0;
    VlWide<8>/*255:0*/ __Vtemp_h4bca4691__0;
    VlWide<8>/*255:0*/ __Vtemp_he5186f57__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:448: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 448, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:449:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:450: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 450, "");
        }
    }
    VL_EXTEND_WI(256,8, __Vtemp_hab13b6e5__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_hb353c0f3__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, __Vtemp_hab13b6e5__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                      & (~ (IData)(vlSelf->reset))) 
                     & __Vtemp_hb353c0f3__0[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:454: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 454, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:455:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:456: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 456, "");
        }
    }
    VL_EXTEND_WI(256,8, __Vtemp_h4bca4691__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_he5186f57__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight, __Vtemp_h4bca4691__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_617) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (__Vtemp_he5186f57__0[0U] 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:460: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 460, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:461:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:462: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 462, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__51(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__51\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:466: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 466, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:467:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:468: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 468, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__52(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__52\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h4b7559e1__0;
    VlWide<32>/*1023:0*/ __Vtemp_h07ea3cc8__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1da9cd17__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4b7559e1__1;
    VlWide<32>/*1023:0*/ __Vtemp_h6899dd49__0;
    VlWide<32>/*1023:0*/ __Vtemp_h338421e6__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4b7559e1__2;
    VlWide<32>/*1023:0*/ __Vtemp_haedd002e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h550d7dc3__0;
    VlWide<32>/*1023:0*/ __Vtemp_h4b7559e1__3;
    VlWide<32>/*1023:0*/ __Vtemp_h6b661a2d__0;
    VlWide<32>/*1023:0*/ __Vtemp_h7aa5b8e9__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                            ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                            : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:472: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 472, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:473:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:474: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 474, "");
        }
    }
    VL_EXTEND_WI(1022,8, __Vtemp_h4b7559e1__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    __Vtemp_h07ea3cc8__0[0U] = (__Vtemp_h4b7559e1__0[0U] 
                                << 2U);
    __Vtemp_h07ea3cc8__0[1U] = ((__Vtemp_h4b7559e1__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[1U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[2U] = ((__Vtemp_h4b7559e1__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[2U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[3U] = ((__Vtemp_h4b7559e1__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[3U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[4U] = ((__Vtemp_h4b7559e1__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[4U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[5U] = ((__Vtemp_h4b7559e1__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[5U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[6U] = ((__Vtemp_h4b7559e1__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[6U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[7U] = ((__Vtemp_h4b7559e1__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[7U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[8U] = ((__Vtemp_h4b7559e1__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[8U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[9U] = ((__Vtemp_h4b7559e1__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[9U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[0xaU] = ((__Vtemp_h4b7559e1__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xaU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xbU] = ((__Vtemp_h4b7559e1__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xbU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xcU] = ((__Vtemp_h4b7559e1__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xcU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xdU] = ((__Vtemp_h4b7559e1__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xdU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xeU] = ((__Vtemp_h4b7559e1__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xeU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xfU] = ((__Vtemp_h4b7559e1__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xfU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0x10U] = ((__Vtemp_h4b7559e1__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x10U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x11U] = ((__Vtemp_h4b7559e1__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x11U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x12U] = ((__Vtemp_h4b7559e1__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x12U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x13U] = ((__Vtemp_h4b7559e1__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x13U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x14U] = ((__Vtemp_h4b7559e1__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x14U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x15U] = ((__Vtemp_h4b7559e1__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x15U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x16U] = ((__Vtemp_h4b7559e1__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x16U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x17U] = ((__Vtemp_h4b7559e1__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x17U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x18U] = ((__Vtemp_h4b7559e1__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x18U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x19U] = ((__Vtemp_h4b7559e1__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x19U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1aU] = ((__Vtemp_h4b7559e1__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1bU] = ((__Vtemp_h4b7559e1__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1cU] = ((__Vtemp_h4b7559e1__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1dU] = ((__Vtemp_h4b7559e1__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1eU] = ((__Vtemp_h4b7559e1__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1fU] = ((__Vtemp_h4b7559e1__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h1da9cd17__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h07ea3cc8__0);
    VL_EXTEND_WI(1022,8, __Vtemp_h4b7559e1__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    __Vtemp_h6899dd49__0[0U] = (__Vtemp_h4b7559e1__1[0U] 
                                << 2U);
    __Vtemp_h6899dd49__0[1U] = ((__Vtemp_h4b7559e1__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[1U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[2U] = ((__Vtemp_h4b7559e1__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[2U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[3U] = ((__Vtemp_h4b7559e1__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[3U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[4U] = ((__Vtemp_h4b7559e1__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[4U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[5U] = ((__Vtemp_h4b7559e1__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[5U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[6U] = ((__Vtemp_h4b7559e1__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[6U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[7U] = ((__Vtemp_h4b7559e1__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[7U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[8U] = ((__Vtemp_h4b7559e1__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[8U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[9U] = ((__Vtemp_h4b7559e1__1[8U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__1[9U] 
                                              << 2U));
    __Vtemp_h6899dd49__0[0xaU] = ((__Vtemp_h4b7559e1__1[9U] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__1[0xaU] 
                                                << 2U));
    __Vtemp_h6899dd49__0[0xbU] = ((__Vtemp_h4b7559e1__1[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__1[0xbU] 
                                                << 2U));
    __Vtemp_h6899dd49__0[0xcU] = ((__Vtemp_h4b7559e1__1[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__1[0xcU] 
                                                << 2U));
    __Vtemp_h6899dd49__0[0xdU] = ((__Vtemp_h4b7559e1__1[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__1[0xdU] 
                                                << 2U));
    __Vtemp_h6899dd49__0[0xeU] = ((__Vtemp_h4b7559e1__1[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__1[0xeU] 
                                                << 2U));
    __Vtemp_h6899dd49__0[0xfU] = ((__Vtemp_h4b7559e1__1[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__1[0xfU] 
                                                << 2U));
    __Vtemp_h6899dd49__0[0x10U] = ((__Vtemp_h4b7559e1__1[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x10U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x11U] = ((__Vtemp_h4b7559e1__1[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x11U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x12U] = ((__Vtemp_h4b7559e1__1[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x12U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x13U] = ((__Vtemp_h4b7559e1__1[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x13U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x14U] = ((__Vtemp_h4b7559e1__1[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x14U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x15U] = ((__Vtemp_h4b7559e1__1[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x15U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x16U] = ((__Vtemp_h4b7559e1__1[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x16U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x17U] = ((__Vtemp_h4b7559e1__1[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x17U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x18U] = ((__Vtemp_h4b7559e1__1[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x18U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x19U] = ((__Vtemp_h4b7559e1__1[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x19U] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x1aU] = ((__Vtemp_h4b7559e1__1[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x1aU] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x1bU] = ((__Vtemp_h4b7559e1__1[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x1bU] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x1cU] = ((__Vtemp_h4b7559e1__1[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x1cU] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x1dU] = ((__Vtemp_h4b7559e1__1[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x1dU] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x1eU] = ((__Vtemp_h4b7559e1__1[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x1eU] 
                                                 << 2U));
    __Vtemp_h6899dd49__0[0x1fU] = ((__Vtemp_h4b7559e1__1[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__1[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h338421e6__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h6899dd49__0);
    VL_EXTEND_WI(1022,8, __Vtemp_h4b7559e1__2, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    __Vtemp_haedd002e__0[0U] = (__Vtemp_h4b7559e1__2[0U] 
                                << 2U);
    __Vtemp_haedd002e__0[1U] = ((__Vtemp_h4b7559e1__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[1U] 
                                              << 2U));
    __Vtemp_haedd002e__0[2U] = ((__Vtemp_h4b7559e1__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[2U] 
                                              << 2U));
    __Vtemp_haedd002e__0[3U] = ((__Vtemp_h4b7559e1__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[3U] 
                                              << 2U));
    __Vtemp_haedd002e__0[4U] = ((__Vtemp_h4b7559e1__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[4U] 
                                              << 2U));
    __Vtemp_haedd002e__0[5U] = ((__Vtemp_h4b7559e1__2[4U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[5U] 
                                              << 2U));
    __Vtemp_haedd002e__0[6U] = ((__Vtemp_h4b7559e1__2[5U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[6U] 
                                              << 2U));
    __Vtemp_haedd002e__0[7U] = ((__Vtemp_h4b7559e1__2[6U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[7U] 
                                              << 2U));
    __Vtemp_haedd002e__0[8U] = ((__Vtemp_h4b7559e1__2[7U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[8U] 
                                              << 2U));
    __Vtemp_haedd002e__0[9U] = ((__Vtemp_h4b7559e1__2[8U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__2[9U] 
                                              << 2U));
    __Vtemp_haedd002e__0[0xaU] = ((__Vtemp_h4b7559e1__2[9U] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__2[0xaU] 
                                                << 2U));
    __Vtemp_haedd002e__0[0xbU] = ((__Vtemp_h4b7559e1__2[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__2[0xbU] 
                                                << 2U));
    __Vtemp_haedd002e__0[0xcU] = ((__Vtemp_h4b7559e1__2[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__2[0xcU] 
                                                << 2U));
    __Vtemp_haedd002e__0[0xdU] = ((__Vtemp_h4b7559e1__2[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__2[0xdU] 
                                                << 2U));
    __Vtemp_haedd002e__0[0xeU] = ((__Vtemp_h4b7559e1__2[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__2[0xeU] 
                                                << 2U));
    __Vtemp_haedd002e__0[0xfU] = ((__Vtemp_h4b7559e1__2[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__2[0xfU] 
                                                << 2U));
    __Vtemp_haedd002e__0[0x10U] = ((__Vtemp_h4b7559e1__2[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x10U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x11U] = ((__Vtemp_h4b7559e1__2[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x11U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x12U] = ((__Vtemp_h4b7559e1__2[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x12U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x13U] = ((__Vtemp_h4b7559e1__2[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x13U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x14U] = ((__Vtemp_h4b7559e1__2[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x14U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x15U] = ((__Vtemp_h4b7559e1__2[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x15U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x16U] = ((__Vtemp_h4b7559e1__2[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x16U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x17U] = ((__Vtemp_h4b7559e1__2[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x17U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x18U] = ((__Vtemp_h4b7559e1__2[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x18U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x19U] = ((__Vtemp_h4b7559e1__2[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x19U] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x1aU] = ((__Vtemp_h4b7559e1__2[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x1aU] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x1bU] = ((__Vtemp_h4b7559e1__2[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x1bU] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x1cU] = ((__Vtemp_h4b7559e1__2[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x1cU] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x1dU] = ((__Vtemp_h4b7559e1__2[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x1dU] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x1eU] = ((__Vtemp_h4b7559e1__2[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x1eU] 
                                                 << 2U));
    __Vtemp_haedd002e__0[0x1fU] = ((__Vtemp_h4b7559e1__2[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__2[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h550d7dc3__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes, __Vtemp_haedd002e__0);
    VL_EXTEND_WI(1022,8, __Vtemp_h4b7559e1__3, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    __Vtemp_h6b661a2d__0[0U] = (__Vtemp_h4b7559e1__3[0U] 
                                << 2U);
    __Vtemp_h6b661a2d__0[1U] = ((__Vtemp_h4b7559e1__3[0U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[1U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[2U] = ((__Vtemp_h4b7559e1__3[1U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[2U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[3U] = ((__Vtemp_h4b7559e1__3[2U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[3U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[4U] = ((__Vtemp_h4b7559e1__3[3U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[4U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[5U] = ((__Vtemp_h4b7559e1__3[4U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[5U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[6U] = ((__Vtemp_h4b7559e1__3[5U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[6U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[7U] = ((__Vtemp_h4b7559e1__3[6U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[7U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[8U] = ((__Vtemp_h4b7559e1__3[7U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[8U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[9U] = ((__Vtemp_h4b7559e1__3[8U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__3[9U] 
                                              << 2U));
    __Vtemp_h6b661a2d__0[0xaU] = ((__Vtemp_h4b7559e1__3[9U] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__3[0xaU] 
                                                << 2U));
    __Vtemp_h6b661a2d__0[0xbU] = ((__Vtemp_h4b7559e1__3[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__3[0xbU] 
                                                << 2U));
    __Vtemp_h6b661a2d__0[0xcU] = ((__Vtemp_h4b7559e1__3[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__3[0xcU] 
                                                << 2U));
    __Vtemp_h6b661a2d__0[0xdU] = ((__Vtemp_h4b7559e1__3[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__3[0xdU] 
                                                << 2U));
    __Vtemp_h6b661a2d__0[0xeU] = ((__Vtemp_h4b7559e1__3[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__3[0xeU] 
                                                << 2U));
    __Vtemp_h6b661a2d__0[0xfU] = ((__Vtemp_h4b7559e1__3[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__3[0xfU] 
                                                << 2U));
    __Vtemp_h6b661a2d__0[0x10U] = ((__Vtemp_h4b7559e1__3[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x10U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x11U] = ((__Vtemp_h4b7559e1__3[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x11U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x12U] = ((__Vtemp_h4b7559e1__3[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x12U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x13U] = ((__Vtemp_h4b7559e1__3[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x13U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x14U] = ((__Vtemp_h4b7559e1__3[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x14U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x15U] = ((__Vtemp_h4b7559e1__3[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x15U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x16U] = ((__Vtemp_h4b7559e1__3[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x16U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x17U] = ((__Vtemp_h4b7559e1__3[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x17U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x18U] = ((__Vtemp_h4b7559e1__3[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x18U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x19U] = ((__Vtemp_h4b7559e1__3[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x19U] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x1aU] = ((__Vtemp_h4b7559e1__3[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x1aU] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x1bU] = ((__Vtemp_h4b7559e1__3[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x1bU] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x1cU] = ((__Vtemp_h4b7559e1__3[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x1cU] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x1dU] = ((__Vtemp_h4b7559e1__3[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x1dU] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x1eU] = ((__Vtemp_h4b7559e1__3[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x1eU] 
                                                 << 2U));
    __Vtemp_h6b661a2d__0[0x1fU] = ((__Vtemp_h4b7559e1__3[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__3[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h7aa5b8e9__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h6b661a2d__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_617) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_h1da9cd17__0[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_h338421e6__0[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_h550d7dc3__0[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_h7aa5b8e9__0[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:478: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 478, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:479:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:480: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 480, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__53(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__53\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_h4b7559e1__0;
    VlWide<32>/*1023:0*/ __Vtemp_h07ea3cc8__0;
    VlWide<32>/*1023:0*/ __Vtemp_hb5657fd4__0;
    // Body
    VL_EXTEND_WI(1022,8, __Vtemp_h4b7559e1__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    __Vtemp_h07ea3cc8__0[0U] = (__Vtemp_h4b7559e1__0[0U] 
                                << 2U);
    __Vtemp_h07ea3cc8__0[1U] = ((__Vtemp_h4b7559e1__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[1U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[2U] = ((__Vtemp_h4b7559e1__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[2U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[3U] = ((__Vtemp_h4b7559e1__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[3U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[4U] = ((__Vtemp_h4b7559e1__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[4U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[5U] = ((__Vtemp_h4b7559e1__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[5U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[6U] = ((__Vtemp_h4b7559e1__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[6U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[7U] = ((__Vtemp_h4b7559e1__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[7U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[8U] = ((__Vtemp_h4b7559e1__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[8U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[9U] = ((__Vtemp_h4b7559e1__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h4b7559e1__0[9U] 
                                              << 2U));
    __Vtemp_h07ea3cc8__0[0xaU] = ((__Vtemp_h4b7559e1__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xaU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xbU] = ((__Vtemp_h4b7559e1__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xbU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xcU] = ((__Vtemp_h4b7559e1__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xcU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xdU] = ((__Vtemp_h4b7559e1__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xdU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xeU] = ((__Vtemp_h4b7559e1__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xeU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0xfU] = ((__Vtemp_h4b7559e1__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4b7559e1__0[0xfU] 
                                                << 2U));
    __Vtemp_h07ea3cc8__0[0x10U] = ((__Vtemp_h4b7559e1__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x10U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x11U] = ((__Vtemp_h4b7559e1__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x11U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x12U] = ((__Vtemp_h4b7559e1__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x12U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x13U] = ((__Vtemp_h4b7559e1__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x13U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x14U] = ((__Vtemp_h4b7559e1__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x14U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x15U] = ((__Vtemp_h4b7559e1__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x15U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x16U] = ((__Vtemp_h4b7559e1__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x16U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x17U] = ((__Vtemp_h4b7559e1__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x17U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x18U] = ((__Vtemp_h4b7559e1__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x18U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x19U] = ((__Vtemp_h4b7559e1__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x19U] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1aU] = ((__Vtemp_h4b7559e1__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1bU] = ((__Vtemp_h4b7559e1__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1cU] = ((__Vtemp_h4b7559e1__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1dU] = ((__Vtemp_h4b7559e1__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1eU] = ((__Vtemp_h4b7559e1__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h07ea3cc8__0[0x1fU] = ((__Vtemp_h4b7559e1__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h4b7559e1__0[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_hb5657fd4__0, vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, __Vtemp_h07ea3cc8__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___T_617) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                          : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)) 
                        != (7U & (__Vtemp_hb5657fd4__0[0U] 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:484: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 484, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:485:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:486: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 486, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty))) 
                        & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 8U)) == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:490: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 490, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:491:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:492: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 492, "");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__54(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__54\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hab13b6e5__0;
    VlWide<8>/*255:0*/ __Vtemp_h2f0d85ba__0;
    VlWide<8>/*255:0*/ __Vtemp_h4bca4691__0;
    VlWide<8>/*255:0*/ __Vtemp_hfeba3466__0;
    VlWide<8>/*255:0*/ __Vtemp_hab13b6e5__1;
    VlWide<8>/*255:0*/ __Vtemp_hd34f1c1e__0;
    // Body
    VL_EXTEND_WI(256,8, __Vtemp_hab13b6e5__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h2f0d85ba__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hab13b6e5__0);
    VL_EXTEND_WI(256,8, __Vtemp_h4bca4691__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_hfeba3466__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_h4bca4691__0);
    VL_EXTEND_WI(256,8, __Vtemp_hab13b6e5__1, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 8U)));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_hd34f1c1e__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hab13b6e5__1);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((0U != ((((((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                  ? 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[0U]
                                                  : 
                                                 __Vtemp_h2f0d85ba__0[0U]) 
                                                ^ (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_hfeba3466__0[0U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                               | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                    ? 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[1U]
                                                    : 
                                                   __Vtemp_h2f0d85ba__0[1U]) 
                                                  ^ 
                                                  (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_hfeba3466__0[1U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                              | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                   ? 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[2U]
                                                   : 
                                                  __Vtemp_h2f0d85ba__0[2U]) 
                                                 ^ 
                                                 (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                   & (6U 
                                                      != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_hfeba3466__0[2U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                             | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                  ? 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[3U]
                                                  : 
                                                 __Vtemp_h2f0d85ba__0[3U]) 
                                                ^ (
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                    & (6U 
                                                       != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_hfeba3466__0[3U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                 ? 
                                                VTestHarness__ConstPool__CONST_h9e67c271_0[4U]
                                                 : 
                                                __Vtemp_h2f0d85ba__0[4U]) 
                                               ^ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                   & (6U 
                                                      != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_hfeba3466__0[4U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                           | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                ? VTestHarness__ConstPool__CONST_h9e67c271_0[5U]
                                                : __Vtemp_h2f0d85ba__0[5U]) 
                                              ^ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                  & (6U 
                                                     != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_hfeba3466__0[5U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                          | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                               ? VTestHarness__ConstPool__CONST_h9e67c271_0[6U]
                                               : __Vtemp_h2f0d85ba__0[6U]) 
                                             ^ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                 & (6U 
                                                    != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                 ? 
                                                __Vtemp_hfeba3466__0[6U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                              ? VTestHarness__ConstPool__CONST_h9e67c271_0[7U]
                                              : __Vtemp_h2f0d85ba__0[7U]) 
                                            ^ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                                                & (6U 
                                                   != (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode)))
                                                ? __Vtemp_hfeba3466__0[7U]
                                                : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))) 
                                 | (0U == ((((((((VTestHarness__ConstPool__CONST_h9e67c271_0[0U] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                    ? 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U]
                                                    : 
                                                   __Vtemp_hd34f1c1e__0[0U])) 
                                                 | (VTestHarness__ConstPool__CONST_h9e67c271_0[1U] 
                                                    ^ 
                                                    ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                      ? 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[1U]
                                                      : 
                                                     __Vtemp_hd34f1c1e__0[1U]))) 
                                                | (VTestHarness__ConstPool__CONST_h9e67c271_0[2U] 
                                                   ^ 
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                     ? 
                                                    VTestHarness__ConstPool__CONST_h9e67c271_0[2U]
                                                     : 
                                                    __Vtemp_hd34f1c1e__0[2U]))) 
                                               | (VTestHarness__ConstPool__CONST_h9e67c271_0[3U] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                    ? 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[3U]
                                                    : 
                                                   __Vtemp_hd34f1c1e__0[3U]))) 
                                              | (VTestHarness__ConstPool__CONST_h9e67c271_0[4U] 
                                                 ^ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                   ? 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[4U]
                                                   : 
                                                  __Vtemp_hd34f1c1e__0[4U]))) 
                                             | (VTestHarness__ConstPool__CONST_h9e67c271_0[5U] 
                                                ^ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                    ? 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[5U]
                                                    : 
                                                   __Vtemp_hd34f1c1e__0[5U]))) 
                                            | (VTestHarness__ConstPool__CONST_h9e67c271_0[6U] 
                                               ^ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                   ? 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[6U]
                                                   : 
                                                  __Vtemp_hd34f1c1e__0[6U]))) 
                                           | (VTestHarness__ConstPool__CONST_h9e67c271_0[7U] 
                                              ^ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__empty)
                                                  ? 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[7U]
                                                  : 
                                                 __Vtemp_hd34f1c1e__0[7U])))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:496: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 496, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:497:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:498: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 498, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == ((((((((VTestHarness__ConstPool__CONST_h9e67c271_0[0U] 
                                                 ^ 
                                                 vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U]) 
                                                | (VTestHarness__ConstPool__CONST_h9e67c271_0[1U] 
                                                   ^ 
                                                   vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U])) 
                                               | (VTestHarness__ConstPool__CONST_h9e67c271_0[2U] 
                                                  ^ 
                                                  vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U])) 
                                              | (VTestHarness__ConstPool__CONST_h9e67c271_0[3U] 
                                                 ^ 
                                                 vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U])) 
                                             | (VTestHarness__ConstPool__CONST_h9e67c271_0[4U] 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U])) 
                                            | (VTestHarness__ConstPool__CONST_h9e67c271_0[5U] 
                                               ^ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U])) 
                                           | (VTestHarness__ConstPool__CONST_h9e67c271_0[6U] 
                                              ^ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U])) 
                                          | (VTestHarness__ConstPool__CONST_h9e67c271_0[7U] 
                                             ^ vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U]))) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:502: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 502, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:503:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:504: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 504, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__55(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__55\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:508: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 508, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:509:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:510: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 510, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_mux)
                                ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_size)
                                : (IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__r_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:514: Assertion failed in %NTestHarness.ram.srams.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:31)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 514, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv:515:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_72.sv:516: Assertion failed in %NTestHarness.ram.srams.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_72.sv", 516, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid))) 
                                 | (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                                        >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar_12.sv:182: Assertion failed in %NTestHarness.ram.xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_12.sv", 182, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_12.sv:183:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar_12.sv:184: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_12.sv", 184, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__56(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__56\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                                      | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys) 
                                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar_12.sv:188: Assertion failed in %NTestHarness.ram.xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_12.sv", 188, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_12.sv:189:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar_12.sv:190: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_12.sv", 190, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                            & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
                           & (((2U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                       >> 0x10U)) | 
                               (0x10000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                             >> 0xcU))) 
                              | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:267: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 267, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:268:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:269: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 269, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__57(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__57\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                      & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                 ? 1U : 4U))) & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:273: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 273, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:274:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:275: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 275, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:279: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 279, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:280:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:281: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 281, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:285: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 285, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:286:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:287: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 287, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__58(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__58\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (6U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:291: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 291, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:292:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:293: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 293, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                            & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
                           & (((2U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                       >> 0x10U)) | 
                               (0x10000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                             >> 0xcU))) 
                              | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:297: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 297, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:298:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:299: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 299, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__59(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__59\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                      & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                 ? 1U : 4U))) & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:303: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 303, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:304:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:305: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 305, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:309: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 309, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:310:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:311: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 311, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:315: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 315, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:316:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:317: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 317, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__60(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__60\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                      & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                 ? 1U : 4U))) & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:321: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 321, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:322:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:323: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 323, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (7U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:327: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 327, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:328:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:329: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 329, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0xdU <= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:333: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 333, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:334:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:335: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 335, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__61(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__61\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                            & (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                      >> 0xcU))) | 
                           ((7U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                            & ((((((((((0U == ((0x7fffcU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0xdU)) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                     >> 0xcU)))) 
                                       | (1U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                 >> 0x10U))) 
                                      | (2U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                     | (0U == ((0x7fff0U 
                                                & (0x80U 
                                                   ^ 
                                                   (0x7fff0U 
                                                    & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                       >> 0xdU)))) 
                                               | (0xfU 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                     >> 0xcU))))) 
                                    | (0x200U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                  >> 0x10U))) 
                                   | (0x2010U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                  >> 0xcU))) 
                                  | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                            >> 0x1aU))) 
                                 | (0x10000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                | (0x54000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                >> 0xcU))) 
                               | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:339: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 339, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:340:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:341: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 341, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__62(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__62\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:345: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 345, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:346:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:347: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 347, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (4U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:351: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 351, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:352:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:353: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 353, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__63(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__63\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                                 & ((((((((0U == ((0x7fffcU 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                      >> 0xdU)) 
                                                  | (3U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                        >> 0xcU)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                    >> 0xcU))))) 
                                         | (0x200U 
                                            == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                        | (0x2010U 
                                           == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                               >> 0xcU))) 
                                       | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                 >> 0x1aU))) 
                                      | (0x10000U == 
                                         (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                          >> 0xcU))) 
                                     | (0x54000U == 
                                        (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:357: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 357, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:358:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:359: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 359, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__64(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__64\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:363: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 363, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:364:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:365: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 365, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:369: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 369, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:370:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:371: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 371, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__65(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__65\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                                 & ((((((((0U == ((0x7fffcU 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                      >> 0xdU)) 
                                                  | (3U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                        >> 0xcU)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                    >> 0xcU))))) 
                                         | (0x200U 
                                            == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                        | (0x2010U 
                                           == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                               >> 0xcU))) 
                                       | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                 >> 0x1aU))) 
                                      | (0x10000U == 
                                         (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                          >> 0xcU))) 
                                     | (0x54000U == 
                                        (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:375: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 375, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:376:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:377: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 377, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__66(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__66\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:381: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 381, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:382:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:383: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 383, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (1U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask) 
                               & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                      << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                     & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
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
                                                                     & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:387: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 387, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:388:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:389: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 389, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__67(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__67\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                           & (((4U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                               & (((((((0U == ((0x7fffcU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0xdU)) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                     >> 0xcU)))) 
                                       | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                      | (0U == ((0x7fff0U 
                                                 & (0x80U 
                                                    ^ 
                                                    (0x7fff0U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                        >> 0xdU)))) 
                                                | (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                      >> 0xcU))))) 
                                     | (0x200U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0x10U))) 
                                    | (0x2010U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0xcU))) 
                                   | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                             >> 0x1aU))) 
                                  | (0x54000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                  >> 0xcU)))) 
                              | ((5U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                                 & ((0x10000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                  >> 0xcU)) 
                                    | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:393: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 393, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:394:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:395: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 395, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__68(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__68\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:399: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 399, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:400:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:401: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 401, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (2U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:405: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 405, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:406:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:407: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 407, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__69(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__69\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                           & (((4U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                               & (((((((0U == ((0x7fffcU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0xdU)) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                     >> 0xcU)))) 
                                       | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                      | (0U == ((0x7fff0U 
                                                 & (0x80U 
                                                    ^ 
                                                    (0x7fff0U 
                                                     & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                        >> 0xdU)))) 
                                                | (0xfU 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                      >> 0xcU))))) 
                                     | (0x200U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0x10U))) 
                                    | (0x2010U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                   >> 0xcU))) 
                                   | (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                             >> 0x1aU))) 
                                  | (0x54000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                  >> 0xcU)))) 
                              | ((5U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                                 & ((0x10000U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                                  >> 0xcU)) 
                                    | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:411: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 411, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:412:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:413: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 413, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__70(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__70\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:417: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 417, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:418:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:419: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 419, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (3U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:423: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 423, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:424:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:425: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 425, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__71(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__71\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)) 
                                 & (((2U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                             >> 0x10U)) 
                                     | (0x10000U == 
                                        (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         >> 0xcU))) 
                                    | (8U == (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:429: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 429, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:430:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:431: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 431, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:435: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 435, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:436:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:437: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 437, "");
        }
    }
}
