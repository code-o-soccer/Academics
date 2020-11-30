`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:02:25 09/09/2019
// Design Name:   right
// Module Name:   /home/this/shift/right_tb.v
// Project Name:  shift
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: right
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module right_tb;

	// Inputs
	reg clk;
	reg reset;
	reg load;
	reg [5:0] a;
	reg [5:0] b;

	// Outputs
	wire [11:0] product;

	// Instantiate the Unit Under Test (UUT)
	right uut (
		.clk(clk), 
		.reset(reset), 
		.load(load), 
		.a(a), 
		.b(b), 
		.product(product)
	);

	initial begin
// Initialize Inputs
		clk = 0;
		reset = 1;
		load = 0;
		a = 5;
		b = 6;
		
		#20;
      clk = 1;
		
		#20
		reset = 0;
		load = 1; 
		clk = 0;
		
		#20;
      clk = 1;
		
		#20
		load = 0;
		clk = 0;
		// Add stimulus here

	end
      
	always 
		#20 clk = !clk;
endmodule

