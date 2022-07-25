`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:28:59 07/23/2020 
// Design Name: 
// Module Name:    get_money 
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
///this moudole gives all the money to the owner if there is money.
module get_money (
       input clk,
       input [1:0] mode,
       input [3:0] machine_money,
       output reg [3:0] remainig_money,
       output reg error
    );
	always @(posedge clk) begin
		if (mode == 2'b10) begin
			if (machine_money) begin
			    remainig_money =4'b0000;
				 error = 1'b0;
			end
			else begin
				error = 1'b1;
				remainig_money = machine_money;
			end
		end
	end
endmodule : get_money





