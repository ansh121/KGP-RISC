`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module branch_tb;

	// Inputs
	reg [2:0] opcode;
	reg [3:0] fcode;
	reg [7:0] branch_addr;
	reg carryFlag;
	reg zeroFlag;
	reg overflowFlag;
	reg signFlag;
	reg [7:0] PC;

	// Outputs
	wire [7:0] branch_PC;
	wire PC_select;
	wire [31:0] ra;

	// Instantiate the Unit Under Test (UUT)
	branch uut (
		.opcode(opcode), 
		.fcode(fcode), 
		.branch_addr(branch_addr), 
		.carryFlag(carryFlag), 
		.zeroFlag(zeroFlag), 
		.overflowFlag(overflowFlag), 
		.signFlag(signFlag), 
		.PC(PC), 
		.branch_PC(branch_PC), 
		.PC_select(PC_select), 
		.ra(ra)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;
		fcode = 0;
		branch_addr = 0;
		carryFlag = 0;
		zeroFlag = 0;
		overflowFlag = 0;
		signFlag = 0;
		PC = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		opcode = 3'b011;
		fcode = 4'b0000;
		branch_addr = 8'd35;
		
		#10;
		fcode = 4'b0001;
		zeroFlag = 1;
		
		#10;
		fcode = 4'b0010;
		zeroFlag = 0;
		
		#10;
		fcode = 4'b0011;
		carryFlag = 1;
		
		#10;
		fcode = 4'b0100;
		carryFlag = 0;
		
		#10;
		fcode = 4'b0101;
		signFlag = 1;
		
		#10;
		fcode = 4'b0110;
		signFlag = 0;
		
		#10;
		fcode = 4'b0111;
		overflowFlag = 1;
		
		#10;
		fcode = 4'b1000;
		overflowFlag = 0;
		
		#10;
		fcode = 4'b1001;
		
		#10;
		fcode = 4'b1010;
		
		#10;
		opcode = 3'b100;
		
		#100;

	end
      
endmodule

