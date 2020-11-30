`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:50:38 09/08/2019
// Design Name:   hybrid
// Module Name:   /home/this/rca/hybrid_tb.v
// Project Name:  rca
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hybrid
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module hybrid_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg c_in;

	// Outputs
	wire c_out;
	wire [7:0] sum;

	// Instantiate the Unit Under Test (UUT)
	hybrid uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.c_out(c_out), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		a = 16;
		b = 5;
		c_in = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

