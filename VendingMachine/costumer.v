`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:33:34 07/23/2020 
// Design Name: 
// Module Name:    costumer 
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
//this module alowes customer to buy a single product 
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
	 reg [3:0] i;
	 reg[3:0] j;
	 
    reg [3:0]price;
	 reg [3:0]number;
    reg [19:0]all_number_copy;
    
    always @(posedge clk) begin
	     j=0;
		  i=index_type*4-4;
		 all_number_copy=all_number;
		 ///initializing price and number accordint to the type of input.
		for(j=0 ; j<4 ; j=j+1)begin
			price[j] = all_price[i];
			number[j] = all_number[i];
			i=i+1;
    	end
		if(mode == 2'b00) begin
        if(number>=in_number && in_number*price <= money)begin
            remainig_money=money-in_number*price;
            update_saved_money=saved_money+in_number*price;
            error = 1'b0;
				end
				
			else begin//if there is error there is no change of money .
				error=1'b1;
				remainig_money=money;
				update_saved_money=saved_money;
        end
	 end	   
		  j=0;
		  i=index_type*4-4;
		for(j=0 ; j<4 ; j=j+1)begin
			all_number_copy[i]=number[j];
			i=i+1;
    	end
			update_all_number= all_number_copy;
     end
endmodule : customer