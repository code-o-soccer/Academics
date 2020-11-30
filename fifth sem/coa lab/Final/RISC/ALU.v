`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:55 10/21/2019 
// Design Name: 
// Module Name:    ALU 
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

module ALU(
    input [31:0]inp1, 
    input [31:0]inp2,
    input [3:0]code,
    output [31:0]outp,
	 output signed [31:0]mult_high,
	 output signed [31:0]mult_low,
	 output reg zflag,
	 output reg carryflag,
	 output reg ovfflag,
	 output reg signflag
    );
	 reg signed [31:0]outpt=0;
	 reg signed [63:0]mult;
	 wire signed [31:0]signed_inp1 = inp1;
	 wire signed [31:0]signed_inp2 = inp2;
	 wire [31:0]add_out;
	 wire add_carry;
	 wire sub_carry;
	 wire [31:0]sub_out;
	 wire [63:0]mult_u;
	 wire [63:0]mult_s;
	 wire [31:0]lshift_out;
	 wire [31:0]rshift_out;
	 wire [4:0]shamt;
	 //reg signed [31:0]mult_l;
	 //reg [31:0]multu_h;
	reg [63:0]multu;
	assign shamt = inp2[4:0];
	Adder A(inp1,inp2,0,add_out,add_carry);
   Adder S(inp1,-inp2,0,sub_out,sub_carry);	
	barrel_shift_register BL(inp1, shamt, 1, lshift_out);
	barrel_shift_register BR(inp1, shamt, 0, rshift_out);
	array_umult UM(inp1,inp2,mult_u);
	array_smult SM(inp1,inp2,mult_s);
	
	always @ (*)
	begin
		if( code == 4'b0001) 		//add
		begin
			{carryflag, outpt} <= {add_carry,add_out} ;
			ovfflag <= inp1[31]&inp2[31]&(~outpt[31])|(~inp1[31])&(~inp2[31])&(outpt[31]);
		end
		else if( code == 4'b0010)	//sub
		begin
			{carryflag, outpt} <= {sub_carry, sub_out};
			ovfflag <= inp1[31]&(~inp2[31])&(~outpt[31])|(~inp1[31])&(inp2[31])&(outpt[31]);
		end
		else if( code == 4'b0011)	//mult
		begin
			mult <= mult_s;
		end
		else if( code == 4'b0100)	//multu
		begin
			multu <=  mult_u;
		end
		else if( code == 4'b0101)	//comp
		begin
			outpt <= -inp1;
		end
		else if( code == 4'b0110)	//AND
		begin
			outpt <= inp1 & inp2;
		end
		else if( code == 4'b0111)	//XOR
		begin
			outpt <= inp1 ^ inp2;
		end
		else if( code == 4'b1000)	//Shift Left
		begin
			if(inp2 >= 32)
				outpt <=0;
			else
				outpt <= lshift_out;
		end
		else if( code == 4'b1001)	//Shift Right
		begin
			if(inp2 >= 32)
				outpt <=0;
			else
				outpt <= rshift_out;
		end
		else if(code == 4'b1010)	//Shift Right Arithmetic
		begin
			outpt <= signed_inp1 >>> inp2;
		end
		if (code != 4'b0001 )//and code != 4'b0010)
		begin
			if(code != 4'b0010)
			begin
				carryflag <=0;
				ovfflag <=0;
			end
		end
		if (code != 0)
		begin
			if (outpt == 0)
				zflag <=1;
			else
				zflag <=0;
				
			if(outpt[31] == 1)
				signflag <=1;
				
			else
				signflag <=0;
			
		end
		
	end
	
	assign outp = outpt;
	assign mult_high = code[0]?mult[63:32] : multu[63:32];
	assign mult_low = code[0]?mult[31:0] : multu[31:0];

endmodule
