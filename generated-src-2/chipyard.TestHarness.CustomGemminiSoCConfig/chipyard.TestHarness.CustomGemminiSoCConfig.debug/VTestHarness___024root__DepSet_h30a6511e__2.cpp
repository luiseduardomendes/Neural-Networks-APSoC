// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__140(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__140\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hcfe659b6__0;
    VlWide<32>/*1023:0*/ __Vtemp_h82ae4b85__0;
    // Body
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
    if (VL_UNLIKELY((0xfffffffeU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                                    & (~ (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:442: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 442, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:443:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:444: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 444, "");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__141(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__141\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == ((((((((VTestHarness__ConstPool__CONST_h9e67c271_0[0U] 
                                                 ^ 
                                                 vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U]) 
                                                | (VTestHarness__ConstPool__CONST_h9e67c271_0[1U] 
                                                   ^ 
                                                   vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U])) 
                                               | (VTestHarness__ConstPool__CONST_h9e67c271_0[2U] 
                                                  ^ 
                                                  vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U])) 
                                              | (VTestHarness__ConstPool__CONST_h9e67c271_0[3U] 
                                                 ^ 
                                                 vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U])) 
                                             | (VTestHarness__ConstPool__CONST_h9e67c271_0[4U] 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])) 
                                            | (VTestHarness__ConstPool__CONST_h9e67c271_0[5U] 
                                               ^ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U])) 
                                           | (VTestHarness__ConstPool__CONST_h9e67c271_0[6U] 
                                              ^ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U])) 
                                          | (VTestHarness__ConstPool__CONST_h9e67c271_0[7U] 
                                             ^ vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U]))) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:448: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 448, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:449:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:450: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 450, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:180: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 180, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:181:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:182: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 182, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:186: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 186, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:187:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:188: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 188, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__142(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__142\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)((3U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:192: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 192, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:193:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:194: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 194, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:198: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 198, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:199:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:200: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 200, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__143(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__143\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:204: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 204, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:205:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:206: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 206, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:210: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 210, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:211:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:212: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 212, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:216: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 216, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:217:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:218: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 218, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__144(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__144\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:222: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 222, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:223:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:224: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 224, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:228: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 228, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:229:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:230: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 230, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)((3U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:234: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 234, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:235:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:236: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 236, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__145(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__145\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:240: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 240, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:241:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:242: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 242, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:246: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 246, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:247:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:248: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 248, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__146(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__146\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:252: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 252, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:253:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:254: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 254, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:258: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 258, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:259:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:260: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 260, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:264: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 264, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:265:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:266: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 266, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__147(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__147\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0x10000U != (0x1ffffU & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                                 >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:270: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 270, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:271:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:272: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 272, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:276: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 276, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:277:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:278: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 278, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__148(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__148\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:282: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 282, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:283:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:284: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 284, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:288: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 288, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:289:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:290: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 290, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__149(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__149\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:294: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 294, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:295:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:296: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 296, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0x10000U != (0x1ffffU & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                                 >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:300: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 300, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:301:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:302: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 302, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:306: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 306, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:307:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:308: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 308, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__150(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__150\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:312: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 312, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:313:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:314: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 314, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:318: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 318, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:319:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:320: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 320, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__151(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__151\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0x10000U != (0x1ffffU & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                                 >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:324: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 324, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:325:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:326: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 326, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:330: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 330, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:331:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:332: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 332, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__152(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__152\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:336: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 336, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:337:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:338: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 338, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask) 
                               & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                      << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                                     & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                        & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                    << 5U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                           & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                              & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                          << 3U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                 & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:342: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 342, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:343:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:344: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 344, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__153(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__153\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:348: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 348, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:349:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:350: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 350, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:354: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 354, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:355:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:356: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 356, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__154(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__154\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (4U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:360: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 360, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:361:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:362: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 362, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:366: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 366, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:367:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:368: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 368, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__155(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__155\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:372: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 372, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:373:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:374: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 374, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:378: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 378, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:379:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:380: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 380, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__156(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__156\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                          : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                             >> 0x1bU)) >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:384: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 384, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:385:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:386: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 386, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:390: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 390, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:391:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:392: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 392, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__157(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__157\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:396: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 396, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:397:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:398: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 398, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:402: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 402, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:403:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:404: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 404, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__158(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__158\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                       : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0x1bU)) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:408: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 408, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:409:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:410: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 410, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:414: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 414, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:415:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:416: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 416, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__159(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__159\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:420: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 420, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:421:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:422: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 422, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:426: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 426, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:427:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:428: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 428, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:432: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 432, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:433:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:434: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 434, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__160(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__160\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:438: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 438, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:439:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:440: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 440, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:444: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 444, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:445:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:446: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 446, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__161(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__161\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x10006U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:450: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 450, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:451:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:452: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 452, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:456: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 456, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:457:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:458: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 458, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:462: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 462, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:463:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:464: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 464, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__162(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__162\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x1cU == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:468: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 468, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:469:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:470: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 470, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x14U == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:474: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 474, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:475:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:476: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 476, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__163(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__163\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:480: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 480, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:481:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:482: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 482, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x10004U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:486: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 486, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:487:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:488: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 488, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__164(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__164\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:492: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 492, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:493:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:494: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 494, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:498: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 498, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:499:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:500: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 500, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x1dU == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:504: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 504, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:505:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:506: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 506, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__165(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__165\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x15U == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:510: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 510, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:511:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:512: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 512, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x11U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:516: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 516, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:517:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:518: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 518, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__166(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__166\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x10005U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:522: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 522, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:523:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:524: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 524, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:528: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 528, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:529:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:530: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 530, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__167(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__167\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:534: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 534, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:535:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:536: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 536, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x10000U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:540: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 540, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:541:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:542: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 542, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__168(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__168\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:546: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 546, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:547:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:548: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 548, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x11U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:552: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 552, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:553:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:554: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 554, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__169(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__169\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x10001U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:558: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 558, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:559:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:560: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 560, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:564: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 564, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:565:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:566: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 566, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__170(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__170\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:570: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 570, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:571:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:572: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 572, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x10002U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:576: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 576, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:577:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:578: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 578, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__171(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__171\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hffaea87a__0;
    VlWide<8>/*255:0*/ __Vtemp_h436fafb9__0;
    VlWide<8>/*255:0*/ __Vtemp_hf19c6844__0;
    VlWide<8>/*255:0*/ __Vtemp_hec32c67b__0;
    // Body
    VL_EXTEND_WI(256,8, __Vtemp_hffaea87a__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_h436fafb9__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, __Vtemp_hffaea87a__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                      & (~ (IData)(vlSelf->reset))) 
                     & __Vtemp_h436fafb9__0[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:582: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 582, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:583:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:584: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 584, "");
        }
    }
    VL_EXTEND_WI(256,8, __Vtemp_hf19c6844__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 7U)));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_hec32c67b__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, __Vtemp_hf19c6844__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_617) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (__Vtemp_hec32c67b__0[0U] 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:588: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 588, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:589:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:590: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 590, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:594: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 594, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:595:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:596: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 596, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__172(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__172\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hf12b3c14__0;
    VlWide<32>/*1023:0*/ __Vtemp_h78df1d78__0;
    VlWide<32>/*1023:0*/ __Vtemp_h3de2e412__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf12b3c14__1;
    VlWide<32>/*1023:0*/ __Vtemp_h15f0989f__0;
    VlWide<32>/*1023:0*/ __Vtemp_heffb0ea0__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf12b3c14__2;
    VlWide<32>/*1023:0*/ __Vtemp_hd94a8ba0__0;
    VlWide<32>/*1023:0*/ __Vtemp_hdbdbec06__0;
    VlWide<32>/*1023:0*/ __Vtemp_hf12b3c14__3;
    VlWide<32>/*1023:0*/ __Vtemp_h18c34c75__0;
    VlWide<32>/*1023:0*/ __Vtemp_h15388480__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                        != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:600: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 600, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:601:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:602: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 602, "");
        }
    }
    VL_EXTEND_WI(1022,8, __Vtemp_hf12b3c14__0, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    __Vtemp_h78df1d78__0[0U] = (__Vtemp_hf12b3c14__0[0U] 
                                << 2U);
    __Vtemp_h78df1d78__0[1U] = ((__Vtemp_hf12b3c14__0[0U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[1U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[2U] = ((__Vtemp_hf12b3c14__0[1U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[2U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[3U] = ((__Vtemp_hf12b3c14__0[2U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[3U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[4U] = ((__Vtemp_hf12b3c14__0[3U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[4U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[5U] = ((__Vtemp_hf12b3c14__0[4U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[5U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[6U] = ((__Vtemp_hf12b3c14__0[5U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[6U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[7U] = ((__Vtemp_hf12b3c14__0[6U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[7U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[8U] = ((__Vtemp_hf12b3c14__0[7U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[8U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[9U] = ((__Vtemp_hf12b3c14__0[8U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[9U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[0xaU] = ((__Vtemp_hf12b3c14__0[9U] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xaU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xbU] = ((__Vtemp_hf12b3c14__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xbU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xcU] = ((__Vtemp_hf12b3c14__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xcU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xdU] = ((__Vtemp_hf12b3c14__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xdU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xeU] = ((__Vtemp_hf12b3c14__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xeU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xfU] = ((__Vtemp_hf12b3c14__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xfU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0x10U] = ((__Vtemp_hf12b3c14__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x10U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x11U] = ((__Vtemp_hf12b3c14__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x11U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x12U] = ((__Vtemp_hf12b3c14__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x12U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x13U] = ((__Vtemp_hf12b3c14__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x13U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x14U] = ((__Vtemp_hf12b3c14__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x14U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x15U] = ((__Vtemp_hf12b3c14__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x15U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x16U] = ((__Vtemp_hf12b3c14__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x16U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x17U] = ((__Vtemp_hf12b3c14__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x17U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x18U] = ((__Vtemp_hf12b3c14__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x18U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x19U] = ((__Vtemp_hf12b3c14__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x19U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1aU] = ((__Vtemp_hf12b3c14__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1bU] = ((__Vtemp_hf12b3c14__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1cU] = ((__Vtemp_hf12b3c14__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1dU] = ((__Vtemp_hf12b3c14__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1eU] = ((__Vtemp_hf12b3c14__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1fU] = ((__Vtemp_hf12b3c14__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h3de2e412__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h78df1d78__0);
    VL_EXTEND_WI(1022,8, __Vtemp_hf12b3c14__1, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    __Vtemp_h15f0989f__0[0U] = (__Vtemp_hf12b3c14__1[0U] 
                                << 2U);
    __Vtemp_h15f0989f__0[1U] = ((__Vtemp_hf12b3c14__1[0U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[1U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[2U] = ((__Vtemp_hf12b3c14__1[1U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[2U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[3U] = ((__Vtemp_hf12b3c14__1[2U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[3U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[4U] = ((__Vtemp_hf12b3c14__1[3U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[4U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[5U] = ((__Vtemp_hf12b3c14__1[4U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[5U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[6U] = ((__Vtemp_hf12b3c14__1[5U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[6U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[7U] = ((__Vtemp_hf12b3c14__1[6U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[7U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[8U] = ((__Vtemp_hf12b3c14__1[7U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[8U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[9U] = ((__Vtemp_hf12b3c14__1[8U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__1[9U] 
                                              << 2U));
    __Vtemp_h15f0989f__0[0xaU] = ((__Vtemp_hf12b3c14__1[9U] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__1[0xaU] 
                                                << 2U));
    __Vtemp_h15f0989f__0[0xbU] = ((__Vtemp_hf12b3c14__1[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__1[0xbU] 
                                                << 2U));
    __Vtemp_h15f0989f__0[0xcU] = ((__Vtemp_hf12b3c14__1[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__1[0xcU] 
                                                << 2U));
    __Vtemp_h15f0989f__0[0xdU] = ((__Vtemp_hf12b3c14__1[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__1[0xdU] 
                                                << 2U));
    __Vtemp_h15f0989f__0[0xeU] = ((__Vtemp_hf12b3c14__1[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__1[0xeU] 
                                                << 2U));
    __Vtemp_h15f0989f__0[0xfU] = ((__Vtemp_hf12b3c14__1[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__1[0xfU] 
                                                << 2U));
    __Vtemp_h15f0989f__0[0x10U] = ((__Vtemp_hf12b3c14__1[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x10U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x11U] = ((__Vtemp_hf12b3c14__1[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x11U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x12U] = ((__Vtemp_hf12b3c14__1[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x12U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x13U] = ((__Vtemp_hf12b3c14__1[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x13U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x14U] = ((__Vtemp_hf12b3c14__1[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x14U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x15U] = ((__Vtemp_hf12b3c14__1[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x15U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x16U] = ((__Vtemp_hf12b3c14__1[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x16U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x17U] = ((__Vtemp_hf12b3c14__1[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x17U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x18U] = ((__Vtemp_hf12b3c14__1[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x18U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x19U] = ((__Vtemp_hf12b3c14__1[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x19U] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x1aU] = ((__Vtemp_hf12b3c14__1[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x1aU] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x1bU] = ((__Vtemp_hf12b3c14__1[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x1bU] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x1cU] = ((__Vtemp_hf12b3c14__1[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x1cU] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x1dU] = ((__Vtemp_hf12b3c14__1[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x1dU] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x1eU] = ((__Vtemp_hf12b3c14__1[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x1eU] 
                                                 << 2U));
    __Vtemp_h15f0989f__0[0x1fU] = ((__Vtemp_hf12b3c14__1[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__1[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_heffb0ea0__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h15f0989f__0);
    VL_EXTEND_WI(1022,8, __Vtemp_hf12b3c14__2, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    __Vtemp_hd94a8ba0__0[0U] = (__Vtemp_hf12b3c14__2[0U] 
                                << 2U);
    __Vtemp_hd94a8ba0__0[1U] = ((__Vtemp_hf12b3c14__2[0U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[1U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[2U] = ((__Vtemp_hf12b3c14__2[1U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[2U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[3U] = ((__Vtemp_hf12b3c14__2[2U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[3U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[4U] = ((__Vtemp_hf12b3c14__2[3U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[4U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[5U] = ((__Vtemp_hf12b3c14__2[4U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[5U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[6U] = ((__Vtemp_hf12b3c14__2[5U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[6U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[7U] = ((__Vtemp_hf12b3c14__2[6U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[7U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[8U] = ((__Vtemp_hf12b3c14__2[7U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[8U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[9U] = ((__Vtemp_hf12b3c14__2[8U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__2[9U] 
                                              << 2U));
    __Vtemp_hd94a8ba0__0[0xaU] = ((__Vtemp_hf12b3c14__2[9U] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__2[0xaU] 
                                                << 2U));
    __Vtemp_hd94a8ba0__0[0xbU] = ((__Vtemp_hf12b3c14__2[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__2[0xbU] 
                                                << 2U));
    __Vtemp_hd94a8ba0__0[0xcU] = ((__Vtemp_hf12b3c14__2[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__2[0xcU] 
                                                << 2U));
    __Vtemp_hd94a8ba0__0[0xdU] = ((__Vtemp_hf12b3c14__2[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__2[0xdU] 
                                                << 2U));
    __Vtemp_hd94a8ba0__0[0xeU] = ((__Vtemp_hf12b3c14__2[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__2[0xeU] 
                                                << 2U));
    __Vtemp_hd94a8ba0__0[0xfU] = ((__Vtemp_hf12b3c14__2[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__2[0xfU] 
                                                << 2U));
    __Vtemp_hd94a8ba0__0[0x10U] = ((__Vtemp_hf12b3c14__2[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x10U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x11U] = ((__Vtemp_hf12b3c14__2[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x11U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x12U] = ((__Vtemp_hf12b3c14__2[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x12U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x13U] = ((__Vtemp_hf12b3c14__2[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x13U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x14U] = ((__Vtemp_hf12b3c14__2[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x14U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x15U] = ((__Vtemp_hf12b3c14__2[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x15U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x16U] = ((__Vtemp_hf12b3c14__2[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x16U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x17U] = ((__Vtemp_hf12b3c14__2[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x17U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x18U] = ((__Vtemp_hf12b3c14__2[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x18U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x19U] = ((__Vtemp_hf12b3c14__2[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x19U] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x1aU] = ((__Vtemp_hf12b3c14__2[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x1aU] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x1bU] = ((__Vtemp_hf12b3c14__2[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x1bU] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x1cU] = ((__Vtemp_hf12b3c14__2[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x1cU] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x1dU] = ((__Vtemp_hf12b3c14__2[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x1dU] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x1eU] = ((__Vtemp_hf12b3c14__2[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x1eU] 
                                                 << 2U));
    __Vtemp_hd94a8ba0__0[0x1fU] = ((__Vtemp_hf12b3c14__2[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__2[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_hdbdbec06__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hd94a8ba0__0);
    VL_EXTEND_WI(1022,8, __Vtemp_hf12b3c14__3, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    __Vtemp_h18c34c75__0[0U] = (__Vtemp_hf12b3c14__3[0U] 
                                << 2U);
    __Vtemp_h18c34c75__0[1U] = ((__Vtemp_hf12b3c14__3[0U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[1U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[2U] = ((__Vtemp_hf12b3c14__3[1U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[2U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[3U] = ((__Vtemp_hf12b3c14__3[2U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[3U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[4U] = ((__Vtemp_hf12b3c14__3[3U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[4U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[5U] = ((__Vtemp_hf12b3c14__3[4U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[5U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[6U] = ((__Vtemp_hf12b3c14__3[5U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[6U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[7U] = ((__Vtemp_hf12b3c14__3[6U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[7U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[8U] = ((__Vtemp_hf12b3c14__3[7U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[8U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[9U] = ((__Vtemp_hf12b3c14__3[8U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__3[9U] 
                                              << 2U));
    __Vtemp_h18c34c75__0[0xaU] = ((__Vtemp_hf12b3c14__3[9U] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__3[0xaU] 
                                                << 2U));
    __Vtemp_h18c34c75__0[0xbU] = ((__Vtemp_hf12b3c14__3[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__3[0xbU] 
                                                << 2U));
    __Vtemp_h18c34c75__0[0xcU] = ((__Vtemp_hf12b3c14__3[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__3[0xcU] 
                                                << 2U));
    __Vtemp_h18c34c75__0[0xdU] = ((__Vtemp_hf12b3c14__3[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__3[0xdU] 
                                                << 2U));
    __Vtemp_h18c34c75__0[0xeU] = ((__Vtemp_hf12b3c14__3[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__3[0xeU] 
                                                << 2U));
    __Vtemp_h18c34c75__0[0xfU] = ((__Vtemp_hf12b3c14__3[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__3[0xfU] 
                                                << 2U));
    __Vtemp_h18c34c75__0[0x10U] = ((__Vtemp_hf12b3c14__3[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x10U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x11U] = ((__Vtemp_hf12b3c14__3[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x11U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x12U] = ((__Vtemp_hf12b3c14__3[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x12U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x13U] = ((__Vtemp_hf12b3c14__3[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x13U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x14U] = ((__Vtemp_hf12b3c14__3[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x14U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x15U] = ((__Vtemp_hf12b3c14__3[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x15U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x16U] = ((__Vtemp_hf12b3c14__3[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x16U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x17U] = ((__Vtemp_hf12b3c14__3[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x17U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x18U] = ((__Vtemp_hf12b3c14__3[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x18U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x19U] = ((__Vtemp_hf12b3c14__3[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x19U] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x1aU] = ((__Vtemp_hf12b3c14__3[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x1aU] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x1bU] = ((__Vtemp_hf12b3c14__3[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x1bU] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x1cU] = ((__Vtemp_hf12b3c14__3[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x1cU] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x1dU] = ((__Vtemp_hf12b3c14__3[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x1dU] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x1eU] = ((__Vtemp_hf12b3c14__3[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x1eU] 
                                                 << 2U));
    __Vtemp_h18c34c75__0[0x1fU] = ((__Vtemp_hf12b3c14__3[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__3[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h15388480__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h18c34c75__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_617) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_h3de2e412__0[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_heffb0ea0__0[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_hdbdbec06__0[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_h15388480__0[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:606: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 606, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:607:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:608: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 608, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__173(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__173\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hf12b3c14__0;
    VlWide<32>/*1023:0*/ __Vtemp_h78df1d78__0;
    VlWide<32>/*1023:0*/ __Vtemp_h35818b26__0;
    // Body
    VL_EXTEND_WI(1022,8, __Vtemp_hf12b3c14__0, (0xffU 
                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 7U)));
    __Vtemp_h78df1d78__0[0U] = (__Vtemp_hf12b3c14__0[0U] 
                                << 2U);
    __Vtemp_h78df1d78__0[1U] = ((__Vtemp_hf12b3c14__0[0U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[1U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[2U] = ((__Vtemp_hf12b3c14__0[1U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[2U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[3U] = ((__Vtemp_hf12b3c14__0[2U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[3U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[4U] = ((__Vtemp_hf12b3c14__0[3U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[4U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[5U] = ((__Vtemp_hf12b3c14__0[4U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[5U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[6U] = ((__Vtemp_hf12b3c14__0[5U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[6U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[7U] = ((__Vtemp_hf12b3c14__0[6U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[7U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[8U] = ((__Vtemp_hf12b3c14__0[7U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[8U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[9U] = ((__Vtemp_hf12b3c14__0[8U] 
                                 >> 0x1eU) | (__Vtemp_hf12b3c14__0[9U] 
                                              << 2U));
    __Vtemp_h78df1d78__0[0xaU] = ((__Vtemp_hf12b3c14__0[9U] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xaU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xbU] = ((__Vtemp_hf12b3c14__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xbU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xcU] = ((__Vtemp_hf12b3c14__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xcU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xdU] = ((__Vtemp_hf12b3c14__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xdU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xeU] = ((__Vtemp_hf12b3c14__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xeU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0xfU] = ((__Vtemp_hf12b3c14__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hf12b3c14__0[0xfU] 
                                                << 2U));
    __Vtemp_h78df1d78__0[0x10U] = ((__Vtemp_hf12b3c14__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x10U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x11U] = ((__Vtemp_hf12b3c14__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x11U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x12U] = ((__Vtemp_hf12b3c14__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x12U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x13U] = ((__Vtemp_hf12b3c14__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x13U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x14U] = ((__Vtemp_hf12b3c14__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x14U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x15U] = ((__Vtemp_hf12b3c14__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x15U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x16U] = ((__Vtemp_hf12b3c14__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x16U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x17U] = ((__Vtemp_hf12b3c14__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x17U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x18U] = ((__Vtemp_hf12b3c14__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x18U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x19U] = ((__Vtemp_hf12b3c14__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x19U] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1aU] = ((__Vtemp_hf12b3c14__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1bU] = ((__Vtemp_hf12b3c14__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1cU] = ((__Vtemp_hf12b3c14__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1dU] = ((__Vtemp_hf12b3c14__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1eU] = ((__Vtemp_hf12b3c14__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h78df1d78__0[0x1fU] = ((__Vtemp_hf12b3c14__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hf12b3c14__0[0x1fU] 
                                                 << 2U));
    VL_SHIFTR_WWW(1024,1024,1024, __Vtemp_h35818b26__0, vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h78df1d78__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_617) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 5U)) != (7U & (__Vtemp_h35818b26__0[0U] 
                                                 >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:612: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 612, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:613:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:614: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 614, "");
        }
    }
    if (VL_UNLIKELY(((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)) 
                        & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source) 
                           == (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 7U)))) & 
                       (6U != (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__x1_d_ready)) 
                           | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__full))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:618: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 618, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:619:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:620: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 620, "");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h4e9f510d_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__174(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__174\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hffaea87a__0;
    VlWide<8>/*255:0*/ __Vtemp_ha0eee9e6__0;
    VlWide<8>/*255:0*/ __Vtemp_hf19c6844__0;
    VlWide<8>/*255:0*/ __Vtemp_h98ae10a8__0;
    VlWide<8>/*255:0*/ __Vtemp_hffaea87a__1;
    VlWide<8>/*255:0*/ __Vtemp_h9c823e80__0;
    // Body
    VL_EXTEND_WI(256,8, __Vtemp_hffaea87a__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_ha0eee9e6__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hffaea87a__0);
    VL_EXTEND_WI(256,8, __Vtemp_hf19c6844__0, (0xffU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 7U)));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h98ae10a8__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hf19c6844__0);
    VL_EXTEND_WI(256,8, __Vtemp_hffaea87a__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWW(256,256,256, __Vtemp_h9c823e80__0, VTestHarness__ConstPool__CONST_h4e9f510d_0, __Vtemp_hffaea87a__1);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((0U != ((((((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                  ? 
                                                 __Vtemp_ha0eee9e6__0[0U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[0U]) 
                                                ^ (
                                                   ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (6U 
                                                       != 
                                                       (7U 
                                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                    ? 
                                                   __Vtemp_h98ae10a8__0[0U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                               | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                    ? 
                                                   __Vtemp_ha0eee9e6__0[1U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[1U]) 
                                                  ^ 
                                                  (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (6U 
                                                       != 
                                                       (7U 
                                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                    ? 
                                                   __Vtemp_h98ae10a8__0[1U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                              | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                   ? 
                                                  __Vtemp_ha0eee9e6__0[2U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[2U]) 
                                                 ^ 
                                                 (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (6U 
                                                      != 
                                                      (7U 
                                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                   ? 
                                                  __Vtemp_h98ae10a8__0[2U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                             | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                  ? 
                                                 __Vtemp_ha0eee9e6__0[3U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[3U]) 
                                                ^ (
                                                   ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (6U 
                                                       != 
                                                       (7U 
                                                        & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                    ? 
                                                   __Vtemp_h98ae10a8__0[3U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                            | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                 ? 
                                                __Vtemp_ha0eee9e6__0[4U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h9e67c271_0[4U]) 
                                               ^ ((
                                                   (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (6U 
                                                      != 
                                                      (7U 
                                                       & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                   ? 
                                                  __Vtemp_h98ae10a8__0[4U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                           | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                ? __Vtemp_ha0eee9e6__0[5U]
                                                : VTestHarness__ConstPool__CONST_h9e67c271_0[5U]) 
                                              ^ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                  & (6U 
                                                     != 
                                                     (7U 
                                                      & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                  ? 
                                                 __Vtemp_h98ae10a8__0[5U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                          | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                               ? __Vtemp_ha0eee9e6__0[6U]
                                               : VTestHarness__ConstPool__CONST_h9e67c271_0[6U]) 
                                             ^ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                 & (6U 
                                                    != 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                 ? 
                                                __Vtemp_h98ae10a8__0[6U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                              ? __Vtemp_ha0eee9e6__0[7U]
                                              : VTestHarness__ConstPool__CONST_h9e67c271_0[7U]) 
                                            ^ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                & (6U 
                                                   != 
                                                   (7U 
                                                    & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                                ? __Vtemp_h98ae10a8__0[7U]
                                                : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))) 
                                 | (0U == ((((((((VTestHarness__ConstPool__CONST_h9e67c271_0[0U] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                    ? 
                                                   __Vtemp_h9c823e80__0[0U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
                                                 | (VTestHarness__ConstPool__CONST_h9e67c271_0[1U] 
                                                    ^ 
                                                    ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                      ? 
                                                     __Vtemp_h9c823e80__0[1U]
                                                      : 
                                                     VTestHarness__ConstPool__CONST_h9e67c271_0[1U]))) 
                                                | (VTestHarness__ConstPool__CONST_h9e67c271_0[2U] 
                                                   ^ 
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                     ? 
                                                    __Vtemp_h9c823e80__0[2U]
                                                     : 
                                                    VTestHarness__ConstPool__CONST_h9e67c271_0[2U]))) 
                                               | (VTestHarness__ConstPool__CONST_h9e67c271_0[3U] 
                                                  ^ 
                                                  ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                    ? 
                                                   __Vtemp_h9c823e80__0[3U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[3U]))) 
                                              | (VTestHarness__ConstPool__CONST_h9e67c271_0[4U] 
                                                 ^ 
                                                 ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                   ? 
                                                  __Vtemp_h9c823e80__0[4U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[4U]))) 
                                             | (VTestHarness__ConstPool__CONST_h9e67c271_0[5U] 
                                                ^ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                    ? 
                                                   __Vtemp_h9c823e80__0[5U]
                                                    : 
                                                   VTestHarness__ConstPool__CONST_h9e67c271_0[5U]))) 
                                            | (VTestHarness__ConstPool__CONST_h9e67c271_0[6U] 
                                               ^ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                   ? 
                                                  __Vtemp_h9c823e80__0[6U]
                                                   : 
                                                  VTestHarness__ConstPool__CONST_h9e67c271_0[6U]))) 
                                           | (VTestHarness__ConstPool__CONST_h9e67c271_0[7U] 
                                              ^ ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output)
                                                  ? 
                                                 __Vtemp_h9c823e80__0[7U]
                                                  : 
                                                 VTestHarness__ConstPool__CONST_h9e67c271_0[7U])))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:624: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 624, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:625:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:626: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 626, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == ((((((((VTestHarness__ConstPool__CONST_h9e67c271_0[0U] 
                                                 ^ 
                                                 vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U]) 
                                                | (VTestHarness__ConstPool__CONST_h9e67c271_0[1U] 
                                                   ^ 
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U])) 
                                               | (VTestHarness__ConstPool__CONST_h9e67c271_0[2U] 
                                                  ^ 
                                                  vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U])) 
                                              | (VTestHarness__ConstPool__CONST_h9e67c271_0[3U] 
                                                 ^ 
                                                 vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U])) 
                                             | (VTestHarness__ConstPool__CONST_h9e67c271_0[4U] 
                                                ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])) 
                                            | (VTestHarness__ConstPool__CONST_h9e67c271_0[5U] 
                                               ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U])) 
                                           | (VTestHarness__ConstPool__CONST_h9e67c271_0[6U] 
                                              ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U])) 
                                          | (VTestHarness__ConstPool__CONST_h9e67c271_0[7U] 
                                             ^ vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U]))) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:630: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 630, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:631:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:632: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 632, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__175(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__175\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:636: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 636, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:637:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:638: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 638, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:642: Assertion failed in %NTestHarness.ram.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:45)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 642, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv:643:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_75.sv:644: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_75.sv", 644, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:271: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 271, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:272:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:273: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 273, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__176(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__176\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:277: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 277, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:278:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:279: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 279, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:283: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 283, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:284:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:285: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 285, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:289: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 289, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:290:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:291: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 291, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__177(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__177\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:295: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 295, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:296:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:297: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 297, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                           >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:301: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 301, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:302:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:303: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 303, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:307: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 307, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:308:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:309: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 309, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__178(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__178\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:313: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 313, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:314:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:315: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 315, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:319: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 319, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:320:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:321: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 321, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:325: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 325, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:326:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:327: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 327, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__179(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__179\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:331: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 331, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:332:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:333: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 333, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:337: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 337, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:338:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:339: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 339, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__180(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__180\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U == (0x38000000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:343: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 343, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:344:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:345: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 345, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                           >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:349: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 349, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:350:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:351: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 351, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:355: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 355, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:356:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:357: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 357, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__181(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__181\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x13U))) 
                           & ((2U == (0x1fffU & (IData)(
                                                        (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address 
                                                         >> 0x10U)))) 
                              | (0x10000U == (0x1ffffU 
                                              & (IData)(
                                                        (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address 
                                                         >> 0xcU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:361: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 361, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:362:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:363: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 363, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:367: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 367, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:368:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:369: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 369, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__182(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__182\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:373: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 373, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:374:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:375: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 375, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:379: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 379, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:380:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:381: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 381, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__183(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__183\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:385: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 385, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:386:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:387: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 387, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(((0x10000000ULL == 
                                    (0x1ffff000ULL 
                                     & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                   & (7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0x13U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:391: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 391, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:392:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:393: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 393, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__184(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__184\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:397: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 397, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:398:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:399: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 399, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:403: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 403, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:404:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:405: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 405, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__185(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__185\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:409: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 409, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:410:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:411: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 411, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__186(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__186\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(((0x10000000ULL == 
                                    (0x1ffff000ULL 
                                     & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                   & (7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0x13U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:415: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 415, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:416:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:417: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 417, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:421: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 421, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:422:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:423: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 423, "");
        }
    }
}
