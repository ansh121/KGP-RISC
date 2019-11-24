`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module InstrFetch(
	input clk,
	input rst,
	input PC_select,
	input [7:0] branch_PC,
	output [31:0] instr,
	output [7:0] next_PC
    );
	 
	reg [7:0] pc;
	wire [7:0] npc;
	reg flag;
	wire	branch_flag;
	wire [31:0] dout;
	
	assign instr = (flag) ? dout : 32'd0;
	assign branch_flag = (flag) ? PC_select : 1'd0;
	assign next_PC = pc;
	
	initial begin 
		pc = 8'd0;
		flag = 0;
	end
	
	blk_mem_gen_v7_3 blk_ram(.clka(clk),.wea(1'b0),.addra(pc),.dina(32'b0),.douta(dout));
	
	always @(posedge clk or negedge clk or posedge rst)
	begin
		if(rst)
			begin
				pc = 8'b0;		// reset condition
				flag = 0;
			end
		else if(clk==1)
			flag=1;
		else if(clk==0 && pc!=8'b11111111)
			begin
				pc = (branch_flag)? branch_PC: npc; 	// set next value of pc
			end
	end
	
	assign npc = pc + 8'd1; 								// calculate pc for non-branching instructions
endmodule
