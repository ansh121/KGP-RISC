`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module assignInputs(
        input [31:0] rsData,
        input [31:0] rtData,
        input [4:0] shamt,
        input [21:0] imm,
        input [2:0] opcode,
        input [3:0] fcode,
        output reg [31:0] ALU_inp1,
        output reg [31:0] ALU_inp2
    );

	always @(*) begin
        if(opcode==3'b0)
            begin 
                ALU_inp1<=rsData;
                if(fcode==4'd4 | fcode==4'd5 | fcode==4'd8)
                    ALU_inp2<={27'b0,shamt};
                else
                    ALU_inp2<=rtData;
            end
        else if(opcode==3'd1)
            begin
                ALU_inp1<=rsData;
                if(imm[21]==1'b1)
                    ALU_inp2<={10'b1111111111,imm};
                else ALU_inp2<={10'b0,imm};
            end
        else
            begin
                ALU_inp1<=0;
                ALU_inp2<=0;
            end
    end

endmodule
