`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:50:00 11/06/2019
// Design Name:   IF
// Module Name:   C:/Users/Siddhant/Downloads/RISC/if_tb.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module if_tb;

	// Inputs
	reg clk;
	reg reset;
	reg branch_alu;
	reg branch_control;
	reg [10:0] br_pc;

	// Outputs
	wire [31:0] inst;
	wire [10:0] pc;

	// Instantiate the Unit Under Test (UUT)
	IF uut (
		.clk(clk), 
		.reset(reset), 
		.branch_alu(branch_alu), 
		.branch_control(branch_control), 
		.br_pc(br_pc), 
		.inst(inst), 
		.pc(pc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		branch_alu = 0;
		branch_control = 0;
		br_pc = 0;

		// Wait 100 ns for global reset to finish

        
		// Add stimulus here

	end
	always
		#10 clk = !clk;
      
endmodule

