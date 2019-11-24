`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module InstDecode( 
    input [31:0] inst,
    output reg [2:0] opcode,
    output reg [4:0] rsAddr,
    output reg [4:0] rtAddr,
    output reg [4:0] shamt,
    output reg [3:0] fcode,
    output reg [21:0] imm,
    output reg [24:0] label,
    output reg ROM_write
    );
	 
always @(*)            
    begin
        if(fcode==4'd1 & opcode==3'd2)
            ROM_write=1;
        else
            ROM_write=0;
    end
	 
always @(inst)
    begin
        opcode=inst[31:29];     
        case(opcode)
            3'b000:      
                begin
                rsAddr=inst[28:24];
                rtAddr=inst[23:19];
                shamt=inst[18:14];
                fcode=inst[13:10];
                imm=22'b0;
                label=25'b0;
                end
            3'b001:  
                begin
                rsAddr=inst[28:24];
                rtAddr=5'b0;
                shamt=5'b0;
                fcode={2'b0,inst[1:0]};
                imm=inst[23:2];
                label=25'b0;
                end
            3'b010:
                begin
                rsAddr=inst[28:24];
                rtAddr=inst[23:19];
                shamt=5'b0;
                fcode={3'b0,inst[0]};
                imm={5'b0,inst[18:1]};
                label=25'b0;
                end
            3'b011:   
                begin
                rsAddr=5'b0;
                rtAddr=5'b0;
                shamt=5'b0;
                fcode=inst[3:0];
                imm=22'b0;
                label=inst[28:4];
                end
            3'b100: 
                begin
                rsAddr=inst[28:24];
                rtAddr=5'b0;
                shamt=5'b0;
                fcode=4'b0;
                imm=22'b0;
                label=25'b0;
                end
            default:             
                begin
                rsAddr=5'b0;
                rtAddr=5'b0;
                shamt=5'b0;
                fcode=4'b0;
                imm=22'b0;
                label=25'b0;
                end
            endcase
    end

	 
endmodule
