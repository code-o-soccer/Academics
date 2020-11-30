`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:28:23 08/21/2019
// Design Name:   m3det
// Module Name:   E:/group 10/m3det/m3det_tb.v
// Project Name:  m3det
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: m3det
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module m3det_tb;

	// Inputs
	reg inp;
	reg reset;
	reg clk;
	wire slo_clk;

	// Outputs
	wire outp;

	// Instantiate the Unit Under Test (UUT)
	m3det uut (
		.inp(inp), 
		.reset(reset),  
		.clk(clk), 
		.outp(outp),
		.slo_clk(slo_clk)
	); 

	initial begin
		// Initialize Inputs 
		inp = 0;
		reset = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#50;
      reset = 1;
		
		#50;
		clk = 1;
		 
		#100;
		reset = 0;
		clk = 0;
		inp = 1; 
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		inp = 0;
		
		#100;
		clk = 1;
		
		#100;
		clk = 0;
		
		#100;
		clk = 1; 
		
		#100;
		clk = 0;
		
		#100;
		clk = 1; 
		
		#100; 
		clk = 0;
		// Add stimulus here

	end
      
endmodule

