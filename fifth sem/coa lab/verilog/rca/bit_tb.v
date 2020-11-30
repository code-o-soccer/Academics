`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:22:46 09/08/2019
// Design Name:   bit_serial
// Module Name:   /home/this/rca/bit_tb.v
// Project Name:  rca
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bit_serial
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bit_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg clk;
	reg reset;
	reg load;
	reg c_in;

	// Outputs
	wire [7:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	bit_serial uut (
		.a(a), 
		.b(b), 
		.clk(clk), 
		.reset(reset), 
		.load(load), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		a = 5;
		b = 15;
		clk = 0;
		reset = 1;
		load = 1;
		c_in = 0;

		// Wait 100 ns for global reset to finish
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		reset = 0;
		
		#20;
		clk = 1;
		
		#20;
		load = 0;
		clk = 0;
		
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		
		#20;
		clk = 1;
		
		#20;
		clk = 0;
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		
		#20;
		clk = 1;
		
		#20;
		clk = 0;
		
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		
		#20;
		clk = 1;
		
		#20;
		clk = 0;
		
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		
		#20;
		clk = 1;
		
		#20;
		clk = 0;
		
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		
		#20;
		clk = 1;
		
		#20;
		clk = 0;
		
		#20;
      clk = 1;
		
		#20;
		clk = 0;
		
		#20;
		clk = 1;
		
		#20;
		clk = 0;
		
		
		
		// Add stimulus here

	end
      
endmodule

