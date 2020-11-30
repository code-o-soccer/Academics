`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:16 10/14/2019 
// Design Name: 
// Module Name:    IF 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module IF(
    input clk,
    input reset,
    input branch_alu,
	 input branch_control,
    input [10:0]br_pc,
    output [31:0]inst,
	 output [10:0]pc
    );
	wire pc_sel = branch_control & branch_alu;
	reg [31:0]din =0;
	reg [31:0] Instr_Mem [31:0];
	
	initial begin 
		Instr_Mem[0] = 0;
		Instr_Mem[1]  = 32'b00100001000000000000000000000001; // addi 0
		//Instr_Mem[2]  = 32'b01100000000000100000000000000000; // bracn h on zero
		//Instr_Mem[3]  = 32'b00100001000000000000000000000011;
		Instr_Mem[2]  = 32'b00100001000000000000000000001101; // addi 3 to r1
		Instr_Mem[3]  = 32'b00100010000000000000000000001001;	// addi 2 to r2
		Instr_Mem[4]  = 32'b00000001000100000000010000000001; // mult 1, 2
		//Instr_Mem[5]  = 32'b10001000000000010000000000000000; // b 1
		Instr_Mem[5]  = 32'b01000000101000000000000000001001;
		Instr_Mem[6]  = 32'b01000000001000000000000000001000;		
		
		//Instr_Mem[2]  = 2;
	end
	
	
	wire [10:0]npc,add_pc;
	PC_mux M( add_pc ,br_pc ,pc_sel,npc);
	PC P(clk, reset, npc, pc);
	assign inst = Instr_Mem[pc];
	//Instruction_Memory IM(.clka(clk), .wea(0), .addra(pc), .dina(din), .douta(inst));
	PC_incr I(pc, add_pc);
	//IF_ID D(clk,reset,n_instr ,instr);

endmodule
