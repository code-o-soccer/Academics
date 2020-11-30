`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:44 08/21/2019 
// Design Name: 
// Module Name:    m3det 
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
module m3det(
    input reset,
    input inp,
    input clk,	
	 output reg outp,
    output wire slo_clk
	 
    );


	 reg [26:0]counter=0;
	 reg slow_clk;
	 
    always @(posedge clk)
    begin
        counter <= (counter>=4000000)?0:counter+1;
        slow_clk <= (counter < 2000000)?1'b0:1'b1;
    end
	 
	 reg temp_out;
	 reg [1:0]state ;
	 
	 assign slo_clk = slow_clk;
	 
	 
	 
always @( posedge slo_clk or posedge reset ) 
	 
	 begin 
		if ( reset == 1)
			begin
				outp = 1;
				state = 0;
			end	
			
		else if ( inp == 1 & state == 2 )	
			begin
				outp = 0;
				state = 2;
			end
		
		else if ( inp == 1 & state == 0 )	
			begin
				outp = 0;
				state = 1;
			end	
			
		else if ( inp == 0 & state == 0 )	
			begin
				outp = 1;
				state = 0;
			end
			
		else if ( inp == 0 & state == 2 )	
			begin
				outp = 0;
				state = 1;
			end
			
		else if ( inp == 0 & state == 1 )	
			begin
				outp = 0;
				state = 2;
			end
			
			
		else if ( inp == 1 & state == 1 )	
			begin
				outp = 1;
				state = 0;
			end
			
			
	 end
	 

endmodule
