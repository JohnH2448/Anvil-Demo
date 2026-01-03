module Dmem #(
    parameter int DEPTH_WORDS = 16384
) (
    input logic clock,
    input logic reset,
    input logic [31:0] address,
    input logic [31:0] storeData,
    input logic [3:0] byteEnable,
    input logic storeValid,
    output logic [31:0] loadData,
    output logic loadDataValid,
    output logic storeComplete
);

    localparam int ADDR_LSB = 2;
    localparam int ADDR_MSB = ADDR_LSB + $clog2(DEPTH_WORDS) - 1;

    logic [31:0] mem [0:DEPTH_WORDS-1];
    logic storeValid_q;

    initial begin
        integer i;
        for (i = 0; i < DEPTH_WORDS; i++)
            mem[i] = 32'h0;
    end

    always_comb begin
        if (reset) begin
            loadData = 32'h00000000;
            loadDataValid = 1'b0;
        end else begin
            loadData = mem[address[ADDR_MSB:ADDR_LSB]];
            loadDataValid = 1'b1;
        end
    end

    always_ff @(posedge clock) begin
        if (reset) begin
            storeValid_q <= 1'b0;
            storeComplete <= 1'b0;
        end else begin
            storeComplete <= 1'b0;
            if (storeValid && !storeValid_q) begin
                int idx;
                logic [31:0] word;
                idx = address[ADDR_MSB:ADDR_LSB];
                word = mem[idx];
                if (byteEnable[0]) word[7:0] = storeData[7:0];
                if (byteEnable[1]) word[15:8] = storeData[15:8];
                if (byteEnable[2]) word[23:16] = storeData[23:16];
                if (byteEnable[3]) word[31:24] = storeData[31:24];
                mem[idx] <= word;
                storeComplete <= 1'b1;
            end
            storeValid_q <= storeValid;
        end
    end

endmodule
