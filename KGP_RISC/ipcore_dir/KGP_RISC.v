`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module KGP_RISC(
        input clk,
        input reset,
        //output [31:0] routa,
        //output [31:0] instruction
        output [15:0] routa//,
        //output [31:0] hi,
        //output [31:0] lo
    );

wire [31:0] reg_out;
wire [31:0] instr;	// current instruction
assign routa = reg_out[15:0];
//assign routa = reg_out;
//assign instruction = instr;

wire PC_select;	// select line for mux to decide next instr or branch
wire [7:0] branch_PC;  //branch PC

//Various Parameters of the instruction decoder
wire [2:0] opcode;
wire [4:0] rsAddr,rtAddr,shamt,wrAddr;
wire [7:0] next_PC;
wire [31:0] next_instruction; 
wire [3:0] fcode;
wire [21:0] imm;
wire [24:0] label;

// control Flags
wire RegWrite;
wire ROMWrite;
wire carryFlag,overflowFlag,zeroFlag,signFlag;

// register read/write data 
wire [31:0] rsData,rtData,wrData,wrDataExt;
wire [31:0] ra;

// register bank output (rout2 = $t0)
wire [31:0] rout2;

//ALU parameters
wire [31:0] ALU_Out,ALU_ExtOut,ALU_inp1,ALU_inp2;

//ROM_Out: Data loaded, ROMAddr: Address in Memory
wire [31:0] ROM_Out;
wire [31:0] ROMAddr_Extended;
wire [7:0] ROMAddr;

//assign reg_out = next_instruction;
assign instr = next_instruction;
InstrFetch IF(clk,reset,PC_select,branch_PC,next_instruction,next_PC);

//Instruction Decoder, input as instruction, output as various parameters of instruction
//assign reg_out = {opcode[2:0] ,rsAddr[4:0] ,rtAddr[4:0],shamt[4:0],fcode[3:0],imm[8:0],ROMWrite};
InstDecode ID(next_instruction, opcode, rsAddr, rtAddr, shamt, fcode, imm, label, ROMWrite );

// decide whether to read/write in register bank and provide necessary addresses and data to wires 
writeAddress WA(opcode, fcode, rsAddr, rtAddr, ALU_Out, ALU_ExtOut, ra, ROM_Out, wrAddr, RegWrite, wrData, wrDataExt);

//Register Bank, can read and write from/into two registers at a time
assign reg_out = rout2;
regBank RB(reset, clk, RegWrite, wrAddr, wrData, wrDataExt, rsAddr, rsData, rtAddr, rtData, rout2);

//Assign inputs assigns values to the two inputs of the ALU based on the opcode and fcode
//assign reg_out = {ALU_inp1[10:0],ALU_inp2[10:0],imm[9:0]};
assignInputs AI(rsData, rtData, shamt, imm, opcode, fcode, ALU_inp1, ALU_inp2 ); 

//given two inputs, opcode and fcode, ALU gives the output and updates flags     
//assign reg_out = {ALU_inp1[4:0],ALU_inp2[4:0],ALU_Out[21:0]};
ALU alu(clk, ALU_inp1, ALU_inp2, opcode, fcode, ALU_Out, ALU_ExtOut, carryFlag, zeroFlag, signFlag, overflowFlag);

//given the opcode, fcode, labels and flags, branch gives the new branch_PC where we need to jump and updates PCSrc
//assign reg_out = {opcode[4:0],fcode[4:0],label[7:0],next_PC[7:0],branch_PC[4:0],PCSrc};
branch B(opcode, fcode, label[7:0], carryFlag, zeroFlag, overflowFlag, signFlag, next_PC, branch_PC, PC_select, ra);

//Get the Address from Memory where we need to load/store
//assign reg_out = ROMAddr;
assign ROMAddr_Extended=rsData+imm;   
assign ROMAddr=ROMAddr_Extended[7:0];

//Data Block RAM 
blk_mem_gen_v7_3b ROM(.clka(~clk), .wea(ROMWrite), .addra(ROMAddr), .dina(rtData), .douta(ROM_Out));

endmodule
