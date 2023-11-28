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

module AsyncQueueSource_1(
  input        clock,
               reset,
               io_enq_valid,
               io_enq_bits_resumereq,
               io_enq_bits_ackhavereset,
               io_enq_bits_hrmask_0,
               io_async_ridx,
               io_async_safe_ridx_valid,
               io_async_safe_sink_reset_n,
  output       io_enq_ready,
               io_async_mem_0_resumereq,
  output [9:0] io_async_mem_0_hartsel,
  output       io_async_mem_0_ackhavereset,
               io_async_mem_0_hasel,
               io_async_mem_0_hamask_0,
               io_async_mem_0_hrmask_0,
               io_async_widx,
               io_async_safe_widx_valid,
               io_async_safe_source_reset_n
);

  wire       _io_enq_ready_output;	// @[AsyncQueue.scala:89:29]
  wire       _sink_valid_io_out;	// @[AsyncQueue.scala:104:30]
  wire       _sink_extend_io_out;	// @[AsyncQueue.scala:103:30]
  wire       _source_valid_0_io_out;	// @[AsyncQueue.scala:100:32]
  wire       _ridx_ridx_gray_io_q;	// @[ShiftReg.scala:45:23]
  reg        mem_0_resumereq;	// @[AsyncQueue.scala:80:16]
  reg  [9:0] mem_0_hartsel;	// @[AsyncQueue.scala:80:16]
  reg        mem_0_ackhavereset;	// @[AsyncQueue.scala:80:16]
  reg        mem_0_hasel;	// @[AsyncQueue.scala:80:16]
  reg        mem_0_hamask_0;	// @[AsyncQueue.scala:80:16]
  reg        mem_0_hrmask_0;	// @[AsyncQueue.scala:80:16]
  wire       _T = _io_enq_ready_output & io_enq_valid;	// @[AsyncQueue.scala:89:29, Decoupled.scala:51:35]
  reg        widx_widx_bin;	// @[AsyncQueue.scala:52:25]
  reg        ready_reg;	// @[AsyncQueue.scala:88:56]
  assign _io_enq_ready_output = ready_reg & _sink_valid_io_out;	// @[AsyncQueue.scala:88:56, :89:29, :104:30]
  reg        widx_gray;	// @[AsyncQueue.scala:91:55]
  always @(posedge clock) begin
    if (_T) begin	// @[Decoupled.scala:51:35]
      mem_0_resumereq <= io_enq_bits_resumereq;	// @[AsyncQueue.scala:80:16]
      mem_0_hartsel <= 10'h0;	// @[AsyncQueue.scala:80:16]
      mem_0_ackhavereset <= io_enq_bits_ackhavereset;	// @[AsyncQueue.scala:80:16]
      mem_0_hrmask_0 <= io_enq_bits_hrmask_0;	// @[AsyncQueue.scala:80:16]
    end
    mem_0_hasel <= ~_T & mem_0_hasel;	// @[AsyncQueue.scala:80:16, :86:{24,37}, Decoupled.scala:51:35]
    mem_0_hamask_0 <= ~_T & mem_0_hamask_0;	// @[AsyncQueue.scala:80:16, :86:{24,37}, Decoupled.scala:51:35]
  end // always @(posedge)
  wire       widx_incremented = _sink_valid_io_out & widx_widx_bin + _T;	// @[AsyncQueue.scala:52:25, :53:{23,43}, :104:30, Decoupled.scala:51:35]
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      widx_widx_bin <= 1'h0;	// @[AsyncQueue.scala:52:25]
      ready_reg <= 1'h0;	// @[AsyncQueue.scala:88:56]
      widx_gray <= 1'h0;	// @[AsyncQueue.scala:91:55]
    end
    else begin
      widx_widx_bin <= widx_incremented;	// @[AsyncQueue.scala:52:25, :53:23]
      ready_reg <= _sink_valid_io_out & widx_incremented != ~_ridx_ridx_gray_io_q;	// @[AsyncQueue.scala:53:23, :83:{26,34,44}, :88:56, :104:30, ShiftReg.scala:45:23]
      widx_gray <= widx_incremented;	// @[AsyncQueue.scala:53:23, :91:55]
    end
  end // always @(posedge, posedge)
  `ifndef SYNTHESIS
    `ifdef FIRRTL_BEFORE_INITIAL
      `FIRRTL_BEFORE_INITIAL
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM_0;
    initial begin
      `ifdef INIT_RANDOM_PROLOG_
        `INIT_RANDOM_PROLOG_
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT
        _RANDOM_0 = `RANDOM;
        mem_0_resumereq = _RANDOM_0[0];	// @[AsyncQueue.scala:80:16]
        mem_0_hartsel = _RANDOM_0[10:1];	// @[AsyncQueue.scala:80:16]
        mem_0_ackhavereset = _RANDOM_0[11];	// @[AsyncQueue.scala:80:16]
        mem_0_hasel = _RANDOM_0[12];	// @[AsyncQueue.scala:80:16]
        mem_0_hamask_0 = _RANDOM_0[13];	// @[AsyncQueue.scala:80:16]
        mem_0_hrmask_0 = _RANDOM_0[14];	// @[AsyncQueue.scala:80:16]
        widx_widx_bin = _RANDOM_0[15];	// @[AsyncQueue.scala:52:25, :80:16]
        ready_reg = _RANDOM_0[16];	// @[AsyncQueue.scala:80:16, :88:56]
        widx_gray = _RANDOM_0[17];	// @[AsyncQueue.scala:80:16, :91:55]
      `endif // RANDOMIZE_REG_INIT
      `ifdef RANDOMIZE
        if (reset) begin
          widx_widx_bin = 1'h0;	// @[AsyncQueue.scala:52:25]
          ready_reg = 1'h0;	// @[AsyncQueue.scala:88:56]
          widx_gray = 1'h0;	// @[AsyncQueue.scala:91:55]
        end
      `endif // RANDOMIZE
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL
      `FIRRTL_AFTER_INITIAL
    `endif // FIRRTL_AFTER_INITIAL
  `endif // not def SYNTHESIS
  AsyncResetSynchronizerShiftReg_w1_d3_i0 ridx_ridx_gray (	// @[ShiftReg.scala:45:23]
    .clock (clock),
    .reset (reset),
    .io_d  (io_async_ridx),
    .io_q  (_ridx_ridx_gray_io_q)
  );
  AsyncValidSync source_valid_0 (	// @[AsyncQueue.scala:100:32]
    .io_in  (1'h1),	// @[AsyncQueue.scala:79:28]
    .clock  (clock),
    .reset  (reset | ~io_async_safe_sink_reset_n),	// @[AsyncQueue.scala:105:{43,46}]
    .io_out (_source_valid_0_io_out)
  );
  AsyncValidSync source_valid_1 (	// @[AsyncQueue.scala:101:32]
    .io_in  (_source_valid_0_io_out),	// @[AsyncQueue.scala:100:32]
    .clock  (clock),
    .reset  (reset | ~io_async_safe_sink_reset_n),	// @[AsyncQueue.scala:105:46, :106:43]
    .io_out (io_async_safe_widx_valid)
  );
  AsyncValidSync sink_extend (	// @[AsyncQueue.scala:103:30]
    .io_in  (io_async_safe_ridx_valid),
    .clock  (clock),
    .reset  (reset | ~io_async_safe_sink_reset_n),	// @[AsyncQueue.scala:105:46, :107:43]
    .io_out (_sink_extend_io_out)
  );
  AsyncValidSync sink_valid (	// @[AsyncQueue.scala:104:30]
    .io_in  (_sink_extend_io_out),	// @[AsyncQueue.scala:103:30]
    .clock  (clock),
    .reset  (reset),
    .io_out (_sink_valid_io_out)
  );
  assign io_enq_ready = _io_enq_ready_output;	// @[AsyncQueue.scala:89:29]
  assign io_async_mem_0_resumereq = mem_0_resumereq;	// @[AsyncQueue.scala:80:16]
  assign io_async_mem_0_hartsel = mem_0_hartsel;	// @[AsyncQueue.scala:80:16]
  assign io_async_mem_0_ackhavereset = mem_0_ackhavereset;	// @[AsyncQueue.scala:80:16]
  assign io_async_mem_0_hasel = mem_0_hasel;	// @[AsyncQueue.scala:80:16]
  assign io_async_mem_0_hamask_0 = mem_0_hamask_0;	// @[AsyncQueue.scala:80:16]
  assign io_async_mem_0_hrmask_0 = mem_0_hrmask_0;	// @[AsyncQueue.scala:80:16]
  assign io_async_widx = widx_gray;	// @[AsyncQueue.scala:91:55]
  assign io_async_safe_source_reset_n = ~reset;	// @[AsyncQueue.scala:121:27]
endmodule

