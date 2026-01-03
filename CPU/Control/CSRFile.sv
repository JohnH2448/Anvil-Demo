// ====================== MINIMAL CSR + SYSTEM SUPPORT (RV32I bring-up) ======================
//
// CSR FILE (32-bit registers; unknown CSRs read as 0, writes ignored; do NOT trap):
//   mstatus  @ 12'h300   // can be mostly stubbed (read 0 ok early)
//   mtvec    @ 12'h305   // writable by software; hardware jumps here on trap
//   mepc     @ 12'h341   // written by hardware on trap; readable/writable
//   mcause   @ 12'h342   // written by hardware on trap; readable/writable
//   mtval    @ 12'h343   // written by hardware on trap; can be 0 but must exist
//   mhartid  @ 12'hF14   // read-only = 0 (single hart)
//
// SYSTEM INSTRUCTION CLASS (opcode 7'h73) you must support:
//   CSR access (funct3):
//     3'b001 CSRRW     rd <- oldCSR; CSR <- rs1
//     3'b010 CSRRS     rd <- oldCSR; CSR <- oldCSR | rs1
//     3'b011 CSRRC     rd <- oldCSR; CSR <- oldCSR & ~rs1
//     3'b101 CSRRWI    rd <- oldCSR; CSR <- zimm
//     3'b110 CSRRSI    rd <- oldCSR; CSR <- oldCSR | zimm
//     3'b111 CSRRCI    rd <- oldCSR; CSR <- oldCSR & ~zimm
//   Trap/return (exact encodings):
//     32'h00000073 ECALL    // causes trap
//     32'h30200073 MRET     // return from trap (PC <- mepc)
//
// HARDWARE ASSIGNMENTS OUTSIDE "normal CSR read/write" (single-cycle view):
//   Trap entry (on illegal instr OR ECALL OR optional misalign):
//     - suppress side effects of faulting instruction:
//         regWriteEn = 0
//         memWriteEn = 0
//     - commit trap bookkeeping CSRs:
//         mepc   <= faulting_pc
//         mcause <= cause_code   // minimum: 2=illegal, 11=ecall-from-M
//         mtval  <= extra_or_0   // optional (0 ok early)
//     - redirect control flow:
//         next_pc = mtvec        // direct mode only
//
//   Trap return (on MRET):
//     - redirect control flow:
//         next_pc = mepc
//     - (optional) mstatus bookkeeping can be stubbed if always M-mode
//
// ==========================================================================================
