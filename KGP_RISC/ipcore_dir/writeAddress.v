`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Name - Anshul Choudhary / Ayush Kumar
// Roll No. - 17CS10005 / 17CS10007
// Grp. No. - 47
//////////////////////////////////////////////////////////////////////////////////

module writeAddress(
        input [2:0] opcode,
        input [3:0] fcode,
        input [4:0] rsAddr,
        input [4:0] rtAddr,
        input [31:0] ALU_Out,
        input [31:0] ALU_ExtOut,
        input [31:0] ra,
        input [31:0] ROM_Out,
        output reg [4:0] wrAddr,
        output reg RegWrite,
        output reg [31:0] wrData,
        output reg [31:0] wrDataExt
    );
     
initial begin
    RegWrite = 0;
    wrAddr = 0;
    wrData = 0;
end

always @(*)
    begin
        if(opcode==3'd3)  
            begin
            if(fcode==4'd9)      
                begin
                    RegWrite<=1;
                    wrAddr<=5'b11111;
                    wrData<=ra;
                    wrDataExt<=ALU_ExtOut;
                end
            else
                begin           
                    RegWrite<=0;
                    wrAddr<=0;
                    wrData<=0;
                    wrDataExt<=ALU_ExtOut;
                end
            end
        else if(opcode==3'b000 | opcode==3'b001)   
            begin
                RegWrite<=1;
                if(fcode==4'b1010 | fcode==4'b1011)
                    wrAddr<=5'b10100;
                else
                    wrAddr<=rsAddr;
                wrData<=ALU_Out;   
                wrDataExt<=ALU_ExtOut;
            end
        else if(opcode==3'd2)
            begin
                if(fcode==4'd0)
                    begin
                    RegWrite<=1;
                    wrAddr<=rtAddr;
                    wrData<=ROM_Out;      
                    wrDataExt<=ALU_ExtOut;
                    end
                else 
                    begin
                        RegWrite<=0; 
                        wrAddr<=0;
                        wrData<=0;
                        wrDataExt<=ALU_ExtOut;
                    end
            end
        else 
        begin
            RegWrite<=0;     
            wrAddr<=0;
            wrData<=0;
            wrDataExt<=ALU_ExtOut;
        end
    end
endmodule
