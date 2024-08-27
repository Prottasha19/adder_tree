// Generator : SpinalHDL v1.10.1    git head : 2527c7c6b0fb0f95e5e1a5722a0be732b364ce43
// Component : Dut
// Git hash  : fcb113d3194ad585c838d1ebb022df69e1fc1092

`timescale 1ns/1ps

module Dut (
  input  wire [7:0]    io_a,
  input  wire [7:0]    io_b,
  input  wire [7:0]    io_c,
  output wire [7:0]    io_result,
  input  wire          clk,
  input  wire          reset
);

  wire       [7:0]    _zz__zz_io_result;
  reg        [7:0]    _zz_io_result;

  assign _zz__zz_io_result = (io_a + io_b);
  assign io_result = _zz_io_result;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_io_result <= 8'h00;
    end else begin
      _zz_io_result <= (_zz__zz_io_result - io_c);
    end
  end


endmodule
