`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:18:16 11/04/2019 
// Design Name: 
// Module Name:    risc 
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
module risc(
    input clk,
    input reset
    );
	 wire [10:0] pc;
	 wire [31:0] instr;
	 wire [10:0] branch_pc;
	 wire branch_control;
	 wire branch_alu;
	 
	 wire [2:0]opcode;
	 wire [3:0]func;
	 wire [4:0] regs;
	 wire [4:0] regt;
	 wire [31:0] shamt;
	 wire [31:0] imm;
	 
	 wire reg_write_en;
	 wire mem_write_en;
	 //wire branch_control;
	 wire [1:0]alu_src;
	 wire [3:0]code;
	 wire memToReg;
	 wire [5:0]bcode;
	 
	 wire [31:0] reg_write_data;
	 wire [31:0] reg1_data;
	 wire [31:0] reg2_data;
	 
	 wire [31:0] mult_low;
	 wire [31:0] mult_high;
	 wire double;
	 wire [31:0] alu_mux_out;
	 
	 wire [31:0] alu_out;
	 wire zflag;
	 wire carryflag;
	 wire signflag;
	 wire ovfflag;
	 
	 wire [31:0]data_out; 
	 
	 IF if_(
	 .clk(clk),
	 .reset(reset),
	 .branch_alu(branch_alu),
	 .branch_control(branch_control),
	 .br_pc(branch_pc),
	 .inst(instr),
	 .pc(pc)
	 );
	 
	ID id_(
	.inst(instr),
	.opcode(opcode),
	.func(func),
	.regs(regs),
	.regt(regt),
	.shamt(shamt),
	.imm(imm)
	);
	
	control c_(
	.opcode(opcode),
	.func(func),
	.reg_write_en(reg_write_en),
	.mem_write_en(mem_write_en),
	.branch_control(branch_control),
	.alu_src(alu_src),
	.code(code),
	.memToReg(memToReg),
	.bcode(bcode),
	.double(double)
	);
	
	regBank rb_(
	.clk(clk),
	.reset(reset),
	.write_en(reg_write_en),
	.reg_wr(regs),
	.data(reg_write_data),
	.mult_low(mult_low),
	.mult_high(mult_high),
	.reg1(regs),
	.reg2(regt),
	.double(double),
	.reg1_out(reg1_data),
	.reg2_out(reg2_data)
	);
	
	ALU_MUX am_(
	.regt(reg2_data),
	.shamt(shamt),
	.imm(imm),
	.sel(alu_src),
	.outp(alu_mux_out)
	);
	
	ALU a_(
	.inp1(reg1_data),
	.inp2(alu_mux_out),
	.code(code),
	.outp(alu_out),
	.mult_low(mult_low),
	.mult_high(mult_high),
	.zflag(zflag),
	.carryflag(carryflag), 
	.signflag(signflag),
	.ovfflag(ovfflag)
	);
	
	branch b_(
	.bcode(bcode),
	.zflag(zflag),
	.carryflag(carryflag),
	.ovfflag(ovfflag),
	.signflag(signflag),
	.L(imm),
	.rega(regt),
	.PC(branch_pc),
	.branch_control(branch_alu)
	);
	
	Data_Mem dm_(
	.clk(clk),
	.write_en(mem_write_en),
	.addr(alu_out),
	.write_data(reg2_data),
	.data_out(data_out)
	);
	
	write_reg_mux dmux_(
	.mem_data(data_out),
	.reg_data(alu_out),
	.sel(memToReg),
	.write_data(reg_write_data)
	);

endmodule
