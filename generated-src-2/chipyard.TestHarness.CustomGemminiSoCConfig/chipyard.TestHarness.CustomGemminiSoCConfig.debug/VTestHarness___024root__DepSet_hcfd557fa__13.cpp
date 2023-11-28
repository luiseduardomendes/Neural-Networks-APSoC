// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h3892cc72_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b57_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h478702bb_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d99c76_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d81c7e_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6054(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6054\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h147471a4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h8c58709f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1f99dfd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h4a2dd5e2__0;
    VlWide<4>/*127:0*/ __Vtemp_h1abc586c__0;
    VlWide<9>/*287:0*/ __Vtemp_hca8fe9bb__0;
    VlWide<33>/*1055:0*/ __Vtemp_h44af8411__0;
    VlWide<33>/*1055:0*/ __Vtemp_h7f9506cd__0;
    VlWide<33>/*1055:0*/ __Vtemp_hc5d3311f__0;
    VlWide<33>/*1055:0*/ __Vtemp_h689edc44__0;
    VlWide<33>/*1055:0*/ __Vtemp_h49659e28__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6c5e52f6__0;
    VlWide<33>/*1055:0*/ __Vtemp_h4837c245__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h8c58709f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_ha1f99dfd__0, __Vtemp_hc961d23f__0, __Vtemp_h8c58709f__0);
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h4a2dd5e2__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h1abc586c__0, __Vtemp_hc961d23f__1, __Vtemp_h4a2dd5e2__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vtemp_h147471a4__0[1U] = 0U;
        __Vtemp_h147471a4__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1470) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (((0x1aU >= 
                                          (0xfU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                          ? (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))))
                                          : 0U) >> 3U))
                                  : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U))));
        }
        __Vtemp_h147471a4__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                         ? __Vtemp_ha1f99dfd__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                     ? 
                                                    __Vtemp_h1abc586c__0[1U]
                                                     : 0U)));
        __Vtemp_h147471a4__0[2U] = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                               ? __Vtemp_ha1f99dfd__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                 ? 
                                                __Vtemp_h1abc586c__0[2U]
                                                 : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                    ? __Vtemp_ha1f99dfd__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                      ? __Vtemp_h1abc586c__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h147471a4__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h147471a4__0[2U];
    VL_EXTEND_WI(1027,4, __Vtemp_h44af8411__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h7f9506cd__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source));
    __Vtemp_hc5d3311f__0[0U] = (__Vtemp_h7f9506cd__0[0U] 
                                << 2U);
    __Vtemp_hc5d3311f__0[1U] = ((__Vtemp_h7f9506cd__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[1U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[2U] = ((__Vtemp_h7f9506cd__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[2U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[3U] = ((__Vtemp_h7f9506cd__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[3U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[4U] = ((__Vtemp_h7f9506cd__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[4U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[5U] = ((__Vtemp_h7f9506cd__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[5U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[6U] = ((__Vtemp_h7f9506cd__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[6U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[7U] = ((__Vtemp_h7f9506cd__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[7U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[8U] = ((__Vtemp_h7f9506cd__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[8U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[9U] = ((__Vtemp_h7f9506cd__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h7f9506cd__0[9U] 
                                              << 2U));
    __Vtemp_hc5d3311f__0[0xaU] = ((__Vtemp_h7f9506cd__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h7f9506cd__0[0xaU] 
                                                << 2U));
    __Vtemp_hc5d3311f__0[0xbU] = ((__Vtemp_h7f9506cd__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h7f9506cd__0[0xbU] 
                                                << 2U));
    __Vtemp_hc5d3311f__0[0xcU] = ((__Vtemp_h7f9506cd__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h7f9506cd__0[0xcU] 
                                                << 2U));
    __Vtemp_hc5d3311f__0[0xdU] = ((__Vtemp_h7f9506cd__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h7f9506cd__0[0xdU] 
                                                << 2U));
    __Vtemp_hc5d3311f__0[0xeU] = ((__Vtemp_h7f9506cd__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h7f9506cd__0[0xeU] 
                                                << 2U));
    __Vtemp_hc5d3311f__0[0xfU] = ((__Vtemp_h7f9506cd__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h7f9506cd__0[0xfU] 
                                                << 2U));
    __Vtemp_hc5d3311f__0[0x10U] = ((__Vtemp_h7f9506cd__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x10U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x11U] = ((__Vtemp_h7f9506cd__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x11U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x12U] = ((__Vtemp_h7f9506cd__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x12U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x13U] = ((__Vtemp_h7f9506cd__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x13U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x14U] = ((__Vtemp_h7f9506cd__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x14U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x15U] = ((__Vtemp_h7f9506cd__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x15U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x16U] = ((__Vtemp_h7f9506cd__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x16U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x17U] = ((__Vtemp_h7f9506cd__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x17U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x18U] = ((__Vtemp_h7f9506cd__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x18U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x19U] = ((__Vtemp_h7f9506cd__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x19U] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x1aU] = ((__Vtemp_h7f9506cd__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x1aU] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x1bU] = ((__Vtemp_h7f9506cd__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x1bU] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x1cU] = ((__Vtemp_h7f9506cd__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x1cU] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x1dU] = ((__Vtemp_h7f9506cd__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x1dU] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x1eU] = ((__Vtemp_h7f9506cd__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x1eU] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x1fU] = ((__Vtemp_h7f9506cd__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x1fU] 
                                                 << 2U));
    __Vtemp_hc5d3311f__0[0x20U] = ((__Vtemp_h7f9506cd__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h7f9506cd__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h689edc44__0, __Vtemp_h44af8411__0, __Vtemp_hc5d3311f__0);
    VL_EXTEND_WI(1037,7, __Vtemp_h49659e28__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)));
    __Vtemp_h6c5e52f6__0[0U] = (__Vtemp_h49659e28__0[0U] 
                                << 2U);
    __Vtemp_h6c5e52f6__0[1U] = ((__Vtemp_h49659e28__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[1U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[2U] = ((__Vtemp_h49659e28__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[2U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[3U] = ((__Vtemp_h49659e28__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[3U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[4U] = ((__Vtemp_h49659e28__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[4U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[5U] = ((__Vtemp_h49659e28__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[5U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[6U] = ((__Vtemp_h49659e28__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[6U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[7U] = ((__Vtemp_h49659e28__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[7U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[8U] = ((__Vtemp_h49659e28__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[8U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[9U] = ((__Vtemp_h49659e28__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[9U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[0xaU] = ((__Vtemp_h49659e28__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xaU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xbU] = ((__Vtemp_h49659e28__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xbU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xcU] = ((__Vtemp_h49659e28__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xcU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xdU] = ((__Vtemp_h49659e28__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xdU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xeU] = ((__Vtemp_h49659e28__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xeU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xfU] = ((__Vtemp_h49659e28__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xfU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0x10U] = ((__Vtemp_h49659e28__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x10U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x11U] = ((__Vtemp_h49659e28__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x11U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x12U] = ((__Vtemp_h49659e28__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x12U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x13U] = ((__Vtemp_h49659e28__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x13U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x14U] = ((__Vtemp_h49659e28__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x14U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x15U] = ((__Vtemp_h49659e28__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x15U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x16U] = ((__Vtemp_h49659e28__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x16U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x17U] = ((__Vtemp_h49659e28__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x17U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x18U] = ((__Vtemp_h49659e28__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x18U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x19U] = ((__Vtemp_h49659e28__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x19U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1aU] = ((__Vtemp_h49659e28__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1bU] = ((__Vtemp_h49659e28__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1cU] = ((__Vtemp_h49659e28__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1dU] = ((__Vtemp_h49659e28__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1eU] = ((__Vtemp_h49659e28__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1fU] = ((__Vtemp_h49659e28__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x20U] = ((__Vtemp_h49659e28__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_h4837c245__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_h6c5e52f6__0);
    __Vtemp_hca8fe9bb__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h689edc44__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h4837c245__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_hca8fe9bb__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h689edc44__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h4837c245__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_hca8fe9bb__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h689edc44__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h4837c245__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_hca8fe9bb__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h689edc44__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h4837c245__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_hca8fe9bb__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h689edc44__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h4837c245__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_hca8fe9bb__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h689edc44__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h4837c245__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_hca8fe9bb__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h689edc44__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h4837c245__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_hca8fe9bb__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h689edc44__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h4837c245__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h689edc44__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h4837c245__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hca8fe9bb__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hca8fe9bb__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_hca8fe9bb__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_hca8fe9bb__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_hca8fe9bb__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_hca8fe9bb__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_hca8fe9bb__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_hca8fe9bb__0[8U];
}

extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h81905067_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a540f1_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h881bc0c4_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d99c4e_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6055(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6055\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4259fbec__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h557ea57f__0;
    VlWide<4>/*127:0*/ __Vtemp_hbedf69c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h4a2dd5e2__0;
    VlWide<4>/*127:0*/ __Vtemp_h1abc586c__0;
    VlWide<17>/*543:0*/ __Vtemp_he30e4ba5__0;
    VlWide<33>/*1055:0*/ __Vtemp_hc746b210__0;
    VlWide<33>/*1055:0*/ __Vtemp_h7f9506cd__0;
    VlWide<33>/*1055:0*/ __Vtemp_hc5d3210e__0;
    VlWide<33>/*1055:0*/ __Vtemp_hd086e6cd__0;
    VlWide<33>/*1055:0*/ __Vtemp_h49659e28__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6c5e42e7__0;
    VlWide<33>/*1055:0*/ __Vtemp_h723db94c__0;
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
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        __Vtemp_h4259fbec__0[1U] = 0U;
        __Vtemp_h4259fbec__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_h4259fbec__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                         ? __Vtemp_hbedf69c8__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                     ? 
                                                    __Vtemp_h1abc586c__0[1U]
                                                     : 0U)));
        __Vtemp_h4259fbec__0[2U] = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                               ? __Vtemp_hbedf69c8__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                 ? 
                                                __Vtemp_h1abc586c__0[2U]
                                                 : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                    ? __Vtemp_hbedf69c8__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                      ? __Vtemp_h1abc586c__0[0U] : 0U)));
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1470) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (((0x1aU >= 
                                          (0xfU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                          ? (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))))
                                          : 0U) >> 3U))
                                  : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U))));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
            = (0x1fffffffffULL & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                       ? VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U)))))
                                                     : 0ULL))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h4259fbec__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h4259fbec__0[2U];
    VL_EXTEND_WI(1028,5, __Vtemp_hc746b210__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size) 
                                                    << 1U))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h7f9506cd__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source));
    __Vtemp_hc5d3210e__0[0U] = (__Vtemp_h7f9506cd__0[0U] 
                                << 3U);
    __Vtemp_hc5d3210e__0[1U] = ((__Vtemp_h7f9506cd__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[1U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[2U] = ((__Vtemp_h7f9506cd__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[2U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[3U] = ((__Vtemp_h7f9506cd__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[3U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[4U] = ((__Vtemp_h7f9506cd__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[4U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[5U] = ((__Vtemp_h7f9506cd__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[5U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[6U] = ((__Vtemp_h7f9506cd__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[6U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[7U] = ((__Vtemp_h7f9506cd__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[7U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[8U] = ((__Vtemp_h7f9506cd__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[8U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[9U] = ((__Vtemp_h7f9506cd__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h7f9506cd__0[9U] 
                                              << 3U));
    __Vtemp_hc5d3210e__0[0xaU] = ((__Vtemp_h7f9506cd__0[9U] 
                                   >> 0x1dU) | (__Vtemp_h7f9506cd__0[0xaU] 
                                                << 3U));
    __Vtemp_hc5d3210e__0[0xbU] = ((__Vtemp_h7f9506cd__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h7f9506cd__0[0xbU] 
                                                << 3U));
    __Vtemp_hc5d3210e__0[0xcU] = ((__Vtemp_h7f9506cd__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h7f9506cd__0[0xcU] 
                                                << 3U));
    __Vtemp_hc5d3210e__0[0xdU] = ((__Vtemp_h7f9506cd__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h7f9506cd__0[0xdU] 
                                                << 3U));
    __Vtemp_hc5d3210e__0[0xeU] = ((__Vtemp_h7f9506cd__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h7f9506cd__0[0xeU] 
                                                << 3U));
    __Vtemp_hc5d3210e__0[0xfU] = ((__Vtemp_h7f9506cd__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h7f9506cd__0[0xfU] 
                                                << 3U));
    __Vtemp_hc5d3210e__0[0x10U] = ((__Vtemp_h7f9506cd__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x10U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x11U] = ((__Vtemp_h7f9506cd__0[0x10U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x11U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x12U] = ((__Vtemp_h7f9506cd__0[0x11U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x12U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x13U] = ((__Vtemp_h7f9506cd__0[0x12U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x13U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x14U] = ((__Vtemp_h7f9506cd__0[0x13U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x14U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x15U] = ((__Vtemp_h7f9506cd__0[0x14U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x15U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x16U] = ((__Vtemp_h7f9506cd__0[0x15U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x16U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x17U] = ((__Vtemp_h7f9506cd__0[0x16U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x17U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x18U] = ((__Vtemp_h7f9506cd__0[0x17U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x18U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x19U] = ((__Vtemp_h7f9506cd__0[0x18U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x19U] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x1aU] = ((__Vtemp_h7f9506cd__0[0x19U] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x1aU] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x1bU] = ((__Vtemp_h7f9506cd__0[0x1aU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x1bU] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x1cU] = ((__Vtemp_h7f9506cd__0[0x1bU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x1cU] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x1dU] = ((__Vtemp_h7f9506cd__0[0x1cU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x1dU] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x1eU] = ((__Vtemp_h7f9506cd__0[0x1dU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x1eU] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x1fU] = ((__Vtemp_h7f9506cd__0[0x1eU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x1fU] 
                                                 << 3U));
    __Vtemp_hc5d3210e__0[0x20U] = ((__Vtemp_h7f9506cd__0[0x1fU] 
                                    >> 0x1dU) | (__Vtemp_h7f9506cd__0[0x20U] 
                                                 << 3U));
    VL_SHIFTL_WWW(1028,1028,1028, __Vtemp_hd086e6cd__0, __Vtemp_hc746b210__0, __Vtemp_hc5d3210e__0);
    VL_EXTEND_WI(1036,7, __Vtemp_h49659e28__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)));
    __Vtemp_h6c5e42e7__0[0U] = (__Vtemp_h49659e28__0[0U] 
                                << 3U);
    __Vtemp_h6c5e42e7__0[1U] = ((__Vtemp_h49659e28__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[1U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[2U] = ((__Vtemp_h49659e28__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[2U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[3U] = ((__Vtemp_h49659e28__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[3U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[4U] = ((__Vtemp_h49659e28__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[4U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[5U] = ((__Vtemp_h49659e28__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[5U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[6U] = ((__Vtemp_h49659e28__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[6U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[7U] = ((__Vtemp_h49659e28__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[7U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[8U] = ((__Vtemp_h49659e28__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[8U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[9U] = ((__Vtemp_h49659e28__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__0[9U] 
                                              << 3U));
    __Vtemp_h6c5e42e7__0[0xaU] = ((__Vtemp_h49659e28__0[9U] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__0[0xaU] 
                                                << 3U));
    __Vtemp_h6c5e42e7__0[0xbU] = ((__Vtemp_h49659e28__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__0[0xbU] 
                                                << 3U));
    __Vtemp_h6c5e42e7__0[0xcU] = ((__Vtemp_h49659e28__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__0[0xcU] 
                                                << 3U));
    __Vtemp_h6c5e42e7__0[0xdU] = ((__Vtemp_h49659e28__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__0[0xdU] 
                                                << 3U));
    __Vtemp_h6c5e42e7__0[0xeU] = ((__Vtemp_h49659e28__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__0[0xeU] 
                                                << 3U));
    __Vtemp_h6c5e42e7__0[0xfU] = ((__Vtemp_h49659e28__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__0[0xfU] 
                                                << 3U));
    __Vtemp_h6c5e42e7__0[0x10U] = ((__Vtemp_h49659e28__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x10U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x11U] = ((__Vtemp_h49659e28__0[0x10U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x11U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x12U] = ((__Vtemp_h49659e28__0[0x11U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x12U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x13U] = ((__Vtemp_h49659e28__0[0x12U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x13U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x14U] = ((__Vtemp_h49659e28__0[0x13U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x14U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x15U] = ((__Vtemp_h49659e28__0[0x14U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x15U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x16U] = ((__Vtemp_h49659e28__0[0x15U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x16U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x17U] = ((__Vtemp_h49659e28__0[0x16U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x17U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x18U] = ((__Vtemp_h49659e28__0[0x17U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x18U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x19U] = ((__Vtemp_h49659e28__0[0x18U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x19U] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x1aU] = ((__Vtemp_h49659e28__0[0x19U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x1aU] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x1bU] = ((__Vtemp_h49659e28__0[0x1aU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x1bU] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x1cU] = ((__Vtemp_h49659e28__0[0x1bU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x1cU] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x1dU] = ((__Vtemp_h49659e28__0[0x1cU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x1dU] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x1eU] = ((__Vtemp_h49659e28__0[0x1dU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x1eU] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x1fU] = ((__Vtemp_h49659e28__0[0x1eU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x1fU] 
                                                 << 3U));
    __Vtemp_h6c5e42e7__0[0x20U] = ((__Vtemp_h49659e28__0[0x1fU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__0[0x20U] 
                                                 << 3U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_h723db94c__0, VTestHarness__ConstPool__CONST_h81905067_0, __Vtemp_h6c5e42e7__0);
    __Vtemp_he30e4ba5__0[1U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[1U] 
                                               & __Vtemp_hd086e6cd__0[1U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h723db94c__0[1U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[1U])))));
    __Vtemp_he30e4ba5__0[2U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[2U] 
                                               & __Vtemp_hd086e6cd__0[2U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h723db94c__0[2U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[2U])))));
    __Vtemp_he30e4ba5__0[3U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[3U] 
                                               & __Vtemp_hd086e6cd__0[3U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h723db94c__0[3U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[3U])))));
    __Vtemp_he30e4ba5__0[4U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[4U] 
                                               & __Vtemp_hd086e6cd__0[4U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h723db94c__0[4U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[4U])))));
    __Vtemp_he30e4ba5__0[5U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[5U] 
                                               & __Vtemp_hd086e6cd__0[5U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h723db94c__0[5U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[5U])))));
    __Vtemp_he30e4ba5__0[6U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[6U] 
                                               & __Vtemp_hd086e6cd__0[6U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h723db94c__0[6U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[6U])))));
    __Vtemp_he30e4ba5__0[7U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[7U] 
                                               & __Vtemp_hd086e6cd__0[7U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h723db94c__0[7U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[7U])))));
    __Vtemp_he30e4ba5__0[8U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[8U] 
                                               & __Vtemp_hd086e6cd__0[8U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h723db94c__0[8U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[8U])))));
    __Vtemp_he30e4ba5__0[9U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[9U] 
                                               & __Vtemp_hd086e6cd__0[9U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[9U] 
                                                 & __Vtemp_h723db94c__0[9U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[9U])))));
    __Vtemp_he30e4ba5__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xaU] 
                                                 & __Vtemp_hd086e6cd__0[0xaU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                                                   & __Vtemp_h723db94c__0[0xaU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU])))));
    __Vtemp_he30e4ba5__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xbU] 
                                                 & __Vtemp_hd086e6cd__0[0xbU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                                                   & __Vtemp_h723db94c__0[0xbU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU])))));
    __Vtemp_he30e4ba5__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xcU] 
                                                 & __Vtemp_hd086e6cd__0[0xcU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                                                   & __Vtemp_h723db94c__0[0xcU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU])))));
    __Vtemp_he30e4ba5__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xdU] 
                                                 & __Vtemp_hd086e6cd__0[0xdU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                                                   & __Vtemp_h723db94c__0[0xdU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU])))));
    __Vtemp_he30e4ba5__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xeU] 
                                                 & __Vtemp_hd086e6cd__0[0xeU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                                                   & __Vtemp_h723db94c__0[0xeU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU])))));
    __Vtemp_he30e4ba5__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xfU] 
                                                 & __Vtemp_hd086e6cd__0[0xfU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                                                   & __Vtemp_h723db94c__0[0xfU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU])))));
    __Vtemp_he30e4ba5__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                                               ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0x10U] 
                                                  & __Vtemp_hd086e6cd__0[0x10U])
                                               : VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                                                 ? 
                                                (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                                                 & __Vtemp_h723db94c__0[0x10U])
                                                 : 
                                                VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1321)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0U] 
                          & __Vtemp_hd086e6cd__0[0U])
                       : VTestHarness__ConstPool__CONST_h881bc0c4_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1336)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h723db94c__0[0U])
                         : VTestHarness__ConstPool__CONST_h881bc0c4_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_he30e4ba5__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_he30e4ba5__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_he30e4ba5__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_he30e4ba5__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_he30e4ba5__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_he30e4ba5__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_he30e4ba5__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_he30e4ba5__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_he30e4ba5__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_he30e4ba5__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_he30e4ba5__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_he30e4ba5__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_he30e4ba5__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_he30e4ba5__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_he30e4ba5__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_he30e4ba5__0[0x10U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6056(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6056\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_ha185f088__0;
    VlWide<33>/*1055:0*/ __Vtemp_h32563f25__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5536c9ed__0;
    VlWide<33>/*1055:0*/ __Vtemp_h794ec424__0;
    VlWide<33>/*1055:0*/ __Vtemp_h3cd70a3b__0;
    VlWide<33>/*1055:0*/ __Vtemp_h49659e28__0;
    VlWide<33>/*1055:0*/ __Vtemp_h6c5e52f6__0;
    VlWide<33>/*1055:0*/ __Vtemp_h4837c245__0;
    VlWide<17>/*543:0*/ __Vtemp_h7795ac69__0;
    VlWide<33>/*1055:0*/ __Vtemp_h61e24492__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5536c9ed__1;
    VlWide<33>/*1055:0*/ __Vtemp_h9db35bcc__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5c5dc363__0;
    VlWide<33>/*1055:0*/ __Vtemp_h49659e28__1;
    VlWide<33>/*1055:0*/ __Vtemp_h5e06f0d0__0;
    VlWide<33>/*1055:0*/ __Vtemp_hc4d1da99__0;
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
            ? 0ULL : (0x1fffffffffULL & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                              ? VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))
                                              : 0ULL)) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                                ? VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U)))))
                                                : 0ULL)))));
    VL_EXTEND_WI(1027,4, __Vtemp_h32563f25__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h5536c9ed__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    __Vtemp_h794ec424__0[0U] = (__Vtemp_h5536c9ed__0[0U] 
                                << 2U);
    __Vtemp_h794ec424__0[1U] = ((__Vtemp_h5536c9ed__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[1U] 
                                              << 2U));
    __Vtemp_h794ec424__0[2U] = ((__Vtemp_h5536c9ed__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[2U] 
                                              << 2U));
    __Vtemp_h794ec424__0[3U] = ((__Vtemp_h5536c9ed__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[3U] 
                                              << 2U));
    __Vtemp_h794ec424__0[4U] = ((__Vtemp_h5536c9ed__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[4U] 
                                              << 2U));
    __Vtemp_h794ec424__0[5U] = ((__Vtemp_h5536c9ed__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[5U] 
                                              << 2U));
    __Vtemp_h794ec424__0[6U] = ((__Vtemp_h5536c9ed__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[6U] 
                                              << 2U));
    __Vtemp_h794ec424__0[7U] = ((__Vtemp_h5536c9ed__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[7U] 
                                              << 2U));
    __Vtemp_h794ec424__0[8U] = ((__Vtemp_h5536c9ed__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[8U] 
                                              << 2U));
    __Vtemp_h794ec424__0[9U] = ((__Vtemp_h5536c9ed__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h5536c9ed__0[9U] 
                                              << 2U));
    __Vtemp_h794ec424__0[0xaU] = ((__Vtemp_h5536c9ed__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h5536c9ed__0[0xaU] 
                                                << 2U));
    __Vtemp_h794ec424__0[0xbU] = ((__Vtemp_h5536c9ed__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h5536c9ed__0[0xbU] 
                                                << 2U));
    __Vtemp_h794ec424__0[0xcU] = ((__Vtemp_h5536c9ed__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h5536c9ed__0[0xcU] 
                                                << 2U));
    __Vtemp_h794ec424__0[0xdU] = ((__Vtemp_h5536c9ed__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h5536c9ed__0[0xdU] 
                                                << 2U));
    __Vtemp_h794ec424__0[0xeU] = ((__Vtemp_h5536c9ed__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h5536c9ed__0[0xeU] 
                                                << 2U));
    __Vtemp_h794ec424__0[0xfU] = ((__Vtemp_h5536c9ed__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h5536c9ed__0[0xfU] 
                                                << 2U));
    __Vtemp_h794ec424__0[0x10U] = ((__Vtemp_h5536c9ed__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x10U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x11U] = ((__Vtemp_h5536c9ed__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x11U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x12U] = ((__Vtemp_h5536c9ed__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x12U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x13U] = ((__Vtemp_h5536c9ed__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x13U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x14U] = ((__Vtemp_h5536c9ed__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x14U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x15U] = ((__Vtemp_h5536c9ed__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x15U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x16U] = ((__Vtemp_h5536c9ed__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x16U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x17U] = ((__Vtemp_h5536c9ed__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x17U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x18U] = ((__Vtemp_h5536c9ed__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x18U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x19U] = ((__Vtemp_h5536c9ed__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x19U] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x1aU] = ((__Vtemp_h5536c9ed__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x1bU] = ((__Vtemp_h5536c9ed__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x1cU] = ((__Vtemp_h5536c9ed__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x1dU] = ((__Vtemp_h5536c9ed__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x1eU] = ((__Vtemp_h5536c9ed__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x1fU] = ((__Vtemp_h5536c9ed__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h794ec424__0[0x20U] = ((__Vtemp_h5536c9ed__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h5536c9ed__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h3cd70a3b__0, __Vtemp_h32563f25__0, __Vtemp_h794ec424__0);
    VL_EXTEND_WI(1037,7, __Vtemp_h49659e28__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)));
    __Vtemp_h6c5e52f6__0[0U] = (__Vtemp_h49659e28__0[0U] 
                                << 2U);
    __Vtemp_h6c5e52f6__0[1U] = ((__Vtemp_h49659e28__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[1U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[2U] = ((__Vtemp_h49659e28__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[2U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[3U] = ((__Vtemp_h49659e28__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[3U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[4U] = ((__Vtemp_h49659e28__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[4U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[5U] = ((__Vtemp_h49659e28__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[5U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[6U] = ((__Vtemp_h49659e28__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[6U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[7U] = ((__Vtemp_h49659e28__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[7U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[8U] = ((__Vtemp_h49659e28__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[8U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[9U] = ((__Vtemp_h49659e28__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h49659e28__0[9U] 
                                              << 2U));
    __Vtemp_h6c5e52f6__0[0xaU] = ((__Vtemp_h49659e28__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xaU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xbU] = ((__Vtemp_h49659e28__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xbU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xcU] = ((__Vtemp_h49659e28__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xcU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xdU] = ((__Vtemp_h49659e28__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xdU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xeU] = ((__Vtemp_h49659e28__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xeU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0xfU] = ((__Vtemp_h49659e28__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h49659e28__0[0xfU] 
                                                << 2U));
    __Vtemp_h6c5e52f6__0[0x10U] = ((__Vtemp_h49659e28__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x10U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x11U] = ((__Vtemp_h49659e28__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x11U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x12U] = ((__Vtemp_h49659e28__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x12U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x13U] = ((__Vtemp_h49659e28__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x13U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x14U] = ((__Vtemp_h49659e28__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x14U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x15U] = ((__Vtemp_h49659e28__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x15U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x16U] = ((__Vtemp_h49659e28__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x16U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x17U] = ((__Vtemp_h49659e28__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x17U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x18U] = ((__Vtemp_h49659e28__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x18U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x19U] = ((__Vtemp_h49659e28__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x19U] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1aU] = ((__Vtemp_h49659e28__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1bU] = ((__Vtemp_h49659e28__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1cU] = ((__Vtemp_h49659e28__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1dU] = ((__Vtemp_h49659e28__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1eU] = ((__Vtemp_h49659e28__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x1fU] = ((__Vtemp_h49659e28__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h6c5e52f6__0[0x20U] = ((__Vtemp_h49659e28__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h49659e28__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_h4837c245__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_h6c5e52f6__0);
    __Vtemp_ha185f088__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h3cd70a3b__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h4837c245__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_ha185f088__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h3cd70a3b__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h4837c245__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_ha185f088__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h3cd70a3b__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h4837c245__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_ha185f088__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h3cd70a3b__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h4837c245__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_ha185f088__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h3cd70a3b__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h4837c245__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_ha185f088__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h3cd70a3b__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h4837c245__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_ha185f088__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h3cd70a3b__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h4837c245__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_ha185f088__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h3cd70a3b__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h4837c245__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h3cd70a3b__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h4837c245__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_ha185f088__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_ha185f088__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_ha185f088__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_ha185f088__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_ha185f088__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_ha185f088__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_ha185f088__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_ha185f088__0[8U];
    VL_EXTEND_WI(1028,5, __Vtemp_h61e24492__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size) 
                                                    << 1U))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h5536c9ed__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    __Vtemp_h9db35bcc__0[0U] = (__Vtemp_h5536c9ed__1[0U] 
                                << 3U);
    __Vtemp_h9db35bcc__0[1U] = ((__Vtemp_h5536c9ed__1[0U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[1U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[2U] = ((__Vtemp_h5536c9ed__1[1U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[2U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[3U] = ((__Vtemp_h5536c9ed__1[2U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[3U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[4U] = ((__Vtemp_h5536c9ed__1[3U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[4U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[5U] = ((__Vtemp_h5536c9ed__1[4U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[5U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[6U] = ((__Vtemp_h5536c9ed__1[5U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[6U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[7U] = ((__Vtemp_h5536c9ed__1[6U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[7U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[8U] = ((__Vtemp_h5536c9ed__1[7U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[8U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[9U] = ((__Vtemp_h5536c9ed__1[8U] 
                                 >> 0x1dU) | (__Vtemp_h5536c9ed__1[9U] 
                                              << 3U));
    __Vtemp_h9db35bcc__0[0xaU] = ((__Vtemp_h5536c9ed__1[9U] 
                                   >> 0x1dU) | (__Vtemp_h5536c9ed__1[0xaU] 
                                                << 3U));
    __Vtemp_h9db35bcc__0[0xbU] = ((__Vtemp_h5536c9ed__1[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h5536c9ed__1[0xbU] 
                                                << 3U));
    __Vtemp_h9db35bcc__0[0xcU] = ((__Vtemp_h5536c9ed__1[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h5536c9ed__1[0xcU] 
                                                << 3U));
    __Vtemp_h9db35bcc__0[0xdU] = ((__Vtemp_h5536c9ed__1[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h5536c9ed__1[0xdU] 
                                                << 3U));
    __Vtemp_h9db35bcc__0[0xeU] = ((__Vtemp_h5536c9ed__1[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h5536c9ed__1[0xeU] 
                                                << 3U));
    __Vtemp_h9db35bcc__0[0xfU] = ((__Vtemp_h5536c9ed__1[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h5536c9ed__1[0xfU] 
                                                << 3U));
    __Vtemp_h9db35bcc__0[0x10U] = ((__Vtemp_h5536c9ed__1[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x10U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x11U] = ((__Vtemp_h5536c9ed__1[0x10U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x11U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x12U] = ((__Vtemp_h5536c9ed__1[0x11U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x12U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x13U] = ((__Vtemp_h5536c9ed__1[0x12U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x13U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x14U] = ((__Vtemp_h5536c9ed__1[0x13U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x14U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x15U] = ((__Vtemp_h5536c9ed__1[0x14U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x15U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x16U] = ((__Vtemp_h5536c9ed__1[0x15U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x16U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x17U] = ((__Vtemp_h5536c9ed__1[0x16U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x17U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x18U] = ((__Vtemp_h5536c9ed__1[0x17U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x18U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x19U] = ((__Vtemp_h5536c9ed__1[0x18U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x19U] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x1aU] = ((__Vtemp_h5536c9ed__1[0x19U] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x1aU] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x1bU] = ((__Vtemp_h5536c9ed__1[0x1aU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x1bU] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x1cU] = ((__Vtemp_h5536c9ed__1[0x1bU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x1cU] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x1dU] = ((__Vtemp_h5536c9ed__1[0x1cU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x1dU] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x1eU] = ((__Vtemp_h5536c9ed__1[0x1dU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x1eU] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x1fU] = ((__Vtemp_h5536c9ed__1[0x1eU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x1fU] 
                                                 << 3U));
    __Vtemp_h9db35bcc__0[0x20U] = ((__Vtemp_h5536c9ed__1[0x1fU] 
                                    >> 0x1dU) | (__Vtemp_h5536c9ed__1[0x20U] 
                                                 << 3U));
    VL_SHIFTL_WWW(1028,1028,1028, __Vtemp_h5c5dc363__0, __Vtemp_h61e24492__0, __Vtemp_h9db35bcc__0);
    VL_EXTEND_WI(1036,7, __Vtemp_h49659e28__1, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)));
    __Vtemp_h5e06f0d0__0[0U] = (__Vtemp_h49659e28__1[0U] 
                                << 3U);
    __Vtemp_h5e06f0d0__0[1U] = ((__Vtemp_h49659e28__1[0U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[1U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[2U] = ((__Vtemp_h49659e28__1[1U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[2U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[3U] = ((__Vtemp_h49659e28__1[2U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[3U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[4U] = ((__Vtemp_h49659e28__1[3U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[4U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[5U] = ((__Vtemp_h49659e28__1[4U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[5U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[6U] = ((__Vtemp_h49659e28__1[5U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[6U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[7U] = ((__Vtemp_h49659e28__1[6U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[7U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[8U] = ((__Vtemp_h49659e28__1[7U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[8U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[9U] = ((__Vtemp_h49659e28__1[8U] 
                                 >> 0x1dU) | (__Vtemp_h49659e28__1[9U] 
                                              << 3U));
    __Vtemp_h5e06f0d0__0[0xaU] = ((__Vtemp_h49659e28__1[9U] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__1[0xaU] 
                                                << 3U));
    __Vtemp_h5e06f0d0__0[0xbU] = ((__Vtemp_h49659e28__1[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__1[0xbU] 
                                                << 3U));
    __Vtemp_h5e06f0d0__0[0xcU] = ((__Vtemp_h49659e28__1[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__1[0xcU] 
                                                << 3U));
    __Vtemp_h5e06f0d0__0[0xdU] = ((__Vtemp_h49659e28__1[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__1[0xdU] 
                                                << 3U));
    __Vtemp_h5e06f0d0__0[0xeU] = ((__Vtemp_h49659e28__1[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__1[0xeU] 
                                                << 3U));
    __Vtemp_h5e06f0d0__0[0xfU] = ((__Vtemp_h49659e28__1[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h49659e28__1[0xfU] 
                                                << 3U));
    __Vtemp_h5e06f0d0__0[0x10U] = ((__Vtemp_h49659e28__1[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x10U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x11U] = ((__Vtemp_h49659e28__1[0x10U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x11U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x12U] = ((__Vtemp_h49659e28__1[0x11U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x12U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x13U] = ((__Vtemp_h49659e28__1[0x12U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x13U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x14U] = ((__Vtemp_h49659e28__1[0x13U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x14U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x15U] = ((__Vtemp_h49659e28__1[0x14U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x15U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x16U] = ((__Vtemp_h49659e28__1[0x15U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x16U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x17U] = ((__Vtemp_h49659e28__1[0x16U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x17U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x18U] = ((__Vtemp_h49659e28__1[0x17U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x18U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x19U] = ((__Vtemp_h49659e28__1[0x18U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x19U] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x1aU] = ((__Vtemp_h49659e28__1[0x19U] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x1aU] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x1bU] = ((__Vtemp_h49659e28__1[0x1aU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x1bU] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x1cU] = ((__Vtemp_h49659e28__1[0x1bU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x1cU] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x1dU] = ((__Vtemp_h49659e28__1[0x1cU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x1dU] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x1eU] = ((__Vtemp_h49659e28__1[0x1dU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x1eU] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x1fU] = ((__Vtemp_h49659e28__1[0x1eU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x1fU] 
                                                 << 3U));
    __Vtemp_h5e06f0d0__0[0x20U] = ((__Vtemp_h49659e28__1[0x1fU] 
                                    >> 0x1dU) | (__Vtemp_h49659e28__1[0x20U] 
                                                 << 3U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_hc4d1da99__0, VTestHarness__ConstPool__CONST_h81905067_0, __Vtemp_h5e06f0d0__0);
    __Vtemp_h7795ac69__0[1U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[1U] 
                                               & __Vtemp_h5c5dc363__0[1U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_hc4d1da99__0[1U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[1U])))));
    __Vtemp_h7795ac69__0[2U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[2U] 
                                               & __Vtemp_h5c5dc363__0[2U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_hc4d1da99__0[2U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[2U])))));
    __Vtemp_h7795ac69__0[3U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[3U] 
                                               & __Vtemp_h5c5dc363__0[3U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_hc4d1da99__0[3U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[3U])))));
    __Vtemp_h7795ac69__0[4U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[4U] 
                                               & __Vtemp_h5c5dc363__0[4U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_hc4d1da99__0[4U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[4U])))));
    __Vtemp_h7795ac69__0[5U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[5U] 
                                               & __Vtemp_h5c5dc363__0[5U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_hc4d1da99__0[5U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[5U])))));
    __Vtemp_h7795ac69__0[6U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[6U] 
                                               & __Vtemp_h5c5dc363__0[6U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_hc4d1da99__0[6U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[6U])))));
    __Vtemp_h7795ac69__0[7U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[7U] 
                                               & __Vtemp_h5c5dc363__0[7U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_hc4d1da99__0[7U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[7U])))));
    __Vtemp_h7795ac69__0[8U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[8U] 
                                               & __Vtemp_h5c5dc363__0[8U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_hc4d1da99__0[8U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[8U])))));
    __Vtemp_h7795ac69__0[9U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[9U] 
                                               & __Vtemp_h5c5dc363__0[9U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[9U] 
                                                 & __Vtemp_hc4d1da99__0[9U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[9U])))));
    __Vtemp_h7795ac69__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xaU] 
                                                 & __Vtemp_h5c5dc363__0[0xaU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                                                   & __Vtemp_hc4d1da99__0[0xaU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU])))));
    __Vtemp_h7795ac69__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xbU] 
                                                 & __Vtemp_h5c5dc363__0[0xbU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                                                   & __Vtemp_hc4d1da99__0[0xbU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU])))));
    __Vtemp_h7795ac69__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xcU] 
                                                 & __Vtemp_h5c5dc363__0[0xcU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                                                   & __Vtemp_hc4d1da99__0[0xcU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU])))));
    __Vtemp_h7795ac69__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xdU] 
                                                 & __Vtemp_h5c5dc363__0[0xdU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                                                   & __Vtemp_hc4d1da99__0[0xdU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU])))));
    __Vtemp_h7795ac69__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xeU] 
                                                 & __Vtemp_h5c5dc363__0[0xeU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                                                   & __Vtemp_hc4d1da99__0[0xeU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU])))));
    __Vtemp_h7795ac69__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xfU] 
                                                 & __Vtemp_h5c5dc363__0[0xfU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                                                   & __Vtemp_hc4d1da99__0[0xfU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU])))));
    __Vtemp_h7795ac69__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                                               ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0x10U] 
                                                  & __Vtemp_h5c5dc363__0[0x10U])
                                               : VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                                                 ? 
                                                (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                                                 & __Vtemp_hc4d1da99__0[0x10U])
                                                 : 
                                                VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0U] 
                          & __Vtemp_h5c5dc363__0[0U])
                       : VTestHarness__ConstPool__CONST_h881bc0c4_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1324)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_hc4d1da99__0[0U])
                         : VTestHarness__ConstPool__CONST_h881bc0c4_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h7795ac69__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h7795ac69__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h7795ac69__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h7795ac69__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h7795ac69__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h7795ac69__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h7795ac69__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h7795ac69__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h7795ac69__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_h7795ac69__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_h7795ac69__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_h7795ac69__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_h7795ac69__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_h7795ac69__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_h7795ac69__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_h7795ac69__0[0x10U];
}

extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_hea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a54009_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a4c3f1_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_hf974e5b2_0;
extern const VlWide<10>/*319:0*/ VTestHarness__ConstPool__CONST_h3c9d8e1d_0;
extern const VlWide<10>/*319:0*/ VTestHarness__ConstPool__CONST_ha8c708d0_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a54001_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6057(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6057\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h6aeca520__0;
    VlWide<17>/*543:0*/ __Vtemp_h4e44365c__0;
    VlWide<17>/*543:0*/ __Vtemp_h7011c06b__0;
    VlWide<17>/*543:0*/ __Vtemp_hf4eacdda__0;
    VlWide<17>/*543:0*/ __Vtemp_hc7b910e8__0;
    VlWide<17>/*543:0*/ __Vtemp_h4c125d0e__0;
    VlWide<17>/*543:0*/ __Vtemp_hab987cf9__0;
    VlWide<17>/*543:0*/ __Vtemp_h2ea0ecb0__0;
    VlWide<10>/*319:0*/ __Vtemp_h3e793170__0;
    VlWide<17>/*543:0*/ __Vtemp_h1ae0dda3__0;
    VlWide<17>/*543:0*/ __Vtemp_h7011c06b__1;
    VlWide<17>/*543:0*/ __Vtemp_ha6515164__0;
    VlWide<17>/*543:0*/ __Vtemp_h84456f0b__0;
    VlWide<17>/*543:0*/ __Vtemp_h4c125d0e__1;
    VlWide<17>/*543:0*/ __Vtemp_h189fc038__0;
    VlWide<17>/*543:0*/ __Vtemp_hf2f47eb9__0;
    VlWide<5>/*159:0*/ __Vtemp_h7f497c87__0;
    VlWide<17>/*543:0*/ __Vtemp_hbd1a4345__0;
    VlWide<17>/*543:0*/ __Vtemp_h20b1297b__0;
    VlWide<17>/*543:0*/ __Vtemp_h61611c9e__0;
    VlWide<17>/*543:0*/ __Vtemp_h732ef09b__0;
    VlWide<17>/*543:0*/ __Vtemp_h4c125d0e__2;
    VlWide<17>/*543:0*/ __Vtemp_he2ab360f__0;
    VlWide<17>/*543:0*/ __Vtemp_h44e30125__0;
    // Body
    VL_EXTEND_WI(515,4, __Vtemp_h4e44365c__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(513,6, __Vtemp_h7011c06b__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source));
    __Vtemp_hf4eacdda__0[0U] = (__Vtemp_h7011c06b__0[0U] 
                                << 2U);
    __Vtemp_hf4eacdda__0[1U] = ((__Vtemp_h7011c06b__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[1U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[2U] = ((__Vtemp_h7011c06b__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[2U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[3U] = ((__Vtemp_h7011c06b__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[3U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[4U] = ((__Vtemp_h7011c06b__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[4U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[5U] = ((__Vtemp_h7011c06b__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[5U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[6U] = ((__Vtemp_h7011c06b__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[6U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[7U] = ((__Vtemp_h7011c06b__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[7U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[8U] = ((__Vtemp_h7011c06b__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[8U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[9U] = ((__Vtemp_h7011c06b__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h7011c06b__0[9U] 
                                              << 2U));
    __Vtemp_hf4eacdda__0[0xaU] = ((__Vtemp_h7011c06b__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h7011c06b__0[0xaU] 
                                                << 2U));
    __Vtemp_hf4eacdda__0[0xbU] = ((__Vtemp_h7011c06b__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h7011c06b__0[0xbU] 
                                                << 2U));
    __Vtemp_hf4eacdda__0[0xcU] = ((__Vtemp_h7011c06b__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h7011c06b__0[0xcU] 
                                                << 2U));
    __Vtemp_hf4eacdda__0[0xdU] = ((__Vtemp_h7011c06b__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h7011c06b__0[0xdU] 
                                                << 2U));
    __Vtemp_hf4eacdda__0[0xeU] = ((__Vtemp_h7011c06b__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h7011c06b__0[0xeU] 
                                                << 2U));
    __Vtemp_hf4eacdda__0[0xfU] = ((__Vtemp_h7011c06b__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h7011c06b__0[0xfU] 
                                                << 2U));
    __Vtemp_hf4eacdda__0[0x10U] = ((__Vtemp_h7011c06b__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h7011c06b__0[0x10U] 
                                                 << 2U));
    VL_SHIFTL_WWW(515,515,515, __Vtemp_hc7b910e8__0, __Vtemp_h4e44365c__0, __Vtemp_hf4eacdda__0);
    VL_EXTEND_WI(525,6, __Vtemp_h4c125d0e__0, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_hab987cf9__0[0U] = (__Vtemp_h4c125d0e__0[0U] 
                                << 2U);
    __Vtemp_hab987cf9__0[1U] = ((__Vtemp_h4c125d0e__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[1U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[2U] = ((__Vtemp_h4c125d0e__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[2U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[3U] = ((__Vtemp_h4c125d0e__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[3U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[4U] = ((__Vtemp_h4c125d0e__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[4U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[5U] = ((__Vtemp_h4c125d0e__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[5U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[6U] = ((__Vtemp_h4c125d0e__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[6U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[7U] = ((__Vtemp_h4c125d0e__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[7U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[8U] = ((__Vtemp_h4c125d0e__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[8U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[9U] = ((__Vtemp_h4c125d0e__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__0[9U] 
                                              << 2U));
    __Vtemp_hab987cf9__0[0xaU] = ((__Vtemp_h4c125d0e__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__0[0xaU] 
                                                << 2U));
    __Vtemp_hab987cf9__0[0xbU] = ((__Vtemp_h4c125d0e__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__0[0xbU] 
                                                << 2U));
    __Vtemp_hab987cf9__0[0xcU] = ((__Vtemp_h4c125d0e__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__0[0xcU] 
                                                << 2U));
    __Vtemp_hab987cf9__0[0xdU] = ((__Vtemp_h4c125d0e__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__0[0xdU] 
                                                << 2U));
    __Vtemp_hab987cf9__0[0xeU] = ((__Vtemp_h4c125d0e__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__0[0xeU] 
                                                << 2U));
    __Vtemp_hab987cf9__0[0xfU] = ((__Vtemp_h4c125d0e__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__0[0xfU] 
                                                << 2U));
    __Vtemp_hab987cf9__0[0x10U] = ((__Vtemp_h4c125d0e__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4c125d0e__0[0x10U] 
                                                 << 2U));
    VL_SHIFTL_WWW(527,527,527, __Vtemp_h2ea0ecb0__0, VTestHarness__ConstPool__CONST_hea2bd2fa_0, __Vtemp_hab987cf9__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        __Vtemp_h6aeca520__0[1U] = 0U;
        __Vtemp_h6aeca520__0[2U] = 0U;
        __Vtemp_h6aeca520__0[3U] = 0U;
        __Vtemp_h6aeca520__0[4U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_h6aeca520__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                         ? (VTestHarness__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_hc7b910e8__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h2ea0ecb0__0[1U])
                                                     : 0U)));
        __Vtemp_h6aeca520__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                         ? (VTestHarness__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_hc7b910e8__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h2ea0ecb0__0[2U])
                                                     : 0U)));
        __Vtemp_h6aeca520__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                         ? (VTestHarness__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_hc7b910e8__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h2ea0ecb0__0[3U])
                                                     : 0U)));
        __Vtemp_h6aeca520__0[4U] = (0xfffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a54009_0[4U] 
                                                     & __Vtemp_hc7b910e8__0[4U])
                                                     : 0U)) 
                                                & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                     & __Vtemp_h2ea0ecb0__0[4U])
                                                     : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                    ? (VTestHarness__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_hc7b910e8__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                      ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h2ea0ecb0__0[0U])
                      : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h6aeca520__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h6aeca520__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h6aeca520__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h6aeca520__0[4U];
    VL_EXTEND_WI(516,5, __Vtemp_h1ae0dda3__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(513,6, __Vtemp_h7011c06b__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source));
    __Vtemp_ha6515164__0[0U] = (__Vtemp_h7011c06b__1[0U] 
                                << 3U);
    __Vtemp_ha6515164__0[1U] = ((__Vtemp_h7011c06b__1[0U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[1U] 
                                              << 3U));
    __Vtemp_ha6515164__0[2U] = ((__Vtemp_h7011c06b__1[1U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[2U] 
                                              << 3U));
    __Vtemp_ha6515164__0[3U] = ((__Vtemp_h7011c06b__1[2U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[3U] 
                                              << 3U));
    __Vtemp_ha6515164__0[4U] = ((__Vtemp_h7011c06b__1[3U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[4U] 
                                              << 3U));
    __Vtemp_ha6515164__0[5U] = ((__Vtemp_h7011c06b__1[4U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[5U] 
                                              << 3U));
    __Vtemp_ha6515164__0[6U] = ((__Vtemp_h7011c06b__1[5U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[6U] 
                                              << 3U));
    __Vtemp_ha6515164__0[7U] = ((__Vtemp_h7011c06b__1[6U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[7U] 
                                              << 3U));
    __Vtemp_ha6515164__0[8U] = ((__Vtemp_h7011c06b__1[7U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[8U] 
                                              << 3U));
    __Vtemp_ha6515164__0[9U] = ((__Vtemp_h7011c06b__1[8U] 
                                 >> 0x1dU) | (__Vtemp_h7011c06b__1[9U] 
                                              << 3U));
    __Vtemp_ha6515164__0[0xaU] = ((__Vtemp_h7011c06b__1[9U] 
                                   >> 0x1dU) | (__Vtemp_h7011c06b__1[0xaU] 
                                                << 3U));
    __Vtemp_ha6515164__0[0xbU] = ((__Vtemp_h7011c06b__1[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h7011c06b__1[0xbU] 
                                                << 3U));
    __Vtemp_ha6515164__0[0xcU] = ((__Vtemp_h7011c06b__1[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h7011c06b__1[0xcU] 
                                                << 3U));
    __Vtemp_ha6515164__0[0xdU] = ((__Vtemp_h7011c06b__1[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h7011c06b__1[0xdU] 
                                                << 3U));
    __Vtemp_ha6515164__0[0xeU] = ((__Vtemp_h7011c06b__1[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h7011c06b__1[0xeU] 
                                                << 3U));
    __Vtemp_ha6515164__0[0xfU] = ((__Vtemp_h7011c06b__1[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h7011c06b__1[0xfU] 
                                                << 3U));
    __Vtemp_ha6515164__0[0x10U] = ((__Vtemp_h7011c06b__1[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h7011c06b__1[0x10U] 
                                                 << 3U));
    VL_SHIFTL_WWW(516,516,516, __Vtemp_h84456f0b__0, __Vtemp_h1ae0dda3__0, __Vtemp_ha6515164__0);
    VL_EXTEND_WI(524,6, __Vtemp_h4c125d0e__1, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h189fc038__0[0U] = (__Vtemp_h4c125d0e__1[0U] 
                                << 3U);
    __Vtemp_h189fc038__0[1U] = ((__Vtemp_h4c125d0e__1[0U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[1U] 
                                              << 3U));
    __Vtemp_h189fc038__0[2U] = ((__Vtemp_h4c125d0e__1[1U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[2U] 
                                              << 3U));
    __Vtemp_h189fc038__0[3U] = ((__Vtemp_h4c125d0e__1[2U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[3U] 
                                              << 3U));
    __Vtemp_h189fc038__0[4U] = ((__Vtemp_h4c125d0e__1[3U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[4U] 
                                              << 3U));
    __Vtemp_h189fc038__0[5U] = ((__Vtemp_h4c125d0e__1[4U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[5U] 
                                              << 3U));
    __Vtemp_h189fc038__0[6U] = ((__Vtemp_h4c125d0e__1[5U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[6U] 
                                              << 3U));
    __Vtemp_h189fc038__0[7U] = ((__Vtemp_h4c125d0e__1[6U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[7U] 
                                              << 3U));
    __Vtemp_h189fc038__0[8U] = ((__Vtemp_h4c125d0e__1[7U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[8U] 
                                              << 3U));
    __Vtemp_h189fc038__0[9U] = ((__Vtemp_h4c125d0e__1[8U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__1[9U] 
                                              << 3U));
    __Vtemp_h189fc038__0[0xaU] = ((__Vtemp_h4c125d0e__1[9U] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__1[0xaU] 
                                                << 3U));
    __Vtemp_h189fc038__0[0xbU] = ((__Vtemp_h4c125d0e__1[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__1[0xbU] 
                                                << 3U));
    __Vtemp_h189fc038__0[0xcU] = ((__Vtemp_h4c125d0e__1[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__1[0xcU] 
                                                << 3U));
    __Vtemp_h189fc038__0[0xdU] = ((__Vtemp_h4c125d0e__1[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__1[0xdU] 
                                                << 3U));
    __Vtemp_h189fc038__0[0xeU] = ((__Vtemp_h4c125d0e__1[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__1[0xeU] 
                                                << 3U));
    __Vtemp_h189fc038__0[0xfU] = ((__Vtemp_h4c125d0e__1[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__1[0xfU] 
                                                << 3U));
    __Vtemp_h189fc038__0[0x10U] = ((__Vtemp_h4c125d0e__1[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h4c125d0e__1[0x10U] 
                                                 << 3U));
    VL_SHIFTL_WWW(527,527,527, __Vtemp_hf2f47eb9__0, VTestHarness__ConstPool__CONST_hf974e5b2_0, __Vtemp_h189fc038__0);
    __Vtemp_h3e793170__0[1U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_h84456f0b__0[1U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_hf2f47eb9__0[1U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[1U])))));
    __Vtemp_h3e793170__0[2U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_h84456f0b__0[2U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_hf2f47eb9__0[2U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[2U])))));
    __Vtemp_h3e793170__0[3U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_h84456f0b__0[3U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_hf2f47eb9__0[3U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[3U])))));
    __Vtemp_h3e793170__0[4U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_h84456f0b__0[4U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_hf2f47eb9__0[4U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[4U])))));
    __Vtemp_h3e793170__0[5U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_h84456f0b__0[5U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_hf2f47eb9__0[5U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[5U])))));
    __Vtemp_h3e793170__0[6U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_h84456f0b__0[6U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_hf2f47eb9__0[6U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[6U])))));
    __Vtemp_h3e793170__0[7U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_h84456f0b__0[7U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_hf2f47eb9__0[7U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[7U])))));
    __Vtemp_h3e793170__0[8U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_h84456f0b__0[8U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_hf2f47eb9__0[8U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[8U])))));
    __Vtemp_h3e793170__0[9U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[9U] 
                                               & __Vtemp_h84456f0b__0[9U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[9U] 
                                                 & __Vtemp_hf2f47eb9__0[9U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[9U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_ha8c708d0_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1278)
                       ? (VTestHarness__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_h84456f0b__0[0U])
                       : VTestHarness__ConstPool__CONST_ha8c708d0_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1293)
                         ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_hf2f47eb9__0[0U])
                         : VTestHarness__ConstPool__CONST_ha8c708d0_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h3e793170__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h3e793170__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h3e793170__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h3e793170__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h3e793170__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h3e793170__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h3e793170__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h3e793170__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_h3e793170__0[9U];
    VL_EXTEND_WI(515,4, __Vtemp_hbd1a4345__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(513,6, __Vtemp_h20b1297b__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source));
    __Vtemp_h61611c9e__0[0U] = (__Vtemp_h20b1297b__0[0U] 
                                << 2U);
    __Vtemp_h61611c9e__0[1U] = ((__Vtemp_h20b1297b__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[1U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[2U] = ((__Vtemp_h20b1297b__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[2U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[3U] = ((__Vtemp_h20b1297b__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[3U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[4U] = ((__Vtemp_h20b1297b__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[4U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[5U] = ((__Vtemp_h20b1297b__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[5U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[6U] = ((__Vtemp_h20b1297b__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[6U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[7U] = ((__Vtemp_h20b1297b__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[7U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[8U] = ((__Vtemp_h20b1297b__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[8U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[9U] = ((__Vtemp_h20b1297b__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h20b1297b__0[9U] 
                                              << 2U));
    __Vtemp_h61611c9e__0[0xaU] = ((__Vtemp_h20b1297b__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h20b1297b__0[0xaU] 
                                                << 2U));
    __Vtemp_h61611c9e__0[0xbU] = ((__Vtemp_h20b1297b__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h20b1297b__0[0xbU] 
                                                << 2U));
    __Vtemp_h61611c9e__0[0xcU] = ((__Vtemp_h20b1297b__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h20b1297b__0[0xcU] 
                                                << 2U));
    __Vtemp_h61611c9e__0[0xdU] = ((__Vtemp_h20b1297b__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h20b1297b__0[0xdU] 
                                                << 2U));
    __Vtemp_h61611c9e__0[0xeU] = ((__Vtemp_h20b1297b__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h20b1297b__0[0xeU] 
                                                << 2U));
    __Vtemp_h61611c9e__0[0xfU] = ((__Vtemp_h20b1297b__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h20b1297b__0[0xfU] 
                                                << 2U));
    __Vtemp_h61611c9e__0[0x10U] = ((__Vtemp_h20b1297b__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h20b1297b__0[0x10U] 
                                                 << 2U));
    VL_SHIFTL_WWW(515,515,515, __Vtemp_h732ef09b__0, __Vtemp_hbd1a4345__0, __Vtemp_h61611c9e__0);
    VL_EXTEND_WI(525,6, __Vtemp_h4c125d0e__2, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_he2ab360f__0[0U] = (__Vtemp_h4c125d0e__2[0U] 
                                << 2U);
    __Vtemp_he2ab360f__0[1U] = ((__Vtemp_h4c125d0e__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[1U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[2U] = ((__Vtemp_h4c125d0e__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[2U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[3U] = ((__Vtemp_h4c125d0e__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[3U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[4U] = ((__Vtemp_h4c125d0e__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[4U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[5U] = ((__Vtemp_h4c125d0e__2[4U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[5U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[6U] = ((__Vtemp_h4c125d0e__2[5U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[6U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[7U] = ((__Vtemp_h4c125d0e__2[6U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[7U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[8U] = ((__Vtemp_h4c125d0e__2[7U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[8U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[9U] = ((__Vtemp_h4c125d0e__2[8U] 
                                 >> 0x1eU) | (__Vtemp_h4c125d0e__2[9U] 
                                              << 2U));
    __Vtemp_he2ab360f__0[0xaU] = ((__Vtemp_h4c125d0e__2[9U] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__2[0xaU] 
                                                << 2U));
    __Vtemp_he2ab360f__0[0xbU] = ((__Vtemp_h4c125d0e__2[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__2[0xbU] 
                                                << 2U));
    __Vtemp_he2ab360f__0[0xcU] = ((__Vtemp_h4c125d0e__2[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__2[0xcU] 
                                                << 2U));
    __Vtemp_he2ab360f__0[0xdU] = ((__Vtemp_h4c125d0e__2[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__2[0xdU] 
                                                << 2U));
    __Vtemp_he2ab360f__0[0xeU] = ((__Vtemp_h4c125d0e__2[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__2[0xeU] 
                                                << 2U));
    __Vtemp_he2ab360f__0[0xfU] = ((__Vtemp_h4c125d0e__2[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h4c125d0e__2[0xfU] 
                                                << 2U));
    __Vtemp_he2ab360f__0[0x10U] = ((__Vtemp_h4c125d0e__2[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h4c125d0e__2[0x10U] 
                                                 << 2U));
    VL_SHIFTL_WWW(527,527,527, __Vtemp_h44e30125__0, VTestHarness__ConstPool__CONST_hea2bd2fa_0, __Vtemp_he2ab360f__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        __Vtemp_h7f497c87__0[1U] = 0U;
        __Vtemp_h7f497c87__0[2U] = 0U;
        __Vtemp_h7f497c87__0[3U] = 0U;
        __Vtemp_h7f497c87__0[4U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_h7f497c87__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                         ? (VTestHarness__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h732ef09b__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h44e30125__0[1U])
                                                     : 0U)));
        __Vtemp_h7f497c87__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                         ? (VTestHarness__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h732ef09b__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h44e30125__0[2U])
                                                     : 0U)));
        __Vtemp_h7f497c87__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                         ? (VTestHarness__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h732ef09b__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h44e30125__0[3U])
                                                     : 0U)));
        __Vtemp_h7f497c87__0[4U] = (0xfffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[4U] 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a54009_0[4U] 
                                                     & __Vtemp_h732ef09b__0[4U])
                                                     : 0U)) 
                                                & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                                     ? 
                                                    (VTestHarness__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                     & __Vtemp_h44e30125__0[4U])
                                                     : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                    ? (VTestHarness__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h732ef09b__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                      ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h44e30125__0[0U])
                      : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h7f497c87__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h7f497c87__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h7f497c87__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h7f497c87__0[4U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6058(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6058\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_ha0857969__0;
    VlWide<17>/*543:0*/ __Vtemp_hf91d521f__0;
    VlWide<17>/*543:0*/ __Vtemp_h20b1297b__0;
    VlWide<17>/*543:0*/ __Vtemp_h61612c8f__0;
    VlWide<17>/*543:0*/ __Vtemp_h7ce6bc0e__0;
    VlWide<17>/*543:0*/ __Vtemp_h4c125d0e__0;
    VlWide<17>/*543:0*/ __Vtemp_hab98ad0c__0;
    VlWide<17>/*543:0*/ __Vtemp_hf054e8e1__0;
    // Body
    VL_EXTEND_WI(516,5, __Vtemp_hf91d521f__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(513,6, __Vtemp_h20b1297b__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source));
    __Vtemp_h61612c8f__0[0U] = (__Vtemp_h20b1297b__0[0U] 
                                << 3U);
    __Vtemp_h61612c8f__0[1U] = ((__Vtemp_h20b1297b__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[1U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[2U] = ((__Vtemp_h20b1297b__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[2U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[3U] = ((__Vtemp_h20b1297b__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[3U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[4U] = ((__Vtemp_h20b1297b__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[4U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[5U] = ((__Vtemp_h20b1297b__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[5U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[6U] = ((__Vtemp_h20b1297b__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[6U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[7U] = ((__Vtemp_h20b1297b__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[7U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[8U] = ((__Vtemp_h20b1297b__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[8U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[9U] = ((__Vtemp_h20b1297b__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h20b1297b__0[9U] 
                                              << 3U));
    __Vtemp_h61612c8f__0[0xaU] = ((__Vtemp_h20b1297b__0[9U] 
                                   >> 0x1dU) | (__Vtemp_h20b1297b__0[0xaU] 
                                                << 3U));
    __Vtemp_h61612c8f__0[0xbU] = ((__Vtemp_h20b1297b__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h20b1297b__0[0xbU] 
                                                << 3U));
    __Vtemp_h61612c8f__0[0xcU] = ((__Vtemp_h20b1297b__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h20b1297b__0[0xcU] 
                                                << 3U));
    __Vtemp_h61612c8f__0[0xdU] = ((__Vtemp_h20b1297b__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h20b1297b__0[0xdU] 
                                                << 3U));
    __Vtemp_h61612c8f__0[0xeU] = ((__Vtemp_h20b1297b__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h20b1297b__0[0xeU] 
                                                << 3U));
    __Vtemp_h61612c8f__0[0xfU] = ((__Vtemp_h20b1297b__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h20b1297b__0[0xfU] 
                                                << 3U));
    __Vtemp_h61612c8f__0[0x10U] = ((__Vtemp_h20b1297b__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h20b1297b__0[0x10U] 
                                                 << 3U));
    VL_SHIFTL_WWW(516,516,516, __Vtemp_h7ce6bc0e__0, __Vtemp_hf91d521f__0, __Vtemp_h61612c8f__0);
    VL_EXTEND_WI(524,6, __Vtemp_h4c125d0e__0, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_hab98ad0c__0[0U] = (__Vtemp_h4c125d0e__0[0U] 
                                << 3U);
    __Vtemp_hab98ad0c__0[1U] = ((__Vtemp_h4c125d0e__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[1U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[2U] = ((__Vtemp_h4c125d0e__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[2U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[3U] = ((__Vtemp_h4c125d0e__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[3U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[4U] = ((__Vtemp_h4c125d0e__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[4U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[5U] = ((__Vtemp_h4c125d0e__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[5U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[6U] = ((__Vtemp_h4c125d0e__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[6U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[7U] = ((__Vtemp_h4c125d0e__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[7U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[8U] = ((__Vtemp_h4c125d0e__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[8U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[9U] = ((__Vtemp_h4c125d0e__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h4c125d0e__0[9U] 
                                              << 3U));
    __Vtemp_hab98ad0c__0[0xaU] = ((__Vtemp_h4c125d0e__0[9U] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__0[0xaU] 
                                                << 3U));
    __Vtemp_hab98ad0c__0[0xbU] = ((__Vtemp_h4c125d0e__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__0[0xbU] 
                                                << 3U));
    __Vtemp_hab98ad0c__0[0xcU] = ((__Vtemp_h4c125d0e__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__0[0xcU] 
                                                << 3U));
    __Vtemp_hab98ad0c__0[0xdU] = ((__Vtemp_h4c125d0e__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__0[0xdU] 
                                                << 3U));
    __Vtemp_hab98ad0c__0[0xeU] = ((__Vtemp_h4c125d0e__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__0[0xeU] 
                                                << 3U));
    __Vtemp_hab98ad0c__0[0xfU] = ((__Vtemp_h4c125d0e__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h4c125d0e__0[0xfU] 
                                                << 3U));
    __Vtemp_hab98ad0c__0[0x10U] = ((__Vtemp_h4c125d0e__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h4c125d0e__0[0x10U] 
                                                 << 3U));
    VL_SHIFTL_WWW(527,527,527, __Vtemp_hf054e8e1__0, VTestHarness__ConstPool__CONST_hf974e5b2_0, __Vtemp_hab98ad0c__0);
    __Vtemp_ha0857969__0[1U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_h7ce6bc0e__0[1U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_hf054e8e1__0[1U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[1U])))));
    __Vtemp_ha0857969__0[2U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_h7ce6bc0e__0[2U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_hf054e8e1__0[2U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[2U])))));
    __Vtemp_ha0857969__0[3U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_h7ce6bc0e__0[3U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_hf054e8e1__0[3U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[3U])))));
    __Vtemp_ha0857969__0[4U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_h7ce6bc0e__0[4U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_hf054e8e1__0[4U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[4U])))));
    __Vtemp_ha0857969__0[5U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_h7ce6bc0e__0[5U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_hf054e8e1__0[5U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[5U])))));
    __Vtemp_ha0857969__0[6U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_h7ce6bc0e__0[6U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_hf054e8e1__0[6U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[6U])))));
    __Vtemp_ha0857969__0[7U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_h7ce6bc0e__0[7U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_hf054e8e1__0[7U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[7U])))));
    __Vtemp_ha0857969__0[8U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_h7ce6bc0e__0[8U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_hf054e8e1__0[8U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[8U])))));
    __Vtemp_ha0857969__0[9U] = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_ha8c708d0_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                                            ? (VTestHarness__ConstPool__CONST_h00a54001_0[9U] 
                                               & __Vtemp_h7ce6bc0e__0[9U])
                                            : VTestHarness__ConstPool__CONST_ha8c708d0_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                                              ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[9U] 
                                                 & __Vtemp_hf054e8e1__0[9U])
                                              : VTestHarness__ConstPool__CONST_ha8c708d0_0[9U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h3c9d8e1d_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
               ? VTestHarness__ConstPool__CONST_ha8c708d0_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278)
                       ? (VTestHarness__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_h7ce6bc0e__0[0U])
                       : VTestHarness__ConstPool__CONST_ha8c708d0_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1293)
                         ? (VTestHarness__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_hf054e8e1__0[0U])
                         : VTestHarness__ConstPool__CONST_ha8c708d0_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_ha0857969__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_ha0857969__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_ha0857969__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_ha0857969__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_ha0857969__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_ha0857969__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_ha0857969__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_ha0857969__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_ha0857969__0[9U];
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1458) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))
                                  ? (~ (((0x1aU >= 
                                          (0xfU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                          ? (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))))
                                          : 0U) >> 3U))
                                  : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1427) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))
                                  ? (~ (((0x1aU >= 
                                          (0xfU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                          ? (0x7ffffffU 
                                             & ((IData)(0xfffU) 
                                                << 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))))
                                          : 0U) >> 3U))
                                  : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U))));
        }
    }
}
