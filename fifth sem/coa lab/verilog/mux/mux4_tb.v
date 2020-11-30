`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:09:06 09/08/2019
// Design Name:   mux4
// Module Name:   /home/this/mux/mux4_tb.v
// Project Name:  mux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux4_tb;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;
	reg [1:0]s;

	wire outp; 
	// Instantiate the Unit Under Test (UUT)
	mux4 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.s(s),
		.outp(outp)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 1;
		c = 0;
		d = 1;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
      s=1;

		#100;
      s=2;
		
		#100;
      s=3;
		 
		// Add stimulus here

	end
      
endmodule

