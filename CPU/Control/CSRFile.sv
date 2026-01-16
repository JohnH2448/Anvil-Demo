import pack::*;

module CSRFile (
    input logic clock,
    input logic reset,
    input logic interrupt,
    input destinationCSR_ destinationCSR,
    input destinationCSR_ readCSR,
    input logic [31:0] csrWriteData,
    output logic [31:0] csrReadData,
    input logic csrDestinationEnable,
    input logic dualValid
);
    logic [31:0] csrs [0:15];

    always_comb begin
        csrReadData = csrs[readCSR];
    end

    integer i;
    always_ff @(posedge clock) begin
        if (reset) begin
            for (i = 0; i < 16; i++) begin
                csrs[i] <= 32'b0;
            end
            csrs[MISA] <= 32'h40000100;
            csrs[MSTATUS] <= 32'h00001800;
        end else begin
            if (csrDestinationEnable) begin
                csrs[destinationCSR] <= csrWriteData;
            end
            csrs[MCYCLE] <= csrs[MCYCLE] + 32'b1;
            if (dualValid) begin
                csrs[MINSTRET] <= csrs[MINSTRET] + 32'b1;
            end
            if (!(csrDestinationEnable && (destinationCSR == MCYCLE))) begin
                csrs[MCYCLE] <= csrs[MCYCLE] + 32'd1;
            end
            if (dualValid && !(csrDestinationEnable && (destinationCSR == MINSTRET))) begin
                csrs[MINSTRET] <= csrs[MINSTRET] + 32'd1;
            end
        end
    end
endmodule
