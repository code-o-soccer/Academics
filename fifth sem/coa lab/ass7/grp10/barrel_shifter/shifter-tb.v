`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:42:10 08/21/2019
// Design Name:   barrel_shift_register
// Module Name:   E:/group 10/barrel_shift_reg/shifter-tb.v
// Project Name:  barrel_shift_reg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: barrel_shift_register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shifter_tb;

	// Inputs
	reg [7:0] inp;
	reg [2:0] shamt;
	reg dir;

	// Outputs
	wire [7:0] outp;

	// Instantiate the Unit Under Test (UUT)
	barrel_shift_register uut (
		.inp(inp),  
		.shamt(shamt), 
		.dir(dir), 
		.outp(outp)
	);

	initial begin
		// Initialize Inputs
		inp = 8'b11011011;
		shamt = 0;
		dir = 0;

		// Wait 100 ns for global reset to finish
		#100;
		shamt = 3'b101;
		dir = 0;
		// Add stimulus here

	end
      
endmodule

