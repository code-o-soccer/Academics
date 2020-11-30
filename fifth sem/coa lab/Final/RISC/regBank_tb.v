`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:52:34 10/21/2019
// Design Name:   regBank
// Module Name:   E:/group 10/RISC/regBank_tb.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: regBank
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module regBank_tb;

	// Inputs
	reg clk;
	reg reset;
	reg write_en;
	reg [4:0] reg_wr;
	reg [31:0] data;
	reg [4:0] reg1;
	reg [4:0] reg2;

	// Outputs
	wire [31:0] reg1_out;
	wire [31:0] reg2_out;

	// Instantiate the Unit Under Test (UUT)
	regBank uut (
		.clk(clk), 
		.reset(reset), 
		.write_en(write_en), 
		.reg_wr(reg_wr), 
		.data(data), 
		.reg1(reg1), 
		.reg2(reg2), 
		.reg1_out(reg1_out), 
		.reg2_out(reg2_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		write_en = 1;
		reg_wr = 5;
		data = 4231421;
		reg1 = 0;
		reg2 = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
	always 
		#50 clk = !clk;
      
endmodule

