`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

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
      rst = 1;
		// Add stimulus here
		#10;
		clk = 1;
		
		#1;
		clk = 0;
		rst = 0;
		PC_select = 0;
		branch_PC = 0;
		
		#1;
		clk = 1;
		
		#1;
		clk=0;
		PC_select = 1;
		branch_PC = 10;
		
		#1;
		clk = 1;
		
		#1;
		clk = 0;
		PC_select = 1;
		branch_PC = 15;
		
		#1;
		clk = 1;
		
		#1;
		clk = 0;
		PC_select = 0;
		branch_PC = 30;
		
		#1
		clk = 1;
	end
      
endmodule

