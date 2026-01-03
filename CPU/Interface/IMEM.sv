import pack::*;

module Imem #(
    parameter int  DEPTH_WORDS = 16384,
    parameter logic [31:0] BASE_ADDR = 32'h8000_0000
) (
    input  logic        clock,
    input  logic        reset,
    input  logic [31:0] address,
    output logic [31:0] data,
    output logic        valid
);
    localparam int ADDR_LSB = 2;

    logic [31:0] mem [0:DEPTH_WORDS-1];

    // For SIM ONLY
    initial begin
        $display("IMEM: loading imem.hex");
        $readmemh("imem.hex", mem);
    end

    always_comb begin
        // default: NOP + invalid
        data  = 32'h00000013; // addi x0,x0,0
        valid = 1'b0;

        if (!reset) begin
            logic [31:0] off_bytes;

            off_bytes = address - BASE_ADDR;

            // require word-aligned and in-range
            if ((address[1:0] == 2'b00) && (off_bytes < (DEPTH_WORDS * 4))) begin
                data  = mem[ off_bytes[ADDR_LSB +: $clog2(DEPTH_WORDS)] ];
                valid = 1'b1;
            end
        end
    end

endmodule