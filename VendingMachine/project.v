`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:27:12 07/23/2020 
// Design Name: 
// Module Name:    project 
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
///this module connects all the other modules.
//in_money is the money that costumer gives the machine.
//machine_money is the money that is saved in the machine.
module vending_machine (
    input clk,
    input [1:0] mode,
    input [3:0] in_money,
    input [3:0] type,
	input [3:0] number,
    output reg [6:0] segment,
    output reg status
    );
	reg [3:0] seg_number;
	reg [3:0] machine_money;
	wire [3:0] update_saved_money1;
	wire [3:0] update_saved_money3;
	
	reg [19:0]all_number;
	reg [19:0]all_price;
	
	wire [19:0] num_wire1;
	wire [19:0] num_wire2;
	wire status1;
	wire status2;
	wire status3;
	integer stuff,x;
	reg type_index;
	reg [39:0] value;
	wire [3:0]update_money;
	reg [3:0]money;
	
	initial begin
	case (type)
			4'b0000 : type_index=1;
			4'b0001 : type_index=2;
			4'b0010 : type_index=3;
			4'b0011 : type_index=4;
			4'b0100 : type_index=5;
		endcase
		
		assign money=in_money;
		
		stuff = $fopen("mytest.txt", "r");
		  	x=$fscanf(stuff,"%b",value);
			assign all_number = value[19:0];
			assign all_price = value[39:20];

			$fclose(stuff);
			seg_number = 4'b0000;
			segment=7'b0000000;
			assign machine_money = 4'b0000;
	end
 // Instantiate the module	
	charge charge (
    .clk(clk), 
    .mode(mode), 
    .all_number(all_number), 
    .add(number),  
    .index_type(type_index), 
    .error(status2), 
    .all_num(num_wire2)
    );

 // Instantiate the module
get_money get_money (
    .clk(clk), 
    .mode(mode), 
    .machine_money(machine_money), 
    .remainig_money(update_saved_money3), 
    .error(status3)
    );

// Instantiate the module
customer customer(
    .clk(clk), 
    .mode(mode), 
    .index_type(type_index), 
    .in_number(number), 
    .money(money), 
    .saved_money(machine_money), 
    .all_number(all_number), 
    .all_price(all_price), 
    .error(status1), 
    .update_saved_money(update_saved_money1), 
    .remainig_money(update_money), 
    .update_all_number(num_wire1)///
    );
//finding type and initialize type_index decimal.
	always @(negedge clk) begin///if type 1 2 3 4 5
	    case (type)
			4'b0000 : type_index=1;
			4'b0001 : type_index=2;
			4'b0010 : type_index=3;
			4'b0011 : type_index=4;
			4'b0100 : type_index=5;
		endcase
		
		case (mode)
			0 : begin  //mode for customer
				all_number = num_wire1;
				machine_money = update_saved_money1;
				money = update_money;
				status = status1;
				seg_number = money;
			end
			1 : begin//mode charging the machine
				all_number=num_wire2;
				status = status2;
			end
			2 : begin//mode for removing all the money that exist in the machine
				machine_money = update_saved_money3;
				seg_number = machine_money;
				status = status3;
			end
		endcase
		case(seg_number)//show the 7 segment
			4'b0000 : segment = 7'h7E; // 0
			4'b0001 : segment = 7'h30; // 1
			4'b0010 : segment = 7'h6D; // 2
			4'b0011 : segment = 7'h79; // 3
			4'b0100 : segment = 7'h33; // 4
			4'b0101 : segment = 7'h5B; // 5
			4'b0110 : segment = 7'h5F; // 6
			4'b0111 : segment = 7'h70; // 7
			4'b1000 : segment = 7'h7F; // 8
			4'b1001 : segment = 7'h7B; // 9
			4'b1010 : segment = 7'h77; // A
			4'b1011 : segment = 7'h1F; // b
			4'b1100 : segment = 7'h4E; // C
			4'b1101 : segment = 7'h3D; // d
			4'b1110 : segment = 7'h4F; // E
			4'b1111 : segment = 7'h47; // F
		endcase
	end

endmodule :  vending_machine



