`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:29:25 07/23/2020 
// Design Name: 
// Module Name:    costomer 
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

module customer (
    input clk,
    input [1:0]mode,
    input index_type,
    input [3:0]in_number,
    input [3:0]money,
    input [3:0]saved_money,
    input [19:0]all_number,
    input [19:0]all_price,
    output reg error,
    output reg [3:0]update_saved_money,
    output reg [3:0]remainig_money,
    output reg [19:0]update_all_number
    );
    reg [3:0]price;
    assign price[3:0]=all_price[index_type*4+4 -: 4];
    assign number[3:0]=all_number[index_type*4+4 -: 4];
    always @(posedge clk) begin
    	if (mode == 2'b00) begin
        if(number>=in_number && in_number * price <= money)begin
            number=number-in_number;
            remainig_money=money-price;
            update_saved_money=saved_money+price;
            end
        end
     end
    assign all_number[index_type*4 -: 4]=number;
    assign update_all_number=all_number;
endmodule : customer