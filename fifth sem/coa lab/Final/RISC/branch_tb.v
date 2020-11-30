`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:31:58 10/28/2019
// Design Name:   branch
// Module Name:   E:/group 10/RISC/branch_tb.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: branch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module branch_tb;

	// Inputs
	reg [5:0] bcode;
	reg zflag;
	reg carryflag;
	reg signflag;
	reg ovfflag;
	reg [31:0] L;
	reg [31:0] rega;

	// Outputs
	wire [10:0] PC;
	wire branch_control;
	wire write_reg;

	// Instantiate the Unit Under Test (UUT)
	branch uut (
		.bcode(bcode), 
		.zflag(zflag), 
		.carryflag(carryflag), 
		.signflag(signflag), 
		.ovfflag(ovfflag), 
		.L(L), 
		.rega(rega), 
		.PC(PC), 
		.branch_control(branch_control), 
		.write_reg(write_reg)
	);

	initial begin
		// Initialize Inputs
		bcode = 6'b101000;
		zflag = 1;
		carryflag = 0;
		signflag = 0;
		ovfflag = 0;
		L = 235;
		rega = 5;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

