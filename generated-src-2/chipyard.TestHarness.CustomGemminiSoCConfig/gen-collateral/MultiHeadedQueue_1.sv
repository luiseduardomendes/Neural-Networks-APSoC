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

module MultiHeadedQueue_1(
  input         clock,
                reset,
                io_enq_valid,
  input  [6:0]  io_enq_bits_cmd_inst_funct,
  input  [63:0] io_enq_bits_cmd_rs1,
                io_enq_bits_cmd_rs2,
  input         io_enq_bits_rob_id_valid,
  input  [5:0]  io_enq_bits_rob_id_bits,
  input  [1:0]  io_deq_pop,
  output        io_enq_ready,
                io_deq_valid_0,
                io_deq_valid_1,
                io_deq_valid_2,
  output [6:0]  io_deq_bits_0_cmd_inst_funct,
  output [63:0] io_deq_bits_0_cmd_rs1,
                io_deq_bits_0_cmd_rs2,
  output        io_deq_bits_0_rob_id_valid,
  output [5:0]  io_deq_bits_0_rob_id_bits,
  output [6:0]  io_deq_bits_1_cmd_inst_funct,
  output [63:0] io_deq_bits_1_cmd_rs1,
                io_deq_bits_1_cmd_rs2,
  output        io_deq_bits_1_rob_id_valid,
  output [5:0]  io_deq_bits_1_rob_id_bits,
  output [63:0] io_deq_bits_2_cmd_rs1,
                io_deq_bits_2_cmd_rs2,
  output [5:0]  io_deq_bits_2_rob_id_bits
);

  reg  [6:0]       regs_0_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_0_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_0_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_0_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_0_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_1_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_1_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_1_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_1_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_1_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_2_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_2_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_2_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_2_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_2_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_3_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_3_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_3_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_3_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_3_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_4_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_4_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_4_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_4_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_4_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_5_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_5_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_5_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_5_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_5_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_6_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_6_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_6_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_6_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_6_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [6:0]       regs_7_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_7_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
  reg  [63:0]      regs_7_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
  reg              regs_7_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
  reg  [5:0]       regs_7_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
  reg  [2:0]       raddr;	// @[MultiHeadedQueue.scala:23:22]
  reg  [2:0]       waddr;	// @[MultiHeadedQueue.scala:24:22]
  reg  [3:0]       len;	// @[MultiHeadedQueue.scala:25:20]
  wire [2:0]       _io_deq_bits_1_T_12 = 3'h7 - raddr;	// @[MultiHeadedQueue.scala:23:22, Util.scala:12:16, :13:57]
  wire [7:0][6:0]  _GEN = {{regs_7_cmd_inst_funct}, {regs_6_cmd_inst_funct}, {regs_5_cmd_inst_funct}, {regs_4_cmd_inst_funct}, {regs_3_cmd_inst_funct}, {regs_2_cmd_inst_funct}, {regs_1_cmd_inst_funct}, {regs_0_cmd_inst_funct}};	// @[MultiHeadedQueue.scala:22:17, :32:20]
  wire [7:0][63:0] _GEN_0 = {{regs_7_cmd_rs1}, {regs_6_cmd_rs1}, {regs_5_cmd_rs1}, {regs_4_cmd_rs1}, {regs_3_cmd_rs1}, {regs_2_cmd_rs1}, {regs_1_cmd_rs1}, {regs_0_cmd_rs1}};	// @[MultiHeadedQueue.scala:22:17, :32:20]
  wire [7:0][63:0] _GEN_1 = {{regs_7_cmd_rs2}, {regs_6_cmd_rs2}, {regs_5_cmd_rs2}, {regs_4_cmd_rs2}, {regs_3_cmd_rs2}, {regs_2_cmd_rs2}, {regs_1_cmd_rs2}, {regs_0_cmd_rs2}};	// @[MultiHeadedQueue.scala:22:17, :32:20]
  wire [7:0]       _GEN_2 = {{regs_7_rob_id_valid}, {regs_6_rob_id_valid}, {regs_5_rob_id_valid}, {regs_4_rob_id_valid}, {regs_3_rob_id_valid}, {regs_2_rob_id_valid}, {regs_1_rob_id_valid}, {regs_0_rob_id_valid}};	// @[MultiHeadedQueue.scala:22:17, :32:20]
  wire [7:0][5:0]  _GEN_3 = {{regs_7_rob_id_bits}, {regs_6_rob_id_bits}, {regs_5_rob_id_bits}, {regs_4_rob_id_bits}, {regs_3_rob_id_bits}, {regs_2_rob_id_bits}, {regs_1_rob_id_bits}, {regs_0_rob_id_bits}};	// @[MultiHeadedQueue.scala:22:17, :32:20]
  wire [2:0]       _io_deq_bits_1_T_19 = (&raddr) ? 3'h1 - _io_deq_bits_1_T_12 - 3'h1 : raddr + 3'h1;	// @[MultiHeadedQueue.scala:23:22, :37:17, Util.scala:13:{10,13,48,57,62,71}]
  wire [2:0]       _io_deq_bits_2_T_19 = raddr > 3'h5 ? 3'h2 - _io_deq_bits_1_T_12 - 3'h1 : raddr + 3'h2;	// @[MultiHeadedQueue.scala:23:22, :37:17, Util.scala:13:{10,13,48,57,62,71}]
  wire [3:0]       _GEN_4 = {2'h0, io_deq_pop};	// @[MultiHeadedQueue.scala:31:28, Util.scala:13:22]
  wire [2:0]       _GEN_5 = {1'h0, io_deq_pop};	// @[MultiHeadedQueue.scala:22:17, Util.scala:13:22]
  wire             _len_T_4 = ~(len[3]) & io_enq_valid;	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:25:20, :27:23]
  always @(posedge clock) begin
    if (_len_T_4 & waddr == 3'h0) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :23:22, :24:22, :36:22, :37:17]
      regs_0_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_0_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_0_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_0_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_0_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & waddr == 3'h1) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_1_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_1_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_1_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_1_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_1_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & waddr == 3'h2) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_2_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_2_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_2_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_2_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_2_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & waddr == 3'h3) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_3_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_3_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_3_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_3_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_3_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & waddr == 3'h4) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_4_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_4_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_4_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_4_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_4_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & waddr == 3'h5) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_5_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_5_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_5_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_5_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_5_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & waddr == 3'h6) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_6_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_6_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_6_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_6_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_6_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (_len_T_4 & (&waddr)) begin	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:22:17, :24:22, :36:22, :37:17]
      regs_7_cmd_inst_funct <= io_enq_bits_cmd_inst_funct;	// @[MultiHeadedQueue.scala:22:17]
      regs_7_cmd_rs1 <= io_enq_bits_cmd_rs1;	// @[MultiHeadedQueue.scala:22:17]
      regs_7_cmd_rs2 <= io_enq_bits_cmd_rs2;	// @[MultiHeadedQueue.scala:22:17]
      regs_7_rob_id_valid <= io_enq_bits_rob_id_valid;	// @[MultiHeadedQueue.scala:22:17]
      regs_7_rob_id_bits <= io_enq_bits_rob_id_bits;	// @[MultiHeadedQueue.scala:22:17]
    end
    if (reset) begin
      raddr <= 3'h0;	// @[MultiHeadedQueue.scala:23:22]
      waddr <= 3'h0;	// @[MultiHeadedQueue.scala:23:22, :24:22]
      len <= 4'h0;	// @[MultiHeadedQueue.scala:25:20]
    end
    else begin
      if (|io_deq_pop) begin	// @[MultiHeadedQueue.scala:43:19]
        if (raddr >= 3'h7 - _GEN_5 + 3'h1 & (|io_deq_pop))	// @[MultiHeadedQueue.scala:23:22, :37:17, Util.scala:12:16, :13:{13,22,26,32,37}]
          raddr <= _GEN_5 - _io_deq_bits_1_T_12 - 3'h1;	// @[MultiHeadedQueue.scala:23:22, Util.scala:13:{22,48,57,62}]
        else	// @[Util.scala:13:32]
          raddr <= raddr + _GEN_5;	// @[MultiHeadedQueue.scala:23:22, Util.scala:13:{22,71}]
        len <= len - _GEN_4 + {3'h0, _len_T_4};	// @[Decoupled.scala:51:35, MultiHeadedQueue.scala:23:22, :25:20, :45:{16,29}, Util.scala:13:22]
      end
      else if (_len_T_4)	// @[Decoupled.scala:51:35]
        len <= len + 4'h1;	// @[MultiHeadedQueue.scala:25:20, :31:28, :39:16]
      if (_len_T_4) begin	// @[Decoupled.scala:51:35]
        if (&waddr)	// @[MultiHeadedQueue.scala:24:22, Util.scala:13:13]
          waddr <= 3'h1 - (3'h7 - waddr) - 3'h1;	// @[MultiHeadedQueue.scala:24:22, :37:17, Util.scala:12:16, :13:{48,57,62}]
        else	// @[Util.scala:13:13]
          waddr <= waddr + 3'h1;	// @[MultiHeadedQueue.scala:24:22, :37:17, Util.scala:13:71]
      end
    end
  end // always @(posedge)
  `ifndef SYNTHESIS
    always @(posedge clock) begin	// @[MultiHeadedQueue.scala:48:9]
      if (~reset & ~(_GEN_4 <= len & io_deq_pop != 2'h3)) begin	// @[MultiHeadedQueue.scala:25:20, :48:{9,21,53,67}, Util.scala:13:22]
        if (`ASSERT_VERBOSE_COND_)	// @[MultiHeadedQueue.scala:48:9]
          $error("Assertion failed\n    at MultiHeadedQueue.scala:48 assert(io.deq.pop <= len && io.deq.pop <= heads.U && io.deq.pop <= maxpop.U)\n");	// @[MultiHeadedQueue.scala:48:9]
        if (`STOP_COND_)	// @[MultiHeadedQueue.scala:48:9]
          $fatal;	// @[MultiHeadedQueue.scala:48:9]
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
    logic [31:0] _RANDOM_12;
    logic [31:0] _RANDOM_13;
    logic [31:0] _RANDOM_14;
    logic [31:0] _RANDOM_15;
    logic [31:0] _RANDOM_16;
    logic [31:0] _RANDOM_17;
    logic [31:0] _RANDOM_18;
    logic [31:0] _RANDOM_19;
    logic [31:0] _RANDOM_20;
    logic [31:0] _RANDOM_21;
    logic [31:0] _RANDOM_22;
    logic [31:0] _RANDOM_23;
    logic [31:0] _RANDOM_24;
    logic [31:0] _RANDOM_25;
    logic [31:0] _RANDOM_26;
    logic [31:0] _RANDOM_27;
    logic [31:0] _RANDOM_28;
    logic [31:0] _RANDOM_29;
    logic [31:0] _RANDOM_30;
    logic [31:0] _RANDOM_31;
    logic [31:0] _RANDOM_32;
    logic [31:0] _RANDOM_33;
    logic [31:0] _RANDOM_34;
    logic [31:0] _RANDOM_35;
    logic [31:0] _RANDOM_36;
    logic [31:0] _RANDOM_37;
    logic [31:0] _RANDOM_38;
    logic [31:0] _RANDOM_39;
    logic [31:0] _RANDOM_40;
    logic [31:0] _RANDOM_41;
    logic [31:0] _RANDOM_42;
    logic [31:0] _RANDOM_43;
    logic [31:0] _RANDOM_44;
    logic [31:0] _RANDOM_45;
    logic [31:0] _RANDOM_46;
    logic [31:0] _RANDOM_47;
    logic [31:0] _RANDOM_48;
    logic [31:0] _RANDOM_49;
    logic [31:0] _RANDOM_50;
    logic [31:0] _RANDOM_51;
    logic [31:0] _RANDOM_52;
    logic [31:0] _RANDOM_53;
    logic [31:0] _RANDOM_54;
    logic [31:0] _RANDOM_55;
    logic [31:0] _RANDOM_56;
    logic [31:0] _RANDOM_57;
    logic [31:0] _RANDOM_58;
    logic [31:0] _RANDOM_59;
    logic [31:0] _RANDOM_60;
    logic [31:0] _RANDOM_61;
    logic [31:0] _RANDOM_62;
    logic [31:0] _RANDOM_63;
    logic [31:0] _RANDOM_64;
    logic [31:0] _RANDOM_65;
    logic [31:0] _RANDOM_66;
    logic [31:0] _RANDOM_67;
    logic [31:0] _RANDOM_68;
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
        _RANDOM_12 = `RANDOM;
        _RANDOM_13 = `RANDOM;
        _RANDOM_14 = `RANDOM;
        _RANDOM_15 = `RANDOM;
        _RANDOM_16 = `RANDOM;
        _RANDOM_17 = `RANDOM;
        _RANDOM_18 = `RANDOM;
        _RANDOM_19 = `RANDOM;
        _RANDOM_20 = `RANDOM;
        _RANDOM_21 = `RANDOM;
        _RANDOM_22 = `RANDOM;
        _RANDOM_23 = `RANDOM;
        _RANDOM_24 = `RANDOM;
        _RANDOM_25 = `RANDOM;
        _RANDOM_26 = `RANDOM;
        _RANDOM_27 = `RANDOM;
        _RANDOM_28 = `RANDOM;
        _RANDOM_29 = `RANDOM;
        _RANDOM_30 = `RANDOM;
        _RANDOM_31 = `RANDOM;
        _RANDOM_32 = `RANDOM;
        _RANDOM_33 = `RANDOM;
        _RANDOM_34 = `RANDOM;
        _RANDOM_35 = `RANDOM;
        _RANDOM_36 = `RANDOM;
        _RANDOM_37 = `RANDOM;
        _RANDOM_38 = `RANDOM;
        _RANDOM_39 = `RANDOM;
        _RANDOM_40 = `RANDOM;
        _RANDOM_41 = `RANDOM;
        _RANDOM_42 = `RANDOM;
        _RANDOM_43 = `RANDOM;
        _RANDOM_44 = `RANDOM;
        _RANDOM_45 = `RANDOM;
        _RANDOM_46 = `RANDOM;
        _RANDOM_47 = `RANDOM;
        _RANDOM_48 = `RANDOM;
        _RANDOM_49 = `RANDOM;
        _RANDOM_50 = `RANDOM;
        _RANDOM_51 = `RANDOM;
        _RANDOM_52 = `RANDOM;
        _RANDOM_53 = `RANDOM;
        _RANDOM_54 = `RANDOM;
        _RANDOM_55 = `RANDOM;
        _RANDOM_56 = `RANDOM;
        _RANDOM_57 = `RANDOM;
        _RANDOM_58 = `RANDOM;
        _RANDOM_59 = `RANDOM;
        _RANDOM_60 = `RANDOM;
        _RANDOM_61 = `RANDOM;
        _RANDOM_62 = `RANDOM;
        _RANDOM_63 = `RANDOM;
        _RANDOM_64 = `RANDOM;
        _RANDOM_65 = `RANDOM;
        _RANDOM_66 = `RANDOM;
        _RANDOM_67 = `RANDOM;
        _RANDOM_68 = `RANDOM;
        regs_0_cmd_inst_funct = _RANDOM_0[6:0];	// @[MultiHeadedQueue.scala:22:17]
        regs_0_cmd_rs1 = {_RANDOM_1, _RANDOM_2};	// @[MultiHeadedQueue.scala:22:17]
        regs_0_cmd_rs2 = {_RANDOM_3, _RANDOM_4};	// @[MultiHeadedQueue.scala:22:17]
        regs_0_rob_id_valid = _RANDOM_8[9];	// @[MultiHeadedQueue.scala:22:17]
        regs_0_rob_id_bits = _RANDOM_8[15:10];	// @[MultiHeadedQueue.scala:22:17]
        regs_1_cmd_inst_funct = _RANDOM_8[24:18];	// @[MultiHeadedQueue.scala:22:17]
        regs_1_cmd_rs1 = {_RANDOM_9[31:18], _RANDOM_10, _RANDOM_11[17:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_1_cmd_rs2 = {_RANDOM_11[31:18], _RANDOM_12, _RANDOM_13[17:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_1_rob_id_valid = _RANDOM_16[27];	// @[MultiHeadedQueue.scala:22:17]
        regs_1_rob_id_bits = {_RANDOM_16[31:28], _RANDOM_17[1:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_2_cmd_inst_funct = _RANDOM_17[10:4];	// @[MultiHeadedQueue.scala:22:17]
        regs_2_cmd_rs1 = {_RANDOM_18[31:4], _RANDOM_19, _RANDOM_20[3:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_2_cmd_rs2 = {_RANDOM_20[31:4], _RANDOM_21, _RANDOM_22[3:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_2_rob_id_valid = _RANDOM_25[13];	// @[MultiHeadedQueue.scala:22:17]
        regs_2_rob_id_bits = _RANDOM_25[19:14];	// @[MultiHeadedQueue.scala:22:17]
        regs_3_cmd_inst_funct = _RANDOM_25[28:22];	// @[MultiHeadedQueue.scala:22:17]
        regs_3_cmd_rs1 = {_RANDOM_26[31:22], _RANDOM_27, _RANDOM_28[21:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_3_cmd_rs2 = {_RANDOM_28[31:22], _RANDOM_29, _RANDOM_30[21:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_3_rob_id_valid = _RANDOM_33[31];	// @[MultiHeadedQueue.scala:22:17]
        regs_3_rob_id_bits = _RANDOM_34[5:0];	// @[MultiHeadedQueue.scala:22:17]
        regs_4_cmd_inst_funct = _RANDOM_34[14:8];	// @[MultiHeadedQueue.scala:22:17]
        regs_4_cmd_rs1 = {_RANDOM_35[31:8], _RANDOM_36, _RANDOM_37[7:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_4_cmd_rs2 = {_RANDOM_37[31:8], _RANDOM_38, _RANDOM_39[7:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_4_rob_id_valid = _RANDOM_42[17];	// @[MultiHeadedQueue.scala:22:17]
        regs_4_rob_id_bits = _RANDOM_42[23:18];	// @[MultiHeadedQueue.scala:22:17]
        regs_5_cmd_inst_funct = {_RANDOM_42[31:26], _RANDOM_43[0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_5_cmd_rs1 = {_RANDOM_43[31:26], _RANDOM_44, _RANDOM_45[25:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_5_cmd_rs2 = {_RANDOM_45[31:26], _RANDOM_46, _RANDOM_47[25:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_5_rob_id_valid = _RANDOM_51[3];	// @[MultiHeadedQueue.scala:22:17]
        regs_5_rob_id_bits = _RANDOM_51[9:4];	// @[MultiHeadedQueue.scala:22:17]
        regs_6_cmd_inst_funct = _RANDOM_51[18:12];	// @[MultiHeadedQueue.scala:22:17]
        regs_6_cmd_rs1 = {_RANDOM_52[31:12], _RANDOM_53, _RANDOM_54[11:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_6_cmd_rs2 = {_RANDOM_54[31:12], _RANDOM_55, _RANDOM_56[11:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_6_rob_id_valid = _RANDOM_59[21];	// @[MultiHeadedQueue.scala:22:17]
        regs_6_rob_id_bits = _RANDOM_59[27:22];	// @[MultiHeadedQueue.scala:22:17]
        regs_7_cmd_inst_funct = {_RANDOM_59[31:30], _RANDOM_60[4:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_7_cmd_rs1 = {_RANDOM_60[31:30], _RANDOM_61, _RANDOM_62[29:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_7_cmd_rs2 = {_RANDOM_62[31:30], _RANDOM_63, _RANDOM_64[29:0]};	// @[MultiHeadedQueue.scala:22:17]
        regs_7_rob_id_valid = _RANDOM_68[7];	// @[MultiHeadedQueue.scala:22:17]
        regs_7_rob_id_bits = _RANDOM_68[13:8];	// @[MultiHeadedQueue.scala:22:17]
        raddr = _RANDOM_68[18:16];	// @[MultiHeadedQueue.scala:22:17, :23:22]
        waddr = _RANDOM_68[21:19];	// @[MultiHeadedQueue.scala:22:17, :24:22]
        len = _RANDOM_68[25:22];	// @[MultiHeadedQueue.scala:22:17, :25:20]
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  assign io_enq_ready = ~(len[3]);	// @[MultiHeadedQueue.scala:25:20, :27:23]
  assign io_deq_valid_0 = |len;	// @[MultiHeadedQueue.scala:25:20, :31:28]
  assign io_deq_valid_1 = |(len[3:1]);	// @[MultiHeadedQueue.scala:25:20, :31:28]
  assign io_deq_valid_2 = len > 4'h2;	// @[MultiHeadedQueue.scala:25:20, :31:28]
  assign io_deq_bits_0_cmd_inst_funct = _GEN[raddr];	// @[MultiHeadedQueue.scala:23:22, :32:20]
  assign io_deq_bits_0_cmd_rs1 = _GEN_0[raddr];	// @[MultiHeadedQueue.scala:23:22, :32:20]
  assign io_deq_bits_0_cmd_rs2 = _GEN_1[raddr];	// @[MultiHeadedQueue.scala:23:22, :32:20]
  assign io_deq_bits_0_rob_id_valid = _GEN_2[raddr];	// @[MultiHeadedQueue.scala:23:22, :32:20]
  assign io_deq_bits_0_rob_id_bits = _GEN_3[raddr];	// @[MultiHeadedQueue.scala:23:22, :32:20]
  assign io_deq_bits_1_cmd_inst_funct = _GEN[_io_deq_bits_1_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_1_cmd_rs1 = _GEN_0[_io_deq_bits_1_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_1_cmd_rs2 = _GEN_1[_io_deq_bits_1_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_1_rob_id_valid = _GEN_2[_io_deq_bits_1_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_1_rob_id_bits = _GEN_3[_io_deq_bits_1_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_2_cmd_rs1 = _GEN_0[_io_deq_bits_2_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_2_cmd_rs2 = _GEN_1[_io_deq_bits_2_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
  assign io_deq_bits_2_rob_id_bits = _GEN_3[_io_deq_bits_2_T_19];	// @[MultiHeadedQueue.scala:32:20, Util.scala:13:10]
endmodule

