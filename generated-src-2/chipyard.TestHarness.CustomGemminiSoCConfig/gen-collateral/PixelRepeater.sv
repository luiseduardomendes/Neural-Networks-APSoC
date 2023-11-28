// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

module PixelRepeater(
  input         clock,
                reset,
                io_req_valid,
                io_req_bits_mask_0,
                io_req_bits_mask_1,
                io_req_bits_mask_2,
                io_req_bits_mask_3,
                io_req_bits_mask_4,
                io_req_bits_mask_5,
                io_req_bits_mask_6,
                io_req_bits_mask_7,
                io_req_bits_mask_8,
                io_req_bits_mask_9,
                io_req_bits_mask_10,
                io_req_bits_mask_11,
                io_req_bits_mask_12,
                io_req_bits_mask_13,
                io_req_bits_mask_14,
                io_req_bits_mask_15,
                io_req_bits_laddr_is_acc_addr,
                io_req_bits_laddr_accumulate,
  input  [13:0] io_req_bits_laddr_data,
  input  [4:0]  io_req_bits_len,
  input  [7:0]  io_req_bits_pixel_repeats,
  input         io_req_bits_last,
  input  [15:0] io_req_bits_tag_cols,
  input  [7:0]  io_req_bits_tag_cmd_id,
  input         io_resp_ready,
  output        io_req_ready,
                io_resp_valid,
                io_resp_bits_mask_0,
                io_resp_bits_mask_1,
                io_resp_bits_mask_2,
                io_resp_bits_mask_3,
                io_resp_bits_mask_4,
                io_resp_bits_mask_5,
                io_resp_bits_mask_6,
                io_resp_bits_mask_7,
                io_resp_bits_mask_8,
                io_resp_bits_mask_9,
                io_resp_bits_mask_10,
                io_resp_bits_mask_11,
                io_resp_bits_mask_12,
                io_resp_bits_mask_13,
                io_resp_bits_mask_14,
                io_resp_bits_mask_15,
                io_resp_bits_laddr_is_acc_addr,
                io_resp_bits_laddr_accumulate,
  output [13:0] io_resp_bits_laddr_data,
  output        io_resp_bits_last,
  output [15:0] io_resp_bits_tag_cols,
  output [7:0]  io_resp_bits_tag_cmd_id
);

  reg         req_valid;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_0;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_1;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_2;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_3;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_4;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_5;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_6;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_7;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_8;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_9;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_10;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_11;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_12;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_13;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_14;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_mask_15;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_laddr_is_acc_addr;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_laddr_accumulate;	// @[PixelRepeater.scala:44:18]
  reg  [13:0] req_bits_laddr_data;	// @[PixelRepeater.scala:44:18]
  reg  [4:0]  req_bits_len;	// @[PixelRepeater.scala:44:18]
  reg  [7:0]  req_bits_pixel_repeats;	// @[PixelRepeater.scala:44:18]
  reg         req_bits_last;	// @[PixelRepeater.scala:44:18]
  reg  [15:0] req_bits_tag_cols;	// @[PixelRepeater.scala:44:18]
  reg  [7:0]  req_bits_tag_cmd_id;	// @[PixelRepeater.scala:44:18]
  wire        _T_79 = req_bits_pixel_repeats == 8'h0;	// @[PixelRepeater.scala:44:18, :46:76]
  wire        _io_req_ready_output = ~req_valid | io_resp_ready & _T_79;	// @[PixelRepeater.scala:44:18, :46:{21,32,50,76}]
  wire [46:0] _T_53 = {31'h0, req_bits_mask_15, req_bits_mask_14, req_bits_mask_13, req_bits_mask_12, req_bits_mask_11, req_bits_mask_10, req_bits_mask_9, req_bits_mask_8, req_bits_mask_7, req_bits_mask_6, req_bits_mask_5, req_bits_mask_4, req_bits_mask_3, req_bits_mask_2, req_bits_mask_1, req_bits_mask_0} << req_bits_pixel_repeats[3:0] * req_bits_len[3:0];	// @[PixelRepeater.scala:44:18, :49:41, :52:48]
  wire [13:0] _GEN = {6'h0, req_bits_pixel_repeats};	// @[LocalAddr.scala:86:26, PixelRepeater.scala:44:18]
  wire [14:0] _GEN_0 = {1'h0, req_bits_laddr_data};	// @[LocalAddr.scala:89:47, PixelRepeater.scala:44:18]
  wire [13:0] _sp_addr_result_data_T_1 = req_bits_laddr_data - _GEN;	// @[LocalAddr.scala:86:26, :89:47, PixelRepeater.scala:44:18]
  wire [14:0] _underflow_underflow_T_1 = {7'h0, req_bits_pixel_repeats} + 15'h2000;	// @[LocalAddr.scala:86:35, :89:47, PixelRepeater.scala:44:18, :58:65]
  wire        underflow = ~req_bits_laddr_is_acc_addr & (req_bits_laddr_data[13] ? _GEN_0 < _underflow_underflow_T_1 : req_bits_laddr_data < _GEN);	// @[LocalAddr.scala:86:{26,35}, :89:47, PixelRepeater.scala:44:18, :60:53, :65:{21,34,40}]
  wire        _io_resp_valid_output = req_valid & ~underflow;	// @[PixelRepeater.scala:44:18, :65:34, :72:{32,35}]
  wire        _T_78 = io_resp_ready & _io_resp_valid_output | underflow;	// @[Decoupled.scala:51:35, PixelRepeater.scala:65:34, :72:32, :74:23]
  wire        _T_80 = _io_req_ready_output & io_req_valid;	// @[Decoupled.scala:51:35, PixelRepeater.scala:46:32]
  always @(posedge clock) begin
    if (reset)
      req_valid <= 1'h0;	// @[PixelRepeater.scala:44:18]
    else
      req_valid <= _T_80 | ~(_T_78 & _T_79) & req_valid;	// @[Decoupled.scala:51:35, PixelRepeater.scala:44:18, :46:76, :74:{23,37}, :77:44, :82:23, Util.scala:134:13, :139:13]
    if (_T_80) begin	// @[Decoupled.scala:51:35]
      req_bits_mask_0 <= io_req_bits_mask_0;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_1 <= io_req_bits_mask_1;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_2 <= io_req_bits_mask_2;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_3 <= io_req_bits_mask_3;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_4 <= io_req_bits_mask_4;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_5 <= io_req_bits_mask_5;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_6 <= io_req_bits_mask_6;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_7 <= io_req_bits_mask_7;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_8 <= io_req_bits_mask_8;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_9 <= io_req_bits_mask_9;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_10 <= io_req_bits_mask_10;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_11 <= io_req_bits_mask_11;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_12 <= io_req_bits_mask_12;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_13 <= io_req_bits_mask_13;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_14 <= io_req_bits_mask_14;	// @[PixelRepeater.scala:44:18]
      req_bits_mask_15 <= io_req_bits_mask_15;	// @[PixelRepeater.scala:44:18]
      req_bits_laddr_is_acc_addr <= io_req_bits_laddr_is_acc_addr;	// @[PixelRepeater.scala:44:18]
      req_bits_laddr_accumulate <= io_req_bits_laddr_accumulate;	// @[PixelRepeater.scala:44:18]
      req_bits_laddr_data <= io_req_bits_laddr_data;	// @[PixelRepeater.scala:44:18]
      req_bits_len <= io_req_bits_len;	// @[PixelRepeater.scala:44:18]
      req_bits_pixel_repeats <= io_req_bits_pixel_repeats - 8'h1;	// @[PixelRepeater.scala:44:18, :84:59]
      req_bits_last <= io_req_bits_last;	// @[PixelRepeater.scala:44:18]
      req_bits_tag_cols <= io_req_bits_tag_cols;	// @[PixelRepeater.scala:44:18]
      req_bits_tag_cmd_id <= io_req_bits_tag_cmd_id;	// @[PixelRepeater.scala:44:18]
    end
    else if (_T_78)	// @[PixelRepeater.scala:74:23]
      req_bits_pixel_repeats <= req_bits_pixel_repeats - 8'h1;	// @[PixelRepeater.scala:44:18, :75:56]
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[PixelRepeater.scala:58:11]
      if (~reset & req_valid & req_bits_laddr_is_acc_addr & (|req_bits_pixel_repeats)) begin	// @[PixelRepeater.scala:44:18, :58:{11,65}]
        if (`ASSERT_VERBOSE_COND_)	// @[PixelRepeater.scala:58:11]
          $error("Assertion failed\n    at PixelRepeater.scala:58 assert(!(req.valid && is_acc_addr && req.bits.pixel_repeats > 0.U))\n");	// @[PixelRepeater.scala:58:11]
        if (`STOP_COND_)	// @[PixelRepeater.scala:58:11]
          $fatal;	// @[PixelRepeater.scala:58:11]
      end
    end // always @(posedge)
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    logic [31:0] _RANDOM_1;
    logic [31:0] _RANDOM_2;
    logic [31:0] _RANDOM_3;
    logic [31:0] _RANDOM_4;
    logic [31:0] _RANDOM_5;
    logic [31:0] _RANDOM_6;
    logic [31:0] _RANDOM_7;
    logic [31:0] _RANDOM_8;
    logic [31:0] _RANDOM_9;
    logic [31:0] _RANDOM_10;
    logic [31:0] _RANDOM_11;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        _RANDOM_1 = `RANDOM;
        _RANDOM_2 = `RANDOM;
        _RANDOM_3 = `RANDOM;
        _RANDOM_4 = `RANDOM;
        _RANDOM_5 = `RANDOM;
        _RANDOM_6 = `RANDOM;
        _RANDOM_7 = `RANDOM;
        _RANDOM_8 = `RANDOM;
        _RANDOM_9 = `RANDOM;
        _RANDOM_10 = `RANDOM;
        _RANDOM_11 = `RANDOM;
        req_valid = _RANDOM_0[0];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_0 = _RANDOM_4[1];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_1 = _RANDOM_4[2];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_2 = _RANDOM_4[3];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_3 = _RANDOM_4[4];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_4 = _RANDOM_4[5];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_5 = _RANDOM_4[6];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_6 = _RANDOM_4[7];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_7 = _RANDOM_4[8];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_8 = _RANDOM_4[9];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_9 = _RANDOM_4[10];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_10 = _RANDOM_4[11];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_11 = _RANDOM_4[12];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_12 = _RANDOM_4[13];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_13 = _RANDOM_4[14];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_14 = _RANDOM_4[15];	// @[PixelRepeater.scala:44:18]
        req_bits_mask_15 = _RANDOM_4[16];	// @[PixelRepeater.scala:44:18]
        req_bits_laddr_is_acc_addr = _RANDOM_4[17];	// @[PixelRepeater.scala:44:18]
        req_bits_laddr_accumulate = _RANDOM_4[18];	// @[PixelRepeater.scala:44:18]
        req_bits_laddr_data = _RANDOM_5[16:3];	// @[PixelRepeater.scala:44:18]
        req_bits_len = _RANDOM_5[21:17];	// @[PixelRepeater.scala:44:18]
        req_bits_pixel_repeats = _RANDOM_5[29:22];	// @[PixelRepeater.scala:44:18]
        req_bits_last = _RANDOM_5[30];	// @[PixelRepeater.scala:44:18]
        req_bits_tag_cols = _RANDOM_8[22:7];	// @[PixelRepeater.scala:44:18]
        req_bits_tag_cmd_id = _RANDOM_11[8:1];	// @[PixelRepeater.scala:44:18]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_req_ready = _io_req_ready_output;	// @[PixelRepeater.scala:46:32]
  assign io_resp_valid = _io_resp_valid_output;	// @[PixelRepeater.scala:72:32]
  assign io_resp_bits_mask_0 = _T_53[0];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_1 = _T_53[1];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_2 = _T_53[2];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_3 = _T_53[3];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_4 = _T_53[4];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_5 = _T_53[5];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_6 = _T_53[6];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_7 = _T_53[7];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_8 = _T_53[8];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_9 = _T_53[9];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_10 = _T_53[10];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_11 = _T_53[11];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_12 = _T_53[12];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_13 = _T_53[13];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_14 = _T_53[14];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_mask_15 = _T_53[15];	// @[PixelRepeater.scala:52:{48,108}]
  assign io_resp_bits_laddr_is_acc_addr = req_bits_laddr_is_acc_addr;	// @[PixelRepeater.scala:44:18]
  assign io_resp_bits_laddr_accumulate = req_bits_laddr_accumulate;	// @[PixelRepeater.scala:44:18]
  assign io_resp_bits_laddr_data = req_bits_laddr_is_acc_addr ? req_bits_laddr_data : req_bits_laddr_data[13] ? (_GEN_0 < _underflow_underflow_T_1 ? 14'h2000 : _sp_addr_result_data_T_1) : req_bits_laddr_data < _GEN ? 14'h0 : _sp_addr_result_data_T_1;	// @[LocalAddr.scala:86:{26,35}, :89:{23,47}, PixelRepeater.scala:44:18, :60:{22,53}, :70:30]
  assign io_resp_bits_last = req_bits_last & _T_79;	// @[PixelRepeater.scala:44:18, :46:76, :54:40]
  assign io_resp_bits_tag_cols = req_bits_tag_cols;	// @[PixelRepeater.scala:44:18]
  assign io_resp_bits_tag_cmd_id = req_bits_tag_cmd_id;	// @[PixelRepeater.scala:44:18]
endmodule
