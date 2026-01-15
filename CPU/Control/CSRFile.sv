module CSRFile (
    input logic clock,
    input logic reset,
    input logic interrupt,
    input destinationCSR_ destinationCSR,
    input destinationCSR_ readCSR,
    input logic [31:0] csrWriteData,
    output logic [31:0] csrReadData,
    input logic csrDestinationEnable
);
    logic [31:0] csrs [15:0];

    always_comb begin
        csrReadData = csrs[readCSR];
    end

    always_ff @(posedge clock) begin
        if (reset) begin
            csrs <= '0;
            csrs[4'b1000] <= 32'h40000100;
            csrs[4'b0000] <= 32'h00001800;
        end else if (csrDestinationEnable) begin
            csrs[destinationCSR] <= csrWriteData;
        end
    end
    
endmodule