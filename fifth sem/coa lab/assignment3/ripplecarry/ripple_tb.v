`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:30:59 08/07/2019
// Design Name:   ripple_adder
// Module Name:   E:/group 10/adder/ripple_tb.v
// Project Name:  adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ripple_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ripple_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg c_in;

	// Outputs
	wire [7:0] sum;
	wire c_out;

	// Instantiate the Unit Under Test (UUT)
	ripple_adder uut (
		.a(a), 
		.b(b), 
		.c_in(c_in), 
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		 a = 8'b10001111;
		 b = 8'b10101011;
		 c_in = 1;
		// Add stimulus here

	end
      
endmodule

