`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:04:49 09/08/2019
// Design Name:   mux
// Module Name:   /home/this/mux/mux_tb.v
// Project Name:  mux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_tb;

	// Inputs
	reg a;
	reg b;
	reg s;

	// Outputs
	wire outp;

	// Instantiate the Unit Under Test (UUT)
	mux uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.outp(outp)
	);

	initial begin
		// Initialize Inputs
		a = 1;
		b = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		s = 1;
		// Add stimulus here

	end
      
endmodule

