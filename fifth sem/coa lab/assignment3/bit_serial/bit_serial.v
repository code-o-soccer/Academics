`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:00 08/14/2019 
// Design Name: 
// Module Name:    bit_serial 
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
module shift_register(
	input a,
	input clk, reset,load,
	output [7:0]o
	);
	reg [7:0]s;
	always @(posedge clk)
		begin
			if (!reset & !load)
				begin
					s[7] <= a;
					s[6] <= s[7];
					s[5] <= s[6];
					s[4] <= s[5];
					s[3] <= s[4];
					s[2] <= s[3];
					s[1] <= s[2];
					s[0] <= s[1];
				end
			else
				begin
					s[0] <= 0;
					s[1] <= 0;
					s[2] <= 0;
					s[3] <= 0;
					s[4] <= 0;
					s[5] <= 0;
					s[6] <= 0;
					s[7] <= 0;
				
				end
		end
		assign o = s;
	endmodule

module shift_register_load(
	input [7:0]a,
	input clk, load,reset,
	output o
	);
	reg [7:0]s;
	always @(posedge clk)
		begin
			if (reset)
				begin
					s<=0;
				end
			if(load)
				begin
					s[0] <= a[0];
					s[1] <= a[1];
					s[2] <= a[2];
					s[3] <= a[3];
					s[4] <= a[4];
					s[5] <= a[5];
					s[6] <= a[6];
					s[7] <= a[7];
				end
			else
				begin
					s[7] <= 0;
					s[6] <= s[7];
					s[5] <= s[6];
					s[4] <= s[5];
					s[3] <= s[4];
					s[2] <= s[3];
					s[1] <= s[2];
					s[0] <= s[1];
				
				end
		end
	assign o = s[0];
endmodule

module one_bit_adder(
    input a,
    input b,
    input c_in,
    output sum,
    output c_out
    );
	 
	assign {c_out, sum} = a + b + c_in;

endmodule

module d_flip_flop(
	input q,
	input clk,
	input load,
	input carry_in,
	output d
	);
	reg D;
	always @(posedge clk )
		begin
			if (load)
				begin
					D <= carry_in;
				end
			else
				begin
					D <= q;
				end
		end
		assign d = D;	
endmodule

	

module bit_serial(
    input [7:0]a,
    input [7:0]b,
	 input clk,
	 input reset,
	 input load,
	 input carry_in,
    output [7:0]sum, 
    output c_out, o1, o2, s, c_in
    ); 
	shift_register_load SL1(a, clk, load, reset, o1);
	shift_register_load SL2(b, clk, load, reset, o2);
	one_bit_adder A(o1, o2, c_in, s, c_out);
	d_flip_flop D(c_out, clk, load, carry_in, c_in);
	shift_register S(s, clk, reset, load, sum);

endmodule
