# VenomCPU
## RISC-V RV32I Pipelined CPU Core in SystemVerilog
### Features:
- In Order 5 Stage Pipeline
- Variable Latency MEM Interface
- Forwarding + WB->ID Data Pass
- Comprehensive Base RV32I Execution

module Dmem #(
    parameter int  DEPTH_WORDS = 1024,
    parameter logic [31:0] BASE_ADDR = 32'h8000_0000
) (
    input  logic        clock,
    input  logic        reset,

    input  logic [31:0] address,
    input  logic [31:0] storeData,
    input  logic [3:0]  byteEnable,
    input  logic        storeValid,

    output logic [31:0] loadData,
    output logic        loadDataValid,
    output logic        storeComplete
);

    localparam int ADDR_LSB = 2;

    logic [31:0] mem [0:DEPTH_WORDS-1];
    logic        storeValid_q;

    initial begin
        integer i;
        for (i = 0; i < DEPTH_WORDS; i++)
            mem[i] = 32'h0;
    end

    // Combinational read with base/range checking
    always_comb begin
        loadData      = 32'h0000_0000;
        loadDataValid = 1'b0;

        if (!reset) begin
            logic [31:0] off_bytes;
            off_bytes = address - BASE_ADDR;

            if ((off_bytes < (DEPTH_WORDS * 4)) && (address[1:0] == 2'b00)) begin
                loadData      = mem[ off_bytes[ADDR_LSB +: $clog2(DEPTH_WORDS)] ];
                loadDataValid = 1'b1;
            end
        end
    end

    // Writes with base/range checking, byte enables
    always_ff @(posedge clock) begin
        if (reset) begin
            storeValid_q   <= 1'b0;
            storeComplete  <= 1'b0;
        end else begin
            storeComplete <= 1'b0;

            // Rising-edge "accept" (your existing scheme)
            if (storeValid && !storeValid_q) begin
                logic [31:0] off_bytes;
                off_bytes = address - BASE_ADDR;

                if ((off_bytes < (DEPTH_WORDS * 4)) && (address[1:0] == 2'b00)) begin
                    int idx;
                    logic [31:0] word;

                    idx  = off_bytes[ADDR_LSB +: $clog2(DEPTH_WORDS)];
                    word = mem[idx];

                    if (byteEnable[0]) word[7:0]   = storeData[7:0];
                    if (byteEnable[1]) word[15:8]  = storeData[15:8];
                    if (byteEnable[2]) word[23:16] = storeData[23:16];
                    if (byteEnable[3]) word[31:24] = storeData[31:24];

                    mem[idx] <= word;
                    storeComplete <= 1'b1;
                end
                // else: out-of-range or misaligned -> ignore (or you could flag)
            end

            storeValid_q <= storeValid;
        end
    end

endmodule
