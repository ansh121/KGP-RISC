`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:59:22 11/07/2019
// Design Name:   KGP_RISC
// Module Name:   D:/My Study Folder/3rd Year/Sem 5/COA/Lab/Assignment 10/KGP_RISC/KGP_RISC_32out_tb.v
// Project Name:  blk_mem_gen_v7_3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: KGP_RISC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module KGP_RISC_32out_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] routa;
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	KGP_RISC uut (
		.clk(clk), 
		.reset(reset), 
		.routa(routa),
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always
		#1 clk=!clk;
endmodule

