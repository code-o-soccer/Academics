`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:37 10/30/2019 
// Design Name: 
// Module Name:    array_multiplier 
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

module array_umult(input [31:0]p, input[31:0] q,output [63:0] y);

parameter width = 64;
wire [width-1:0] a, b, temp_p, temp_q;
assign temp_p = { 32{p[31]} };
assign temp_q = { 32{q[31]} };
assign a={ temp_p ,p};
assign b={ temp_q ,q};

wire [width*width-1:0] partials;

genvar i; 
assign partials[width-1 : 0] = a[0] ? b : 0;
generate for (i = 1; i < width; i = i+1) begin:gen
    assign partials[width*(i+1)-1 : width*i] = (a[i] ? b << i : 0) +
                                   partials[width*i-1 : width*(i-1)];
end endgenerate

assign y = partials[width*width-1 : width*(width-1)];

endmodule