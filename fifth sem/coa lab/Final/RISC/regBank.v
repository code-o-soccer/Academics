`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:41 10/21/2019 
// Design Name: 
// Module Name:    regBank 
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
module regBank(
    input clk,
    input reset,
    input write_en,
    input [4:0]reg_wr,
	 input [31:0]data,
	 input [31:0]mult_low,
	 input [31:0]mult_high,
    input [4:0]reg1,
    input [4:0]reg2,
	 input double,
    output [31:0]reg1_out,
    output [31:0]reg2_out
    );
	reg [31:0] r[31:0]; 
	//assign reg1_out = r[reg1];
	//assign reg2_out = r[reg2];
	initial			
			begin
			r[0]=32'b0;	r[8]=32'b0;		r[16]=32'b0;	r[24]=32'b0;	
			r[1]=32'b0; r[9]=32'b0;		r[17]=32'b0;	r[25]=32'b0;	
			r[2]=32'b0; r[10]=32'b0;	r[18]=32'b0;	r[26]=32'b0;	
			r[3]=32'b0; r[11]=32'b0;	r[19]=32'b0;	r[27]=32'b0;	
			r[4]=32'b0; r[12]=32'b0;	r[20]=32'b0;	r[28]=32'b0;	
			r[5]=32'b0; r[13]=32'b0;	r[21]=32'b0;	r[29]=32'b0;	
			r[6]=32'b0; r[14]=32'b0;	r[22]=32'b0;	r[30]=32'b0;	
			r[7]=32'b0; r[15]=32'b0;	r[23]=32'b0;	r[31]=32'b0;	
			end
			
	//always @(posedge clk)
	//begin
		assign reg1_out = r[reg1];
		assign reg2_out = r[reg2];
	//end
	 always @(negedge clk)            
		begin
			if(write_en)
			begin
				if(!double)
					r[reg_wr] <= data;
				if(double)
				begin
					r[19] <= mult_high;
					r[20] <= mult_low;
				end
			end
		end
		
endmodule
