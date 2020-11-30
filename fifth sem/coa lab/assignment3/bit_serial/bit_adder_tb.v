`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:19:05 08/16/2019
// Design Name:   bit_serial
// Module Name:   E:/group 10/adder/bit_adder_tb.v
// Project Name:  adder
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

module bit_adder_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg clk;
	reg reset;
	reg load;
	reg carry_in;
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
		.carry_in(carry_in),
		.sum(sum), 
		.c_out(c_out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		clk = 0;
		reset = 1; 
		load = 0;
		carry_in = 0;

		// Wait 100 ns for global reset to finish
		#50;
		clk = 1;
		//reset = 0;
		
		#50; 
		load=1;
		clk=0;
		a=8'b10110110;
		b=8'b01100011;
		
		reset = 0;
		
		#50;
		clk=1;
	
		
		#100;
		load = 0;
		clk=0;
		
		#100;
		clk=1;
		
		#100; 
		clk=0;
		
		#100;
		clk=1;
		
		#100;
		clk=0;
		
		#100;
		clk=1;
		
		#100;
		clk=0;
		
		#100;
		clk=1;
		
		#100;
		clk=0;
		
		#100;
		clk=1;
		
		#100;
		clk=0;
		
		#100;
		clk=1;
		
		#100;
		clk=0;
		
		#100;
		clk=1;
		
		#100;
		clk=0;
		
		#100;
		clk=1;
		
		// Add stimulus here

	end
      
endmodule

