// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h81905067_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a540f1_0;
extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h881bc0c4_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d99c4e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d81c7e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_h3892cc72_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b57_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h478702bb_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d99c76_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6308(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6308\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hcfa5ced3__0;
    VlWide<33>/*1055:0*/ __Vtemp_h1531d316__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__0;
    VlWide<33>/*1055:0*/ __Vtemp_h65420e98__0;
    VlWide<33>/*1055:0*/ __Vtemp_h7a85933d__0;
    VlWide<33>/*1055:0*/ __Vtemp_he95f0a0a__0;
    VlWide<33>/*1055:0*/ __Vtemp_h1bc3ccb5__0;
    VlWide<33>/*1055:0*/ __Vtemp_hfb66acfe__0;
    VlWide<9>/*287:0*/ __Vtemp_hb5b00b2d__0;
    VlWide<33>/*1055:0*/ __Vtemp_h044b4085__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__1;
    VlWide<33>/*1055:0*/ __Vtemp_hdccc2f4a__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5764f2bb__0;
    VlWide<33>/*1055:0*/ __Vtemp_he95f0a0a__1;
    VlWide<33>/*1055:0*/ __Vtemp_he4c1bc1e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h0da585df__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                             << 0xfU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x11U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                             << 0xfU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x11U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0xfffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0xfU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x11U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0xfU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x11U)));
    }
    VL_EXTEND_WI(1028,5, __Vtemp_h1531d316__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                                 ? 
                                                (1U 
                                                 | (0x1eU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 5U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_h65420e98__0[0U] = (__Vtemp_h9dd30ecc__0[0U] 
                                << 3U);
    __Vtemp_h65420e98__0[1U] = ((__Vtemp_h9dd30ecc__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[1U] 
                                              << 3U));
    __Vtemp_h65420e98__0[2U] = ((__Vtemp_h9dd30ecc__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[2U] 
                                              << 3U));
    __Vtemp_h65420e98__0[3U] = ((__Vtemp_h9dd30ecc__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[3U] 
                                              << 3U));
    __Vtemp_h65420e98__0[4U] = ((__Vtemp_h9dd30ecc__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[4U] 
                                              << 3U));
    __Vtemp_h65420e98__0[5U] = ((__Vtemp_h9dd30ecc__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[5U] 
                                              << 3U));
    __Vtemp_h65420e98__0[6U] = ((__Vtemp_h9dd30ecc__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[6U] 
                                              << 3U));
    __Vtemp_h65420e98__0[7U] = ((__Vtemp_h9dd30ecc__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[7U] 
                                              << 3U));
    __Vtemp_h65420e98__0[8U] = ((__Vtemp_h9dd30ecc__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[8U] 
                                              << 3U));
    __Vtemp_h65420e98__0[9U] = ((__Vtemp_h9dd30ecc__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h9dd30ecc__0[9U] 
                                              << 3U));
    __Vtemp_h65420e98__0[0xaU] = ((__Vtemp_h9dd30ecc__0[9U] 
                                   >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0xaU] 
                                                << 3U));
    __Vtemp_h65420e98__0[0xbU] = ((__Vtemp_h9dd30ecc__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0xbU] 
                                                << 3U));
    __Vtemp_h65420e98__0[0xcU] = ((__Vtemp_h9dd30ecc__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0xcU] 
                                                << 3U));
    __Vtemp_h65420e98__0[0xdU] = ((__Vtemp_h9dd30ecc__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0xdU] 
                                                << 3U));
    __Vtemp_h65420e98__0[0xeU] = ((__Vtemp_h9dd30ecc__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0xeU] 
                                                << 3U));
    __Vtemp_h65420e98__0[0xfU] = ((__Vtemp_h9dd30ecc__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0xfU] 
                                                << 3U));
    __Vtemp_h65420e98__0[0x10U] = ((__Vtemp_h9dd30ecc__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x10U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x11U] = ((__Vtemp_h9dd30ecc__0[0x10U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x11U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x12U] = ((__Vtemp_h9dd30ecc__0[0x11U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x12U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x13U] = ((__Vtemp_h9dd30ecc__0[0x12U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x13U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x14U] = ((__Vtemp_h9dd30ecc__0[0x13U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x14U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x15U] = ((__Vtemp_h9dd30ecc__0[0x14U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x15U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x16U] = ((__Vtemp_h9dd30ecc__0[0x15U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x16U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x17U] = ((__Vtemp_h9dd30ecc__0[0x16U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x17U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x18U] = ((__Vtemp_h9dd30ecc__0[0x17U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x18U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x19U] = ((__Vtemp_h9dd30ecc__0[0x18U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x19U] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x1aU] = ((__Vtemp_h9dd30ecc__0[0x19U] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x1aU] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x1bU] = ((__Vtemp_h9dd30ecc__0[0x1aU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x1bU] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x1cU] = ((__Vtemp_h9dd30ecc__0[0x1bU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x1cU] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x1dU] = ((__Vtemp_h9dd30ecc__0[0x1cU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x1dU] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x1eU] = ((__Vtemp_h9dd30ecc__0[0x1dU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x1eU] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x1fU] = ((__Vtemp_h9dd30ecc__0[0x1eU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x1fU] 
                                                 << 3U));
    __Vtemp_h65420e98__0[0x20U] = ((__Vtemp_h9dd30ecc__0[0x1fU] 
                                    >> 0x1dU) | (__Vtemp_h9dd30ecc__0[0x20U] 
                                                 << 3U));
    VL_SHIFTL_WWW(1028,1028,1028, __Vtemp_h7a85933d__0, __Vtemp_h1531d316__0, __Vtemp_h65420e98__0);
    VL_EXTEND_WI(1036,7, __Vtemp_he95f0a0a__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)));
    __Vtemp_h1bc3ccb5__0[0U] = (__Vtemp_he95f0a0a__0[0U] 
                                << 3U);
    __Vtemp_h1bc3ccb5__0[1U] = ((__Vtemp_he95f0a0a__0[0U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[1U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[2U] = ((__Vtemp_he95f0a0a__0[1U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[2U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[3U] = ((__Vtemp_he95f0a0a__0[2U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[3U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[4U] = ((__Vtemp_he95f0a0a__0[3U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[4U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[5U] = ((__Vtemp_he95f0a0a__0[4U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[5U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[6U] = ((__Vtemp_he95f0a0a__0[5U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[6U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[7U] = ((__Vtemp_he95f0a0a__0[6U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[7U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[8U] = ((__Vtemp_he95f0a0a__0[7U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[8U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[9U] = ((__Vtemp_he95f0a0a__0[8U] 
                                 >> 0x1dU) | (__Vtemp_he95f0a0a__0[9U] 
                                              << 3U));
    __Vtemp_h1bc3ccb5__0[0xaU] = ((__Vtemp_he95f0a0a__0[9U] 
                                   >> 0x1dU) | (__Vtemp_he95f0a0a__0[0xaU] 
                                                << 3U));
    __Vtemp_h1bc3ccb5__0[0xbU] = ((__Vtemp_he95f0a0a__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_he95f0a0a__0[0xbU] 
                                                << 3U));
    __Vtemp_h1bc3ccb5__0[0xcU] = ((__Vtemp_he95f0a0a__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_he95f0a0a__0[0xcU] 
                                                << 3U));
    __Vtemp_h1bc3ccb5__0[0xdU] = ((__Vtemp_he95f0a0a__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_he95f0a0a__0[0xdU] 
                                                << 3U));
    __Vtemp_h1bc3ccb5__0[0xeU] = ((__Vtemp_he95f0a0a__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_he95f0a0a__0[0xeU] 
                                                << 3U));
    __Vtemp_h1bc3ccb5__0[0xfU] = ((__Vtemp_he95f0a0a__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_he95f0a0a__0[0xfU] 
                                                << 3U));
    __Vtemp_h1bc3ccb5__0[0x10U] = ((__Vtemp_he95f0a0a__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x10U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x11U] = ((__Vtemp_he95f0a0a__0[0x10U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x11U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x12U] = ((__Vtemp_he95f0a0a__0[0x11U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x12U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x13U] = ((__Vtemp_he95f0a0a__0[0x12U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x13U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x14U] = ((__Vtemp_he95f0a0a__0[0x13U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x14U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x15U] = ((__Vtemp_he95f0a0a__0[0x14U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x15U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x16U] = ((__Vtemp_he95f0a0a__0[0x15U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x16U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x17U] = ((__Vtemp_he95f0a0a__0[0x16U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x17U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x18U] = ((__Vtemp_he95f0a0a__0[0x17U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x18U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x19U] = ((__Vtemp_he95f0a0a__0[0x18U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x19U] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x1aU] = ((__Vtemp_he95f0a0a__0[0x19U] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x1aU] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x1bU] = ((__Vtemp_he95f0a0a__0[0x1aU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x1bU] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x1cU] = ((__Vtemp_he95f0a0a__0[0x1bU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x1cU] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x1dU] = ((__Vtemp_he95f0a0a__0[0x1cU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x1dU] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x1eU] = ((__Vtemp_he95f0a0a__0[0x1dU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x1eU] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x1fU] = ((__Vtemp_he95f0a0a__0[0x1eU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x1fU] 
                                                 << 3U));
    __Vtemp_h1bc3ccb5__0[0x20U] = ((__Vtemp_he95f0a0a__0[0x1fU] 
                                    >> 0x1dU) | (__Vtemp_he95f0a0a__0[0x20U] 
                                                 << 3U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_hfb66acfe__0, VTestHarness__ConstPool__CONST_h81905067_0, __Vtemp_h1bc3ccb5__0);
    __Vtemp_hcfa5ced3__0[1U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[1U] 
                                               & __Vtemp_h7a85933d__0[1U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_hfb66acfe__0[1U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[1U])))));
    __Vtemp_hcfa5ced3__0[2U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[2U] 
                                               & __Vtemp_h7a85933d__0[2U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_hfb66acfe__0[2U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[2U])))));
    __Vtemp_hcfa5ced3__0[3U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[3U] 
                                               & __Vtemp_h7a85933d__0[3U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_hfb66acfe__0[3U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[3U])))));
    __Vtemp_hcfa5ced3__0[4U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[4U] 
                                               & __Vtemp_h7a85933d__0[4U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_hfb66acfe__0[4U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[4U])))));
    __Vtemp_hcfa5ced3__0[5U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[5U] 
                                               & __Vtemp_h7a85933d__0[5U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_hfb66acfe__0[5U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[5U])))));
    __Vtemp_hcfa5ced3__0[6U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[6U] 
                                               & __Vtemp_h7a85933d__0[6U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_hfb66acfe__0[6U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[6U])))));
    __Vtemp_hcfa5ced3__0[7U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[7U] 
                                               & __Vtemp_h7a85933d__0[7U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_hfb66acfe__0[7U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[7U])))));
    __Vtemp_hcfa5ced3__0[8U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[8U] 
                                               & __Vtemp_h7a85933d__0[8U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_hfb66acfe__0[8U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[8U])))));
    __Vtemp_hcfa5ced3__0[9U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h881bc0c4_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[9U] 
                                               & __Vtemp_h7a85933d__0[9U])
                                            : VTestHarness__ConstPool__CONST_h881bc0c4_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[9U] 
                                                 & __Vtemp_hfb66acfe__0[9U])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[9U])))));
    __Vtemp_hcfa5ced3__0[0xaU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xaU] 
                                                 & __Vtemp_h7a85933d__0[0xaU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xaU] 
                                                   & __Vtemp_hfb66acfe__0[0xaU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xaU])))));
    __Vtemp_hcfa5ced3__0[0xbU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xbU] 
                                                 & __Vtemp_h7a85933d__0[0xbU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xbU] 
                                                   & __Vtemp_hfb66acfe__0[0xbU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xbU])))));
    __Vtemp_hcfa5ced3__0[0xcU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xcU] 
                                                 & __Vtemp_h7a85933d__0[0xcU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xcU] 
                                                   & __Vtemp_hfb66acfe__0[0xcU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xcU])))));
    __Vtemp_hcfa5ced3__0[0xdU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xdU] 
                                                 & __Vtemp_h7a85933d__0[0xdU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xdU] 
                                                   & __Vtemp_hfb66acfe__0[0xdU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xdU])))));
    __Vtemp_hcfa5ced3__0[0xeU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xeU] 
                                                 & __Vtemp_h7a85933d__0[0xeU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xeU] 
                                                   & __Vtemp_hfb66acfe__0[0xeU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xeU])))));
    __Vtemp_hcfa5ced3__0[0xfU] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                              ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0xfU] 
                                                 & __Vtemp_h7a85933d__0[0xfU])
                                              : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                ? (
                                                   VTestHarness__ConstPool__CONST_hf1d81c7e_0[0xfU] 
                                                   & __Vtemp_hfb66acfe__0[0xfU])
                                                : VTestHarness__ConstPool__CONST_h881bc0c4_0[0xfU])))));
    __Vtemp_hcfa5ced3__0[0x10U] = (VTestHarness__ConstPool__CONST_h00a540f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                               ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0x10U] 
                                                  & __Vtemp_h7a85933d__0[0x10U])
                                               : VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                 ? 
                                                (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0x10U] 
                                                 & __Vtemp_hfb66acfe__0[0x10U])
                                                 : 
                                                VTestHarness__ConstPool__CONST_h881bc0c4_0[0x10U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h00a540f1_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h881bc0c4_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c4e_0[0U] 
                          & __Vtemp_h7a85933d__0[0U])
                       : VTestHarness__ConstPool__CONST_h881bc0c4_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_hfb66acfe__0[0U])
                         : VTestHarness__ConstPool__CONST_h881bc0c4_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_hcfa5ced3__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_hcfa5ced3__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_hcfa5ced3__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_hcfa5ced3__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_hcfa5ced3__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_hcfa5ced3__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_hcfa5ced3__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_hcfa5ced3__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = __Vtemp_hcfa5ced3__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = __Vtemp_hcfa5ced3__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = __Vtemp_hcfa5ced3__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = __Vtemp_hcfa5ced3__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = __Vtemp_hcfa5ced3__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = __Vtemp_hcfa5ced3__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = __Vtemp_hcfa5ced3__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = __Vtemp_hcfa5ced3__0[0x10U];
    VL_EXTEND_WI(1027,4, __Vtemp_h044b4085__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__1, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_hdccc2f4a__0[0U] = (__Vtemp_h9dd30ecc__1[0U] 
                                << 2U);
    __Vtemp_hdccc2f4a__0[1U] = ((__Vtemp_h9dd30ecc__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[1U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[2U] = ((__Vtemp_h9dd30ecc__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[2U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[3U] = ((__Vtemp_h9dd30ecc__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[3U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[4U] = ((__Vtemp_h9dd30ecc__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[4U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[5U] = ((__Vtemp_h9dd30ecc__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[5U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[6U] = ((__Vtemp_h9dd30ecc__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[6U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[7U] = ((__Vtemp_h9dd30ecc__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[7U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[8U] = ((__Vtemp_h9dd30ecc__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[8U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[9U] = ((__Vtemp_h9dd30ecc__1[8U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[9U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[0xaU] = ((__Vtemp_h9dd30ecc__1[9U] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xaU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xbU] = ((__Vtemp_h9dd30ecc__1[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xbU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xcU] = ((__Vtemp_h9dd30ecc__1[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xcU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xdU] = ((__Vtemp_h9dd30ecc__1[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xdU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xeU] = ((__Vtemp_h9dd30ecc__1[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xeU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xfU] = ((__Vtemp_h9dd30ecc__1[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xfU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0x10U] = ((__Vtemp_h9dd30ecc__1[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x10U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x11U] = ((__Vtemp_h9dd30ecc__1[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x11U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x12U] = ((__Vtemp_h9dd30ecc__1[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x12U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x13U] = ((__Vtemp_h9dd30ecc__1[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x13U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x14U] = ((__Vtemp_h9dd30ecc__1[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x14U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x15U] = ((__Vtemp_h9dd30ecc__1[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x15U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x16U] = ((__Vtemp_h9dd30ecc__1[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x16U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x17U] = ((__Vtemp_h9dd30ecc__1[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x17U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x18U] = ((__Vtemp_h9dd30ecc__1[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x18U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x19U] = ((__Vtemp_h9dd30ecc__1[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x19U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1aU] = ((__Vtemp_h9dd30ecc__1[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1aU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1bU] = ((__Vtemp_h9dd30ecc__1[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1bU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1cU] = ((__Vtemp_h9dd30ecc__1[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1cU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1dU] = ((__Vtemp_h9dd30ecc__1[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1dU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1eU] = ((__Vtemp_h9dd30ecc__1[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1eU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1fU] = ((__Vtemp_h9dd30ecc__1[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1fU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x20U] = ((__Vtemp_h9dd30ecc__1[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h5764f2bb__0, __Vtemp_h044b4085__0, __Vtemp_hdccc2f4a__0);
    VL_EXTEND_WI(1037,7, __Vtemp_he95f0a0a__1, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)));
    __Vtemp_he4c1bc1e__0[0U] = (__Vtemp_he95f0a0a__1[0U] 
                                << 2U);
    __Vtemp_he4c1bc1e__0[1U] = ((__Vtemp_he95f0a0a__1[0U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[1U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[2U] = ((__Vtemp_he95f0a0a__1[1U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[2U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[3U] = ((__Vtemp_he95f0a0a__1[2U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[3U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[4U] = ((__Vtemp_he95f0a0a__1[3U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[4U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[5U] = ((__Vtemp_he95f0a0a__1[4U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[5U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[6U] = ((__Vtemp_he95f0a0a__1[5U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[6U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[7U] = ((__Vtemp_he95f0a0a__1[6U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[7U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[8U] = ((__Vtemp_he95f0a0a__1[7U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[8U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[9U] = ((__Vtemp_he95f0a0a__1[8U] 
                                 >> 0x1eU) | (__Vtemp_he95f0a0a__1[9U] 
                                              << 2U));
    __Vtemp_he4c1bc1e__0[0xaU] = ((__Vtemp_he95f0a0a__1[9U] 
                                   >> 0x1eU) | (__Vtemp_he95f0a0a__1[0xaU] 
                                                << 2U));
    __Vtemp_he4c1bc1e__0[0xbU] = ((__Vtemp_he95f0a0a__1[0xaU] 
                                   >> 0x1eU) | (__Vtemp_he95f0a0a__1[0xbU] 
                                                << 2U));
    __Vtemp_he4c1bc1e__0[0xcU] = ((__Vtemp_he95f0a0a__1[0xbU] 
                                   >> 0x1eU) | (__Vtemp_he95f0a0a__1[0xcU] 
                                                << 2U));
    __Vtemp_he4c1bc1e__0[0xdU] = ((__Vtemp_he95f0a0a__1[0xcU] 
                                   >> 0x1eU) | (__Vtemp_he95f0a0a__1[0xdU] 
                                                << 2U));
    __Vtemp_he4c1bc1e__0[0xeU] = ((__Vtemp_he95f0a0a__1[0xdU] 
                                   >> 0x1eU) | (__Vtemp_he95f0a0a__1[0xeU] 
                                                << 2U));
    __Vtemp_he4c1bc1e__0[0xfU] = ((__Vtemp_he95f0a0a__1[0xeU] 
                                   >> 0x1eU) | (__Vtemp_he95f0a0a__1[0xfU] 
                                                << 2U));
    __Vtemp_he4c1bc1e__0[0x10U] = ((__Vtemp_he95f0a0a__1[0xfU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x10U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x11U] = ((__Vtemp_he95f0a0a__1[0x10U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x11U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x12U] = ((__Vtemp_he95f0a0a__1[0x11U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x12U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x13U] = ((__Vtemp_he95f0a0a__1[0x12U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x13U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x14U] = ((__Vtemp_he95f0a0a__1[0x13U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x14U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x15U] = ((__Vtemp_he95f0a0a__1[0x14U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x15U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x16U] = ((__Vtemp_he95f0a0a__1[0x15U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x16U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x17U] = ((__Vtemp_he95f0a0a__1[0x16U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x17U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x18U] = ((__Vtemp_he95f0a0a__1[0x17U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x18U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x19U] = ((__Vtemp_he95f0a0a__1[0x18U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x19U] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x1aU] = ((__Vtemp_he95f0a0a__1[0x19U] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x1aU] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x1bU] = ((__Vtemp_he95f0a0a__1[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x1bU] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x1cU] = ((__Vtemp_he95f0a0a__1[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x1cU] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x1dU] = ((__Vtemp_he95f0a0a__1[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x1dU] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x1eU] = ((__Vtemp_he95f0a0a__1[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x1eU] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x1fU] = ((__Vtemp_he95f0a0a__1[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x1fU] 
                                                 << 2U));
    __Vtemp_he4c1bc1e__0[0x20U] = ((__Vtemp_he95f0a0a__1[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_he95f0a0a__1[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_h0da585df__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_he4c1bc1e__0);
    __Vtemp_hb5b00b2d__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h5764f2bb__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h0da585df__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_hb5b00b2d__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h5764f2bb__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h0da585df__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_hb5b00b2d__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h5764f2bb__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h0da585df__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_hb5b00b2d__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h5764f2bb__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h0da585df__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_hb5b00b2d__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h5764f2bb__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h0da585df__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_hb5b00b2d__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h5764f2bb__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h0da585df__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_hb5b00b2d__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h5764f2bb__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h0da585df__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_hb5b00b2d__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h5764f2bb__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h0da585df__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h5764f2bb__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h0da585df__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hb5b00b2d__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hb5b00b2d__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_hb5b00b2d__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_hb5b00b2d__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_hb5b00b2d__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_hb5b00b2d__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_hb5b00b2d__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_hb5b00b2d__0[8U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6309(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6309\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc82f6130__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a9a6856__0;
    VlWide<4>/*127:0*/ __Vtemp_hca162495__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_he9c661dc__0;
    VlWide<4>/*127:0*/ __Vtemp_hdfad5be0__0;
    VlWide<3>/*95:0*/ __Vtemp_h00690fdb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__2;
    VlWide<4>/*127:0*/ __Vtemp_h0fc91397__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__3;
    VlWide<4>/*127:0*/ __Vtemp_h266c67de__0;
    VlWide<9>/*287:0*/ __Vtemp_h7b0c6f52__0;
    VlWide<33>/*1055:0*/ __Vtemp_h3fd6d3b3__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__0;
    VlWide<33>/*1055:0*/ __Vtemp_h65421e99__0;
    VlWide<33>/*1055:0*/ __Vtemp_hbc8d1275__0;
    VlWide<33>/*1055:0*/ __Vtemp_h0fe9f94e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h84c64b3a__0;
    VlWide<33>/*1055:0*/ __Vtemp_h48bd8524__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h9a9a6856__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_hca162495__0, __Vtemp_hc961d23f__0, __Vtemp_h9a9a6856__0);
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_he9c661dc__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_hdfad5be0__0, __Vtemp_hc961d23f__1, __Vtemp_he9c661dc__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        __Vtemp_hc82f6130__0[1U] = 0U;
        __Vtemp_hc82f6130__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        __Vtemp_hc82f6130__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                         ? __Vtemp_hca162495__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                     ? 
                                                    __Vtemp_hdfad5be0__0[1U]
                                                     : 0U)));
        __Vtemp_hc82f6130__0[2U] = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                                               ? __Vtemp_hca162495__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                                                 ? 
                                                __Vtemp_hdfad5be0__0[2U]
                                                 : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_864)
                    ? __Vtemp_hca162495__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_879)
                      ? __Vtemp_hdfad5be0__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_hc82f6130__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_hc82f6130__0[2U];
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1ffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                            << 0xfU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0x11U)));
    }
    __Vtemp_hc961d23f__2[0U] = 1U;
    __Vtemp_hc961d23f__2[1U] = 0U;
    __Vtemp_hc961d23f__2[2U] = 0U;
    __Vtemp_hc961d23f__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0fc91397__0, __Vtemp_hc961d23f__2, 
                  (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 0xaU)));
    __Vtemp_hc961d23f__3[0U] = 1U;
    __Vtemp_hc961d23f__3[1U] = 0U;
    __Vtemp_hc961d23f__3[2U] = 0U;
    __Vtemp_hc961d23f__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h266c67de__0, __Vtemp_hc961d23f__3, 
                  (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_source) 
                            >> 4U)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        __Vtemp_h00690fdb__0[1U] = 0U;
        __Vtemp_h00690fdb__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        __Vtemp_h00690fdb__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? __Vtemp_h0fc91397__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                                     ? 
                                                    __Vtemp_h266c67de__0[1U]
                                                     : 0U)));
        __Vtemp_h00690fdb__0[2U] = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h0fc91397__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                                 ? 
                                                __Vtemp_h266c67de__0[2U]
                                                 : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                    ? __Vtemp_h0fc91397__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                      ? __Vtemp_h266c67de__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h00690fdb__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h00690fdb__0[2U];
    VL_EXTEND_WI(1027,4, __Vtemp_h3fd6d3b3__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_h65421e99__0[0U] = (__Vtemp_h9dd30ecc__0[0U] 
                                << 2U);
    __Vtemp_h65421e99__0[1U] = ((__Vtemp_h9dd30ecc__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[1U] 
                                              << 2U));
    __Vtemp_h65421e99__0[2U] = ((__Vtemp_h9dd30ecc__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[2U] 
                                              << 2U));
    __Vtemp_h65421e99__0[3U] = ((__Vtemp_h9dd30ecc__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[3U] 
                                              << 2U));
    __Vtemp_h65421e99__0[4U] = ((__Vtemp_h9dd30ecc__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[4U] 
                                              << 2U));
    __Vtemp_h65421e99__0[5U] = ((__Vtemp_h9dd30ecc__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[5U] 
                                              << 2U));
    __Vtemp_h65421e99__0[6U] = ((__Vtemp_h9dd30ecc__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[6U] 
                                              << 2U));
    __Vtemp_h65421e99__0[7U] = ((__Vtemp_h9dd30ecc__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[7U] 
                                              << 2U));
    __Vtemp_h65421e99__0[8U] = ((__Vtemp_h9dd30ecc__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[8U] 
                                              << 2U));
    __Vtemp_h65421e99__0[9U] = ((__Vtemp_h9dd30ecc__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[9U] 
                                              << 2U));
    __Vtemp_h65421e99__0[0xaU] = ((__Vtemp_h9dd30ecc__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xaU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xbU] = ((__Vtemp_h9dd30ecc__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xbU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xcU] = ((__Vtemp_h9dd30ecc__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xcU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xdU] = ((__Vtemp_h9dd30ecc__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xdU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xeU] = ((__Vtemp_h9dd30ecc__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xeU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xfU] = ((__Vtemp_h9dd30ecc__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xfU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0x10U] = ((__Vtemp_h9dd30ecc__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x10U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x11U] = ((__Vtemp_h9dd30ecc__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x11U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x12U] = ((__Vtemp_h9dd30ecc__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x12U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x13U] = ((__Vtemp_h9dd30ecc__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x13U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x14U] = ((__Vtemp_h9dd30ecc__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x14U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x15U] = ((__Vtemp_h9dd30ecc__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x15U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x16U] = ((__Vtemp_h9dd30ecc__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x16U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x17U] = ((__Vtemp_h9dd30ecc__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x17U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x18U] = ((__Vtemp_h9dd30ecc__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x18U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x19U] = ((__Vtemp_h9dd30ecc__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x19U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1aU] = ((__Vtemp_h9dd30ecc__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1bU] = ((__Vtemp_h9dd30ecc__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1cU] = ((__Vtemp_h9dd30ecc__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1dU] = ((__Vtemp_h9dd30ecc__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1eU] = ((__Vtemp_h9dd30ecc__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1fU] = ((__Vtemp_h9dd30ecc__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x20U] = ((__Vtemp_h9dd30ecc__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_hbc8d1275__0, __Vtemp_h3fd6d3b3__0, __Vtemp_h65421e99__0);
    VL_EXTEND_WI(1037,7, __Vtemp_h0fe9f94e__0, (0x7fU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_source) 
                                                   >> 4U)));
    __Vtemp_h84c64b3a__0[0U] = (__Vtemp_h0fe9f94e__0[0U] 
                                << 2U);
    __Vtemp_h84c64b3a__0[1U] = ((__Vtemp_h0fe9f94e__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[1U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[2U] = ((__Vtemp_h0fe9f94e__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[2U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[3U] = ((__Vtemp_h0fe9f94e__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[3U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[4U] = ((__Vtemp_h0fe9f94e__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[4U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[5U] = ((__Vtemp_h0fe9f94e__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[5U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[6U] = ((__Vtemp_h0fe9f94e__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[6U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[7U] = ((__Vtemp_h0fe9f94e__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[7U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[8U] = ((__Vtemp_h0fe9f94e__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[8U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[9U] = ((__Vtemp_h0fe9f94e__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[9U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[0xaU] = ((__Vtemp_h0fe9f94e__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xaU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xbU] = ((__Vtemp_h0fe9f94e__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xbU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xcU] = ((__Vtemp_h0fe9f94e__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xcU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xdU] = ((__Vtemp_h0fe9f94e__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xdU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xeU] = ((__Vtemp_h0fe9f94e__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xeU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xfU] = ((__Vtemp_h0fe9f94e__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xfU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0x10U] = ((__Vtemp_h0fe9f94e__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x10U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x11U] = ((__Vtemp_h0fe9f94e__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x11U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x12U] = ((__Vtemp_h0fe9f94e__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x12U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x13U] = ((__Vtemp_h0fe9f94e__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x13U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x14U] = ((__Vtemp_h0fe9f94e__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x14U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x15U] = ((__Vtemp_h0fe9f94e__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x15U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x16U] = ((__Vtemp_h0fe9f94e__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x16U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x17U] = ((__Vtemp_h0fe9f94e__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x17U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x18U] = ((__Vtemp_h0fe9f94e__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x18U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x19U] = ((__Vtemp_h0fe9f94e__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x19U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1aU] = ((__Vtemp_h0fe9f94e__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1bU] = ((__Vtemp_h0fe9f94e__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1cU] = ((__Vtemp_h0fe9f94e__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1dU] = ((__Vtemp_h0fe9f94e__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1eU] = ((__Vtemp_h0fe9f94e__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1fU] = ((__Vtemp_h0fe9f94e__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x20U] = ((__Vtemp_h0fe9f94e__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_h48bd8524__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_h84c64b3a__0);
    __Vtemp_h7b0c6f52__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_hbc8d1275__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h48bd8524__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h7b0c6f52__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_hbc8d1275__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h48bd8524__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h7b0c6f52__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_hbc8d1275__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h48bd8524__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h7b0c6f52__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_hbc8d1275__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h48bd8524__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h7b0c6f52__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_hbc8d1275__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h48bd8524__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h7b0c6f52__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_hbc8d1275__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h48bd8524__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h7b0c6f52__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_hbc8d1275__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h48bd8524__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h7b0c6f52__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_hbc8d1275__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h48bd8524__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_hbc8d1275__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h48bd8524__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h7b0c6f52__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h7b0c6f52__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h7b0c6f52__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h7b0c6f52__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_h7b0c6f52__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_h7b0c6f52__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_h7b0c6f52__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_h7b0c6f52__0[8U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6310(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6310\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h8efb7574__0;
    VlWide<33>/*1055:0*/ __Vtemp_h09e92e01__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__0;
    VlWide<33>/*1055:0*/ __Vtemp_h65421e99__0;
    VlWide<33>/*1055:0*/ __Vtemp_hc3432bd6__0;
    VlWide<33>/*1055:0*/ __Vtemp_h0fe9f94e__0;
    VlWide<33>/*1055:0*/ __Vtemp_h84c64b3a__0;
    VlWide<33>/*1055:0*/ __Vtemp_h48bd8524__0;
    // Body
    VL_EXTEND_WI(1027,4, __Vtemp_h09e92e01__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 5U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_h65421e99__0[0U] = (__Vtemp_h9dd30ecc__0[0U] 
                                << 2U);
    __Vtemp_h65421e99__0[1U] = ((__Vtemp_h9dd30ecc__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[1U] 
                                              << 2U));
    __Vtemp_h65421e99__0[2U] = ((__Vtemp_h9dd30ecc__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[2U] 
                                              << 2U));
    __Vtemp_h65421e99__0[3U] = ((__Vtemp_h9dd30ecc__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[3U] 
                                              << 2U));
    __Vtemp_h65421e99__0[4U] = ((__Vtemp_h9dd30ecc__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[4U] 
                                              << 2U));
    __Vtemp_h65421e99__0[5U] = ((__Vtemp_h9dd30ecc__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[5U] 
                                              << 2U));
    __Vtemp_h65421e99__0[6U] = ((__Vtemp_h9dd30ecc__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[6U] 
                                              << 2U));
    __Vtemp_h65421e99__0[7U] = ((__Vtemp_h9dd30ecc__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[7U] 
                                              << 2U));
    __Vtemp_h65421e99__0[8U] = ((__Vtemp_h9dd30ecc__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[8U] 
                                              << 2U));
    __Vtemp_h65421e99__0[9U] = ((__Vtemp_h9dd30ecc__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[9U] 
                                              << 2U));
    __Vtemp_h65421e99__0[0xaU] = ((__Vtemp_h9dd30ecc__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xaU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xbU] = ((__Vtemp_h9dd30ecc__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xbU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xcU] = ((__Vtemp_h9dd30ecc__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xcU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xdU] = ((__Vtemp_h9dd30ecc__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xdU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xeU] = ((__Vtemp_h9dd30ecc__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xeU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xfU] = ((__Vtemp_h9dd30ecc__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xfU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0x10U] = ((__Vtemp_h9dd30ecc__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x10U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x11U] = ((__Vtemp_h9dd30ecc__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x11U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x12U] = ((__Vtemp_h9dd30ecc__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x12U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x13U] = ((__Vtemp_h9dd30ecc__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x13U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x14U] = ((__Vtemp_h9dd30ecc__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x14U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x15U] = ((__Vtemp_h9dd30ecc__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x15U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x16U] = ((__Vtemp_h9dd30ecc__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x16U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x17U] = ((__Vtemp_h9dd30ecc__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x17U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x18U] = ((__Vtemp_h9dd30ecc__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x18U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x19U] = ((__Vtemp_h9dd30ecc__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x19U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1aU] = ((__Vtemp_h9dd30ecc__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1bU] = ((__Vtemp_h9dd30ecc__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1cU] = ((__Vtemp_h9dd30ecc__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1dU] = ((__Vtemp_h9dd30ecc__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1eU] = ((__Vtemp_h9dd30ecc__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1fU] = ((__Vtemp_h9dd30ecc__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x20U] = ((__Vtemp_h9dd30ecc__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_hc3432bd6__0, __Vtemp_h09e92e01__0, __Vtemp_h65421e99__0);
    VL_EXTEND_WI(1037,7, __Vtemp_h0fe9f94e__0, (0x7fU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_source) 
                                                   >> 4U)));
    __Vtemp_h84c64b3a__0[0U] = (__Vtemp_h0fe9f94e__0[0U] 
                                << 2U);
    __Vtemp_h84c64b3a__0[1U] = ((__Vtemp_h0fe9f94e__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[1U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[2U] = ((__Vtemp_h0fe9f94e__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[2U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[3U] = ((__Vtemp_h0fe9f94e__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[3U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[4U] = ((__Vtemp_h0fe9f94e__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[4U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[5U] = ((__Vtemp_h0fe9f94e__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[5U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[6U] = ((__Vtemp_h0fe9f94e__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[6U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[7U] = ((__Vtemp_h0fe9f94e__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[7U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[8U] = ((__Vtemp_h0fe9f94e__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[8U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[9U] = ((__Vtemp_h0fe9f94e__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h0fe9f94e__0[9U] 
                                              << 2U));
    __Vtemp_h84c64b3a__0[0xaU] = ((__Vtemp_h0fe9f94e__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xaU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xbU] = ((__Vtemp_h0fe9f94e__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xbU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xcU] = ((__Vtemp_h0fe9f94e__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xcU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xdU] = ((__Vtemp_h0fe9f94e__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xdU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xeU] = ((__Vtemp_h0fe9f94e__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xeU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0xfU] = ((__Vtemp_h0fe9f94e__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0xfU] 
                                                << 2U));
    __Vtemp_h84c64b3a__0[0x10U] = ((__Vtemp_h0fe9f94e__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x10U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x11U] = ((__Vtemp_h0fe9f94e__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x11U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x12U] = ((__Vtemp_h0fe9f94e__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x12U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x13U] = ((__Vtemp_h0fe9f94e__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x13U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x14U] = ((__Vtemp_h0fe9f94e__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x14U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x15U] = ((__Vtemp_h0fe9f94e__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x15U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x16U] = ((__Vtemp_h0fe9f94e__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x16U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x17U] = ((__Vtemp_h0fe9f94e__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x17U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x18U] = ((__Vtemp_h0fe9f94e__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x18U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x19U] = ((__Vtemp_h0fe9f94e__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x19U] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1aU] = ((__Vtemp_h0fe9f94e__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1bU] = ((__Vtemp_h0fe9f94e__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1cU] = ((__Vtemp_h0fe9f94e__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1dU] = ((__Vtemp_h0fe9f94e__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1eU] = ((__Vtemp_h0fe9f94e__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x1fU] = ((__Vtemp_h0fe9f94e__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h84c64b3a__0[0x20U] = ((__Vtemp_h0fe9f94e__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h0fe9f94e__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_h48bd8524__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_h84c64b3a__0);
    __Vtemp_h8efb7574__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_hc3432bd6__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_h48bd8524__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h8efb7574__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_hc3432bd6__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_h48bd8524__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h8efb7574__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_hc3432bd6__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_h48bd8524__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h8efb7574__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_hc3432bd6__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_h48bd8524__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h8efb7574__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_hc3432bd6__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_h48bd8524__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h8efb7574__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_hc3432bd6__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_h48bd8524__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h8efb7574__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_hc3432bd6__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_h48bd8524__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h8efb7574__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_hc3432bd6__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_h48bd8524__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_hc3432bd6__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_862)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_h48bd8524__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h8efb7574__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h8efb7574__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h8efb7574__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h8efb7574__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h8efb7574__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h8efb7574__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h8efb7574__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h8efb7574__0[8U];
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                         >> 0x11U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0xfU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x11U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 0x10U)))) 
                        << 0x1fU) | (QData)((IData)(
                                                    (0x7fffffffU 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x18U)))) 
                << 7U) | (IData)(((((QData)((IData)(
                                                    (0xffU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                        >> 0x10U)))) 
                                    << 0x1fU) | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                  >> 0x20U)));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x18U)))) 
                >> 0x19U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x18U))) 
                                      >> 0x20U)) << 7U));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                         >> 0x11U)) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                       >> 0x18U))) 
                                                >> 0x20U)) 
                                       >> 0x19U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 0xaU));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6311(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6311\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h3887c55c__0;
    VlWide<33>/*1055:0*/ __Vtemp_hddb33b5d__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__0;
    VlWide<33>/*1055:0*/ __Vtemp_h65421e99__0;
    VlWide<33>/*1055:0*/ __Vtemp_hb4d51462__0;
    VlWide<33>/*1055:0*/ __Vtemp_hd7665aee__0;
    VlWide<33>/*1055:0*/ __Vtemp_hafe362a7__0;
    VlWide<33>/*1055:0*/ __Vtemp_ha482b876__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___T_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 6U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 0x10U)))) 
                        << 0x2fU) | (((QData)((IData)(
                                                      (0x7fffffffU 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                           << 0xfU) 
                                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  ((0xfe00U 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 1U)) 
                                                                   | (0x1ffU 
                                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x18U)))) 
                << 0x17U) | (IData)(((((QData)((IData)(
                                                       (0xffU 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                           >> 0x10U)))) 
                                       << 0x2fU) | 
                                      (((QData)((IData)(
                                                        (0x7fffffffU 
                                                         & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                             << 0xfU) 
                                                            | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 0x11U))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    ((0xfe00U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 1U)) 
                                                                     | (0x1ffU 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))) 
                                     >> 0x20U)));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x18U)))) 
                >> 9U) | ((IData)(((((QData)((IData)(
                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                     << 0x28U) | (((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                     >> 0x18U))) 
                                   >> 0x20U)) << 0x17U));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0x800000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                             >> 1U)) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                                        >> 0x18U))) 
                                                 >> 0x20U)) 
                                        >> 9U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value;
    }
    VL_EXTEND_WI(1027,4, __Vtemp_hddb33b5d__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 5U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_h65421e99__0[0U] = (__Vtemp_h9dd30ecc__0[0U] 
                                << 2U);
    __Vtemp_h65421e99__0[1U] = ((__Vtemp_h9dd30ecc__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[1U] 
                                              << 2U));
    __Vtemp_h65421e99__0[2U] = ((__Vtemp_h9dd30ecc__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[2U] 
                                              << 2U));
    __Vtemp_h65421e99__0[3U] = ((__Vtemp_h9dd30ecc__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[3U] 
                                              << 2U));
    __Vtemp_h65421e99__0[4U] = ((__Vtemp_h9dd30ecc__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[4U] 
                                              << 2U));
    __Vtemp_h65421e99__0[5U] = ((__Vtemp_h9dd30ecc__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[5U] 
                                              << 2U));
    __Vtemp_h65421e99__0[6U] = ((__Vtemp_h9dd30ecc__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[6U] 
                                              << 2U));
    __Vtemp_h65421e99__0[7U] = ((__Vtemp_h9dd30ecc__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[7U] 
                                              << 2U));
    __Vtemp_h65421e99__0[8U] = ((__Vtemp_h9dd30ecc__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[8U] 
                                              << 2U));
    __Vtemp_h65421e99__0[9U] = ((__Vtemp_h9dd30ecc__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[9U] 
                                              << 2U));
    __Vtemp_h65421e99__0[0xaU] = ((__Vtemp_h9dd30ecc__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xaU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xbU] = ((__Vtemp_h9dd30ecc__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xbU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xcU] = ((__Vtemp_h9dd30ecc__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xcU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xdU] = ((__Vtemp_h9dd30ecc__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xdU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xeU] = ((__Vtemp_h9dd30ecc__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xeU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xfU] = ((__Vtemp_h9dd30ecc__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xfU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0x10U] = ((__Vtemp_h9dd30ecc__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x10U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x11U] = ((__Vtemp_h9dd30ecc__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x11U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x12U] = ((__Vtemp_h9dd30ecc__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x12U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x13U] = ((__Vtemp_h9dd30ecc__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x13U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x14U] = ((__Vtemp_h9dd30ecc__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x14U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x15U] = ((__Vtemp_h9dd30ecc__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x15U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x16U] = ((__Vtemp_h9dd30ecc__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x16U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x17U] = ((__Vtemp_h9dd30ecc__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x17U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x18U] = ((__Vtemp_h9dd30ecc__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x18U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x19U] = ((__Vtemp_h9dd30ecc__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x19U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1aU] = ((__Vtemp_h9dd30ecc__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1bU] = ((__Vtemp_h9dd30ecc__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1cU] = ((__Vtemp_h9dd30ecc__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1dU] = ((__Vtemp_h9dd30ecc__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1eU] = ((__Vtemp_h9dd30ecc__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1fU] = ((__Vtemp_h9dd30ecc__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x20U] = ((__Vtemp_h9dd30ecc__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_hb4d51462__0, __Vtemp_hddb33b5d__0, __Vtemp_h65421e99__0);
    VL_EXTEND_WI(1037,7, __Vtemp_hd7665aee__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xbU)));
    __Vtemp_hafe362a7__0[0U] = (__Vtemp_hd7665aee__0[0U] 
                                << 2U);
    __Vtemp_hafe362a7__0[1U] = ((__Vtemp_hd7665aee__0[0U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[1U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[2U] = ((__Vtemp_hd7665aee__0[1U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[2U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[3U] = ((__Vtemp_hd7665aee__0[2U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[3U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[4U] = ((__Vtemp_hd7665aee__0[3U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[4U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[5U] = ((__Vtemp_hd7665aee__0[4U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[5U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[6U] = ((__Vtemp_hd7665aee__0[5U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[6U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[7U] = ((__Vtemp_hd7665aee__0[6U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[7U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[8U] = ((__Vtemp_hd7665aee__0[7U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[8U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[9U] = ((__Vtemp_hd7665aee__0[8U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[9U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[0xaU] = ((__Vtemp_hd7665aee__0[9U] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xaU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xbU] = ((__Vtemp_hd7665aee__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xbU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xcU] = ((__Vtemp_hd7665aee__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xcU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xdU] = ((__Vtemp_hd7665aee__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xdU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xeU] = ((__Vtemp_hd7665aee__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xeU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xfU] = ((__Vtemp_hd7665aee__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xfU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0x10U] = ((__Vtemp_hd7665aee__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x10U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x11U] = ((__Vtemp_hd7665aee__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x11U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x12U] = ((__Vtemp_hd7665aee__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x12U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x13U] = ((__Vtemp_hd7665aee__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x13U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x14U] = ((__Vtemp_hd7665aee__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x14U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x15U] = ((__Vtemp_hd7665aee__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x15U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x16U] = ((__Vtemp_hd7665aee__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x16U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x17U] = ((__Vtemp_hd7665aee__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x17U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x18U] = ((__Vtemp_hd7665aee__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x18U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x19U] = ((__Vtemp_hd7665aee__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x19U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1aU] = ((__Vtemp_hd7665aee__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1aU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1bU] = ((__Vtemp_hd7665aee__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1bU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1cU] = ((__Vtemp_hd7665aee__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1cU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1dU] = ((__Vtemp_hd7665aee__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1dU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1eU] = ((__Vtemp_hd7665aee__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1eU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1fU] = ((__Vtemp_hd7665aee__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1fU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x20U] = ((__Vtemp_hd7665aee__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_ha482b876__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_hafe362a7__0);
    __Vtemp_h3887c55c__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_hb4d51462__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_ha482b876__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h3887c55c__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_hb4d51462__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_ha482b876__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h3887c55c__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_hb4d51462__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_ha482b876__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h3887c55c__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_hb4d51462__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_ha482b876__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h3887c55c__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_hb4d51462__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_ha482b876__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h3887c55c__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_hb4d51462__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_ha482b876__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h3887c55c__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_hb4d51462__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_ha482b876__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h3887c55c__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_hb4d51462__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_ha482b876__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_hb4d51462__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_ha482b876__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h3887c55c__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h3887c55c__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h3887c55c__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h3887c55c__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h3887c55c__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h3887c55c__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h3887c55c__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h3887c55c__0[8U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6312(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6312\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h290eb922__0;
    VlWide<33>/*1055:0*/ __Vtemp_hdc1c1b33__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__0;
    VlWide<33>/*1055:0*/ __Vtemp_h65421e99__0;
    VlWide<33>/*1055:0*/ __Vtemp_h5e910392__0;
    VlWide<33>/*1055:0*/ __Vtemp_hd7665aee__0;
    VlWide<33>/*1055:0*/ __Vtemp_hafe362a7__0;
    VlWide<33>/*1055:0*/ __Vtemp_ha482b876__0;
    VlWide<3>/*95:0*/ __Vtemp_hf99e4393__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a9a6856__0;
    VlWide<4>/*127:0*/ __Vtemp_hca162495__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_hf74cb260__0;
    VlWide<4>/*127:0*/ __Vtemp_hce52e05b__0;
    VlWide<9>/*287:0*/ __Vtemp_h9441872c__0;
    VlWide<33>/*1055:0*/ __Vtemp_h73b40947__0;
    VlWide<33>/*1055:0*/ __Vtemp_h9dd30ecc__1;
    VlWide<33>/*1055:0*/ __Vtemp_hdccc2f4a__0;
    VlWide<33>/*1055:0*/ __Vtemp_h750842e2__0;
    VlWide<33>/*1055:0*/ __Vtemp_h3eaf95a5__0;
    VlWide<33>/*1055:0*/ __Vtemp_h49b178f4__0;
    VlWide<33>/*1055:0*/ __Vtemp_hba9dd4f9__0;
    // Body
    VL_EXTEND_WI(1027,4, __Vtemp_hdc1c1b33__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_h65421e99__0[0U] = (__Vtemp_h9dd30ecc__0[0U] 
                                << 2U);
    __Vtemp_h65421e99__0[1U] = ((__Vtemp_h9dd30ecc__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[1U] 
                                              << 2U));
    __Vtemp_h65421e99__0[2U] = ((__Vtemp_h9dd30ecc__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[2U] 
                                              << 2U));
    __Vtemp_h65421e99__0[3U] = ((__Vtemp_h9dd30ecc__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[3U] 
                                              << 2U));
    __Vtemp_h65421e99__0[4U] = ((__Vtemp_h9dd30ecc__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[4U] 
                                              << 2U));
    __Vtemp_h65421e99__0[5U] = ((__Vtemp_h9dd30ecc__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[5U] 
                                              << 2U));
    __Vtemp_h65421e99__0[6U] = ((__Vtemp_h9dd30ecc__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[6U] 
                                              << 2U));
    __Vtemp_h65421e99__0[7U] = ((__Vtemp_h9dd30ecc__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[7U] 
                                              << 2U));
    __Vtemp_h65421e99__0[8U] = ((__Vtemp_h9dd30ecc__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[8U] 
                                              << 2U));
    __Vtemp_h65421e99__0[9U] = ((__Vtemp_h9dd30ecc__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__0[9U] 
                                              << 2U));
    __Vtemp_h65421e99__0[0xaU] = ((__Vtemp_h9dd30ecc__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xaU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xbU] = ((__Vtemp_h9dd30ecc__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xbU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xcU] = ((__Vtemp_h9dd30ecc__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xcU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xdU] = ((__Vtemp_h9dd30ecc__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xdU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xeU] = ((__Vtemp_h9dd30ecc__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xeU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0xfU] = ((__Vtemp_h9dd30ecc__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0xfU] 
                                                << 2U));
    __Vtemp_h65421e99__0[0x10U] = ((__Vtemp_h9dd30ecc__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x10U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x11U] = ((__Vtemp_h9dd30ecc__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x11U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x12U] = ((__Vtemp_h9dd30ecc__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x12U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x13U] = ((__Vtemp_h9dd30ecc__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x13U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x14U] = ((__Vtemp_h9dd30ecc__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x14U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x15U] = ((__Vtemp_h9dd30ecc__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x15U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x16U] = ((__Vtemp_h9dd30ecc__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x16U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x17U] = ((__Vtemp_h9dd30ecc__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x17U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x18U] = ((__Vtemp_h9dd30ecc__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x18U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x19U] = ((__Vtemp_h9dd30ecc__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x19U] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1aU] = ((__Vtemp_h9dd30ecc__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1bU] = ((__Vtemp_h9dd30ecc__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1cU] = ((__Vtemp_h9dd30ecc__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1dU] = ((__Vtemp_h9dd30ecc__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1eU] = ((__Vtemp_h9dd30ecc__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x1fU] = ((__Vtemp_h9dd30ecc__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h65421e99__0[0x20U] = ((__Vtemp_h9dd30ecc__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h5e910392__0, __Vtemp_hdc1c1b33__0, __Vtemp_h65421e99__0);
    VL_EXTEND_WI(1037,7, __Vtemp_hd7665aee__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                   [0U][0U] 
                                                   >> 0xbU)));
    __Vtemp_hafe362a7__0[0U] = (__Vtemp_hd7665aee__0[0U] 
                                << 2U);
    __Vtemp_hafe362a7__0[1U] = ((__Vtemp_hd7665aee__0[0U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[1U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[2U] = ((__Vtemp_hd7665aee__0[1U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[2U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[3U] = ((__Vtemp_hd7665aee__0[2U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[3U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[4U] = ((__Vtemp_hd7665aee__0[3U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[4U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[5U] = ((__Vtemp_hd7665aee__0[4U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[5U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[6U] = ((__Vtemp_hd7665aee__0[5U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[6U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[7U] = ((__Vtemp_hd7665aee__0[6U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[7U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[8U] = ((__Vtemp_hd7665aee__0[7U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[8U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[9U] = ((__Vtemp_hd7665aee__0[8U] 
                                 >> 0x1eU) | (__Vtemp_hd7665aee__0[9U] 
                                              << 2U));
    __Vtemp_hafe362a7__0[0xaU] = ((__Vtemp_hd7665aee__0[9U] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xaU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xbU] = ((__Vtemp_hd7665aee__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xbU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xcU] = ((__Vtemp_hd7665aee__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xcU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xdU] = ((__Vtemp_hd7665aee__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xdU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xeU] = ((__Vtemp_hd7665aee__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xeU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0xfU] = ((__Vtemp_hd7665aee__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hd7665aee__0[0xfU] 
                                                << 2U));
    __Vtemp_hafe362a7__0[0x10U] = ((__Vtemp_hd7665aee__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x10U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x11U] = ((__Vtemp_hd7665aee__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x11U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x12U] = ((__Vtemp_hd7665aee__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x12U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x13U] = ((__Vtemp_hd7665aee__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x13U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x14U] = ((__Vtemp_hd7665aee__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x14U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x15U] = ((__Vtemp_hd7665aee__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x15U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x16U] = ((__Vtemp_hd7665aee__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x16U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x17U] = ((__Vtemp_hd7665aee__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x17U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x18U] = ((__Vtemp_hd7665aee__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x18U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x19U] = ((__Vtemp_hd7665aee__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x19U] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1aU] = ((__Vtemp_hd7665aee__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1aU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1bU] = ((__Vtemp_hd7665aee__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1bU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1cU] = ((__Vtemp_hd7665aee__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1cU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1dU] = ((__Vtemp_hd7665aee__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1dU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1eU] = ((__Vtemp_hd7665aee__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1eU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x1fU] = ((__Vtemp_hd7665aee__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x1fU] 
                                                 << 2U));
    __Vtemp_hafe362a7__0[0x20U] = ((__Vtemp_hd7665aee__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_hd7665aee__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_ha482b876__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_hafe362a7__0);
    __Vtemp_h290eb922__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h5e910392__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_ha482b876__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h290eb922__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h5e910392__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_ha482b876__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h290eb922__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h5e910392__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_ha482b876__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h290eb922__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h5e910392__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_ha482b876__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h290eb922__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h5e910392__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_ha482b876__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h290eb922__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h5e910392__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_ha482b876__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h290eb922__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h5e910392__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_ha482b876__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h290eb922__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h5e910392__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_ha482b876__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h5e910392__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_ha482b876__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h290eb922__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h290eb922__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h290eb922__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h290eb922__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_h290eb922__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_h290eb922__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_h290eb922__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_h290eb922__0[8U];
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h9a9a6856__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_hca162495__0, __Vtemp_hc961d23f__0, __Vtemp_h9a9a6856__0);
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_hf74cb260__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xbU)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_hce52e05b__0, __Vtemp_hc961d23f__1, __Vtemp_hf74cb260__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        __Vtemp_hf99e4393__0[1U] = 0U;
        __Vtemp_hf99e4393__0[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] = 0U;
    } else {
        __Vtemp_hf99e4393__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                         ? __Vtemp_hca162495__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                                     ? 
                                                    __Vtemp_hce52e05b__0[1U]
                                                     : 0U)));
        __Vtemp_hf99e4393__0[2U] = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                               ? __Vtemp_hca162495__0[2U]
                                               : 0U)) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                                 ? 
                                                __Vtemp_hce52e05b__0[2U]
                                                 : 0U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_855)
                    ? __Vtemp_hca162495__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_870)
                      ? __Vtemp_hce52e05b__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_hf99e4393__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_hf99e4393__0[2U];
    VL_EXTEND_WI(1027,4, __Vtemp_h73b40947__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                                 ? 
                                                (1U 
                                                 | (0xeU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       << 1U)))
                                                 : 0U));
    VL_EXTEND_WI(1025,7, __Vtemp_h9dd30ecc__1, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)));
    __Vtemp_hdccc2f4a__0[0U] = (__Vtemp_h9dd30ecc__1[0U] 
                                << 2U);
    __Vtemp_hdccc2f4a__0[1U] = ((__Vtemp_h9dd30ecc__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[1U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[2U] = ((__Vtemp_h9dd30ecc__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[2U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[3U] = ((__Vtemp_h9dd30ecc__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[3U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[4U] = ((__Vtemp_h9dd30ecc__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[4U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[5U] = ((__Vtemp_h9dd30ecc__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[5U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[6U] = ((__Vtemp_h9dd30ecc__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[6U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[7U] = ((__Vtemp_h9dd30ecc__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[7U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[8U] = ((__Vtemp_h9dd30ecc__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[8U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[9U] = ((__Vtemp_h9dd30ecc__1[8U] 
                                 >> 0x1eU) | (__Vtemp_h9dd30ecc__1[9U] 
                                              << 2U));
    __Vtemp_hdccc2f4a__0[0xaU] = ((__Vtemp_h9dd30ecc__1[9U] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xaU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xbU] = ((__Vtemp_h9dd30ecc__1[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xbU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xcU] = ((__Vtemp_h9dd30ecc__1[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xcU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xdU] = ((__Vtemp_h9dd30ecc__1[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xdU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xeU] = ((__Vtemp_h9dd30ecc__1[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xeU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0xfU] = ((__Vtemp_h9dd30ecc__1[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0xfU] 
                                                << 2U));
    __Vtemp_hdccc2f4a__0[0x10U] = ((__Vtemp_h9dd30ecc__1[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x10U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x11U] = ((__Vtemp_h9dd30ecc__1[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x11U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x12U] = ((__Vtemp_h9dd30ecc__1[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x12U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x13U] = ((__Vtemp_h9dd30ecc__1[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x13U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x14U] = ((__Vtemp_h9dd30ecc__1[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x14U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x15U] = ((__Vtemp_h9dd30ecc__1[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x15U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x16U] = ((__Vtemp_h9dd30ecc__1[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x16U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x17U] = ((__Vtemp_h9dd30ecc__1[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x17U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x18U] = ((__Vtemp_h9dd30ecc__1[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x18U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x19U] = ((__Vtemp_h9dd30ecc__1[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x19U] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1aU] = ((__Vtemp_h9dd30ecc__1[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1aU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1bU] = ((__Vtemp_h9dd30ecc__1[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1bU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1cU] = ((__Vtemp_h9dd30ecc__1[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1cU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1dU] = ((__Vtemp_h9dd30ecc__1[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1dU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1eU] = ((__Vtemp_h9dd30ecc__1[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1eU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x1fU] = ((__Vtemp_h9dd30ecc__1[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x1fU] 
                                                 << 2U));
    __Vtemp_hdccc2f4a__0[0x20U] = ((__Vtemp_h9dd30ecc__1[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h9dd30ecc__1[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1027,1027,1027, __Vtemp_h750842e2__0, __Vtemp_h73b40947__0, __Vtemp_hdccc2f4a__0);
    VL_EXTEND_WI(1037,7, __Vtemp_h3eaf95a5__0, (0x7fU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                   [0U][3U] 
                                                   >> 4U)));
    __Vtemp_h49b178f4__0[0U] = (__Vtemp_h3eaf95a5__0[0U] 
                                << 2U);
    __Vtemp_h49b178f4__0[1U] = ((__Vtemp_h3eaf95a5__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[1U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[2U] = ((__Vtemp_h3eaf95a5__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[2U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[3U] = ((__Vtemp_h3eaf95a5__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[3U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[4U] = ((__Vtemp_h3eaf95a5__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[4U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[5U] = ((__Vtemp_h3eaf95a5__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[5U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[6U] = ((__Vtemp_h3eaf95a5__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[6U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[7U] = ((__Vtemp_h3eaf95a5__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[7U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[8U] = ((__Vtemp_h3eaf95a5__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[8U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[9U] = ((__Vtemp_h3eaf95a5__0[8U] 
                                 >> 0x1eU) | (__Vtemp_h3eaf95a5__0[9U] 
                                              << 2U));
    __Vtemp_h49b178f4__0[0xaU] = ((__Vtemp_h3eaf95a5__0[9U] 
                                   >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0xaU] 
                                                << 2U));
    __Vtemp_h49b178f4__0[0xbU] = ((__Vtemp_h3eaf95a5__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0xbU] 
                                                << 2U));
    __Vtemp_h49b178f4__0[0xcU] = ((__Vtemp_h3eaf95a5__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0xcU] 
                                                << 2U));
    __Vtemp_h49b178f4__0[0xdU] = ((__Vtemp_h3eaf95a5__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0xdU] 
                                                << 2U));
    __Vtemp_h49b178f4__0[0xeU] = ((__Vtemp_h3eaf95a5__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0xeU] 
                                                << 2U));
    __Vtemp_h49b178f4__0[0xfU] = ((__Vtemp_h3eaf95a5__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0xfU] 
                                                << 2U));
    __Vtemp_h49b178f4__0[0x10U] = ((__Vtemp_h3eaf95a5__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x10U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x11U] = ((__Vtemp_h3eaf95a5__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x11U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x12U] = ((__Vtemp_h3eaf95a5__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x12U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x13U] = ((__Vtemp_h3eaf95a5__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x13U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x14U] = ((__Vtemp_h3eaf95a5__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x14U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x15U] = ((__Vtemp_h3eaf95a5__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x15U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x16U] = ((__Vtemp_h3eaf95a5__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x16U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x17U] = ((__Vtemp_h3eaf95a5__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x17U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x18U] = ((__Vtemp_h3eaf95a5__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x18U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x19U] = ((__Vtemp_h3eaf95a5__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x19U] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x1aU] = ((__Vtemp_h3eaf95a5__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x1bU] = ((__Vtemp_h3eaf95a5__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x1cU] = ((__Vtemp_h3eaf95a5__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x1dU] = ((__Vtemp_h3eaf95a5__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x1eU] = ((__Vtemp_h3eaf95a5__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x1fU] = ((__Vtemp_h3eaf95a5__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x1fU] 
                                                 << 2U));
    __Vtemp_h49b178f4__0[0x20U] = ((__Vtemp_h3eaf95a5__0[0x1fU] 
                                    >> 0x1eU) | (__Vtemp_h3eaf95a5__0[0x20U] 
                                                 << 2U));
    VL_SHIFTL_WWW(1039,1039,1039, __Vtemp_hba9dd4f9__0, VTestHarness__ConstPool__CONST_h3892cc72_0, __Vtemp_h49b178f4__0);
    __Vtemp_h9441872c__0[1U] = (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[1U] 
                                               & __Vtemp_h750842e2__0[1U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[1U] 
                                                 & __Vtemp_hba9dd4f9__0[1U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[1U])))));
    __Vtemp_h9441872c__0[2U] = (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[2U] 
                                               & __Vtemp_h750842e2__0[2U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[2U] 
                                                 & __Vtemp_hba9dd4f9__0[2U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[2U])))));
    __Vtemp_h9441872c__0[3U] = (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[3U] 
                                               & __Vtemp_h750842e2__0[3U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[3U] 
                                                 & __Vtemp_hba9dd4f9__0[3U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[3U])))));
    __Vtemp_h9441872c__0[4U] = (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[4U] 
                                               & __Vtemp_h750842e2__0[4U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[4U] 
                                                 & __Vtemp_hba9dd4f9__0[4U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[4U])))));
    __Vtemp_h9441872c__0[5U] = (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[5U] 
                                               & __Vtemp_h750842e2__0[5U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[5U] 
                                                 & __Vtemp_hba9dd4f9__0[5U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[5U])))));
    __Vtemp_h9441872c__0[6U] = (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[6U] 
                                               & __Vtemp_h750842e2__0[6U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[6U] 
                                                 & __Vtemp_hba9dd4f9__0[6U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[6U])))));
    __Vtemp_h9441872c__0[7U] = (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[7U] 
                                               & __Vtemp_h750842e2__0[7U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[7U] 
                                                 & __Vtemp_hba9dd4f9__0[7U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[7U])))));
    __Vtemp_h9441872c__0[8U] = (VTestHarness__ConstPool__CONST_h52851b57_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_h478702bb_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                                            ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[8U] 
                                               & __Vtemp_h750842e2__0[8U])
                                            : VTestHarness__ConstPool__CONST_h478702bb_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                                              ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[8U] 
                                                 & __Vtemp_hba9dd4f9__0[8U])
                                              : VTestHarness__ConstPool__CONST_h478702bb_0[8U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_h478702bb_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_855)
                       ? (VTestHarness__ConstPool__CONST_hf1d99c76_0[0U] 
                          & __Vtemp_h750842e2__0[0U])
                       : VTestHarness__ConstPool__CONST_h478702bb_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_870)
                         ? (VTestHarness__ConstPool__CONST_hf1d81c7e_0[0U] 
                            & __Vtemp_hba9dd4f9__0[0U])
                         : VTestHarness__ConstPool__CONST_h478702bb_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h9441872c__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h9441872c__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h9441872c__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h9441872c__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_h9441872c__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_h9441872c__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_h9441872c__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_h9441872c__0[8U];
}
