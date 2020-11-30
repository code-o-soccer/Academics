`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:26 10/21/2019
// Design Name:   ID
// Module Name:   E:/group 10/RISC/id_tb.v
// Project Name:  RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_tb;

	// Inputs
	reg [31:0] inst;

	// Outputs
	wire [2:0] opcode;
	wire [3:0] func;
	wire [4:0] regs;
	wire [4:0] regt;
	wire [4:0] shamt;
	wire [25:0] imm;

	// Instantiate the Unit Under Test (UUT)
	ID uut (
		.inst(inst), 
		.opcode(opcode), 
		.func(func), 
		.regs(regs), 
		.regt(regt), 
		.shamt(shamt), 
		.imm(imm)
	);

	initial begin
		// Initialize Inputs
			inst  = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		inst = 32'b01010010010001101001101001010011;

        
		// Add stimulus here

	end
      
endmodule

