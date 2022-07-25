`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:28:01 07/23/2020 
// Design Name: 
// Module Name:    charge 
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
//this module charges a single thing that we asked to be charged. 
module charge (
    input clk,
	input [1:0] mode,
	input [19:0]all_number,
	input [3:0] add,
    input index_type,
	output reg error,
	output reg [19:0]all_num
  );
  	 reg [3:0] i;
	 reg[3:0] j;
 
  reg [3:0]number_of_goods;
  reg [19:0]all_number_copy;
  reg[3:0]result_num;

	always @(posedge clk) begin
			j=0;
			i=index_type*4-4;
			all_number_copy=all_number;
		for(j=0 ; j<4 ; j=j+1)begin
			number_of_goods[j] = all_number[i];
			i=i+1;
    	end
	
	all_number_copy=all_number;
	if (mode == 2'b01) begin
			if (number_of_goods + add <= 4'b1111) begin
			    result_num[3:0]=number_of_goods + add;
				error = 1'b0;
			end
			else begin

				error= 1'b1;
				 result_num[3:0] = number_of_goods;
	    		end
    		end
			
			j=0;
			i=index_type*4-4;
			all_number_copy=all_number;
		for(j=0 ; j<4 ; j=j+1)begin
			all_number_copy[j] = result_num[i];
			i=i+1;
    	end
			all_num=all_number;
		end
endmodule : charge












