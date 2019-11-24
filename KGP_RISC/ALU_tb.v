`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg clk;
	reg [31:0] ALU_inp1;
	reg [31:0] ALU_inp2;
	reg [2:0] opcode;
	reg [3:0] fcode;

	// Outputs
	wire [31:0] ALUout;
	wire [31:0] ALU_extout;
	wire carryFlag;
	wire zeroFlag;
	wire signFlag;
	wire overflowFlag;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.clk(clk), 
		.ALU_inp1(ALU_inp1), 
		.ALU_inp2(ALU_inp2), 
		.opcode(opcode), 
		.fcode(fcode), 
		.ALUout(ALUout), 
		.ALU_extout(ALU_extout), 
		.carryFlag(carryFlag), 
		.zeroFlag(zeroFlag), 
		.signFlag(signFlag), 
		.overflowFlag(overflowFlag)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		ALU_inp1 = 0;
		ALU_inp2 = 0;
		opcode = 0;
		fcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		ALU_inp1 = 5;
		ALU_inp2 = 6;
		
		opcode = 3'b000;

		fcode = 4'b0000;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0001;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0010;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0011;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0100;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0101;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0110;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0111;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b1000;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b1001;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b1010;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b1011;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		opcode = 3'b001;
		
		fcode = 4'b0000;
		
		#10;
		clk = 1;
		
		#10;
		clk = 0;
		fcode = 4'b0001;
		
		#10;
		clk = 1;

	end
      
endmodule

