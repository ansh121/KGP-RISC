`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module assignInputs_tb;

	// Inputs
	reg [31:0] rsData;
	reg [31:0] rtData;
	reg [4:0] shamt;
	reg [21:0] imm;
	reg [2:0] opcode;
	reg [3:0] fcode;

	// Outputs
	wire [31:0] ALU_inp1;
	wire [31:0] ALU_inp2;

	// Instantiate the Unit Under Test (UUT)
	assignInputs uut (
		.rsData(rsData), 
		.rtData(rtData), 
		.shamt(shamt), 
		.imm(imm), 
		.opcode(opcode), 
		.fcode(fcode), 
		.ALU_inp1(ALU_inp1), 
		.ALU_inp2(ALU_inp2)
	);

	initial begin
		// Initialize Inputs
		rsData = 0;
		rtData = 0;
		shamt = 0;
		imm = 0;
		opcode = 0;
		fcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rsData = 5;
		rtData = 6;
		shamt = 5'b00100;
		imm = 21'b000000000000000000100;
		
		opcode = 3'b000;

		fcode = 4'b0000;
		
		#10;
		fcode = 4'b0001;
		
		#10;
		fcode = 4'b0010;
		
		#10;
		fcode = 4'b0011;
		
		#10;
		fcode = 4'b0100;
		
		#10;
		fcode = 4'b0101;
		
		#10;
		fcode = 4'b0110;
		
		#10;
		fcode = 4'b0111;
		
		#10;
		fcode = 4'b1000;
		
		#10;
		fcode = 4'b1001;
		
		#10;
		fcode = 4'b1010;
		
		#10;
		fcode = 4'b1011;
		
		#10;
		opcode = 3'b001;
		
		fcode = 4'b0000;
		
		#10;
		fcode = 4'b0001;
		
		#10;
		opcode = 3'b010;
		
		fcode = 4'b0000;
		
		#10;
		fcode = 4'b0001;
		
		#10;
		opcode = 3'b011;
		
		fcode = 4'b0000;
		
		#10;
		fcode = 4'b0001;
		
		#10;
		fcode = 4'b0010;
		
		#10;
		fcode = 4'b0011;
		
		#10;
		fcode = 4'b0100;
		
		#10;
		fcode = 4'b0101;
		
		#10;
		fcode = 4'b0110;
		
		#10;
		fcode = 4'b0111;
		
		#10;
		fcode = 4'b1000;
		
		#10;
		fcode = 4'b1001;
		
		#10;
		fcode = 4'b1010;
		
		#10;
		opcode = 3'b100;
		
		#100;

	end
      
endmodule

