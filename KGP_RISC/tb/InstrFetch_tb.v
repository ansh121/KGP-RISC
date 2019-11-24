`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:36:33 11/07/2019
// Design Name:   InstrFetch
// Module Name:   D:/My Study Folder/3rd Year/Sem 5/COA/Lab/Assignment 10/KGP_RISC/InstrFetch_tb.v
// Project Name:  blk_mem_gen_v7_3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstrFetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstrFetch_tb;

	// Inputs
	reg clk;
	reg rst;
	reg PC_select;
	reg [7:0] branch_PC;

	// Outputs
	wire [31:0] instr;
	wire [7:0] next_PC;

	// Instantiate the Unit Under Test (UUT)
	InstrFetch uut (
		.clk(clk), 
		.rst(rst), 
		.PC_select(PC_select), 
		.branch_PC(branch_PC), 
		.instr(instr), 
		.next_PC(next_PC)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		PC_select = 0;
		branch_PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		

	end
      
	always
		#1 clk=!clk;
		
endmodule

