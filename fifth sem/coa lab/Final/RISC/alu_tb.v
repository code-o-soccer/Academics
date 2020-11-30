`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:06:57 10/23/2019
// Design Name:   ALU
// Module Name:   E:/group 10/RISC/alu_tb.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] inp1;
	reg [31:0] inp2;
	reg [3:0] code;

	// Outputs
	wire [31:0] outp;
	wire [31:0] mult_high;
	wire [31:0] mult_low;
	wire zflag;
	wire carryflag;
	wire ovfflag;
	wire signflag;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.inp1(inp1), 
		.inp2(inp2), 
		.code(code), 
		.outp(outp), 
		.mult_high(mult_high), 
		.mult_low(mult_low), 
		.zflag(zflag), 
		.carryflag(carryflag), 
		.ovfflag(ovfflag), 
		.signflag(signflag)
	);

	initial begin
		// Initialize Inputs
		inp1 = 0;
		inp2 = 0;
		code = 0;
 
		// Wait 100 ns for global reset to finish
		#100;
        
		 code = 4'b0011;
		 //inp1 = 32'b10011111111111111111111111101001;
		 //inp2 = 32'b11111111111111111110001111111001;
		 inp1 = -2;
		 inp2 = 4;
		// Add stimulus here

	end
      
endmodule

