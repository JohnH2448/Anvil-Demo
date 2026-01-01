import pack::*;

module Imem #(
    parameter int DEPTH_WORDS = 1024
) (
    input logic clock,
    input logic reset,
    input logic [31:0] address,
    output logic [31:0] data,
    output logic valid
);
    localparam int ADDR_LSB = 2;
    localparam int ADDR_MSB = ADDR_LSB + $clog2(DEPTH_WORDS) - 1;

    logic [31:0] mem [0:DEPTH_WORDS-1];

    // For SIM ONLY
    initial begin
        $display("IMEM: loading imem.hex");
        $readmemh("imem.hex", mem);
    end

    always_comb begin
        if (reset) begin
            data  = 32'h00000013;
            valid = 1'b0;
        end else begin
            data  = mem[address[ADDR_MSB:ADDR_LSB]];
            valid = 1'b1;
        end
    end

endmodule
