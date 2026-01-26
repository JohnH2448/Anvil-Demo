import StaticPack::*;
import ConfigPack::*;

module CSRFile (
    input logic clock,
    input logic reset,
    input logic interrupt,
    input destinationCSR_ destinationCSR,
    input destinationCSR_ readCSR,
    input logic [31:0] csrWriteData,
    output logic [31:0] csrReadData,
    input logic csrDestinationEnable,
    input logic dualValid,
    output logic [31:0] trapVector,
    input logic controlReset,
    input logic [3:0] mcause,
    input logic [31:0] decodeExecutePC,
    input logic [31:0] executeMemoryPC,
    input logic [31:0] memoryWritebackPC,
    input logic [31:0] mtval,
    input logic mretSignal
);
    logic [31:0] csrs [0:15];

    always_comb begin
        csrReadData = csrs[readCSR];
        trapVector = csrs[MTVEC];
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
            if (controlReset) begin
                csrs[MTVAL] <= mtval;
                csrs[MCAUSE] <= {28'd0, mcause};
                csrs[MEPC] <= memoryWritebackPC;
                csrs[MSTATUS][7] <= csrs[MSTATUS][3]; // MPIE <= MIE
                csrs[MSTATUS][3] <= 1'b0; // MIE <= 0
                $strobe("Exception Detected");
            end else if (mretSignal) begin
                csrs[MSTATUS][3] <= csrs[MSTATUS][7]; // MIE <= MPIE
                csrs[MSTATUS][7] <= 1'b1; // MPIE <= 1
            end else begin
                if (csrDestinationEnable) begin
                    logic [31:0] old;
                    old = csrs[destinationCSR];
                    csrs[destinationCSR] <= csrWriteData;
                    $display("CSR Write: CSR[%s] <= %08h (old was %08h)", destinationCSR.name(), csrWriteData, old);
                end
                if (!(csrDestinationEnable && (destinationCSR == MCYCLE))) begin
                    csrs[MCYCLE] <= csrs[MCYCLE] + 32'd1;
                end
                if (dualValid && !(csrDestinationEnable && (destinationCSR == MINSTRET))) begin
                    csrs[MINSTRET] <= csrs[MINSTRET] + 32'd1;
                end
            end
            csrs[MSTATUS][12:11] <= 2'b11;
            csrs[MIP] <= 32'b0;
            csrs[MIP][7] <= 1'b1;
            $display("MEPC=%08h MCAUSE=%08h MTVAL=%08h MSTATUS=%08h MTVEC=%08h",
                    csrs[MEPC],
                    csrs[MCAUSE],
                    csrs[MTVAL],
                    csrs[MSTATUS],
                    csrs[MTVEC]);
        end
    end
endmodule

// gonna have to redo the whole illegal system. pass a pending bit and effectuate
// during wb.
