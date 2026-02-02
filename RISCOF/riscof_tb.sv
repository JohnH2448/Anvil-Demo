module riscof_tb ();

    // runtime arguments
    string       test_dir;
    int unsigned tohost;
    int unsigned fromhost;
    int unsigned begin_signature;
    int unsigned end_signature;

    // system signals
    logic clk = 1'b1;  // clock
    logic rst = 1'b1;  // reset

    // interrupt request
    logic irq = 1'b0;

    ////////////////////////////////////////////////////////////////////////////////
    // RTL DUT instance
    ////////////////////////////////////////////////////////////////////////////////

    Top DUT (
        .clock      (clk),
        .reset      (rst),
        .interrupt  (irq),
        // debug outputs
        .dbg_registers (),
        .dbg_IF_ID_Valid (),
        .dbg_ID_EX_Valid (),
        .dbg_EX_MEM_Valid (),
        .dbg_MEM_WB_Valid (),
        .dbg_IF_ID_programCounter (),
        .dbg_IF_ID_instruction (),
        .dbg_ID_EX_programCounter (),
        .dbg_EX_MEM_programCounter (),
        .dbg_MEM_WB_programCounter (),
        .dbg_trap (),
        .dbg_IMEM_data (),
        .dbg_IMEM_valid (),
        .dbg_pc (),
        .dbg_wb_value (),
        // declare under forwarding unit if you delete these
        .forwardEnable1 (),
        .forwardEnable2 (),
        .forwardData1 (),
        .forwardData2 ()
    );

    // memory initialization
    function memory_init_bin (
        string filename,
        int unsigned mem_begin = 0
    );
    endfunction: memory_init_bin

    // memory initialization
    function int unsigned memory_dump_hex (
        string filename,
        int unsigned mem_begin = 0,
        int unsigned mem_end = 0
    );
        
    endfunction: memory_dump_hex

    ////////////////////////////////////////////////////////////////////////////////
    // controller
    ////////////////////////////////////////////////////////////////////////////////

    // clock
    always #(20ns/2) clk = ~clk;

    /* verilator lint_off INITIALDLY */
    initial
    begin: main
        string firmware, signature;
        logic htif_halt = 1'b0;
        bit timeout = 1'b0;
        int unsigned cnt = 0;

        // get/display test directory from plusargs
        assert ($value$plusargs("TEST_DIR=%s"       , test_dir       ))  $display("RISCOF: test_dir = \'%s\'", test_dir);  else  $fatal(0, "RISCOF: test_dir $plusarg not found!");
        // get/display ELF symbols from plusargs
        assert ($value$plusargs("begin_signature=%h", begin_signature))  $display("HTIF: begin_signature = 0x%08h", begin_signature);  else  $fatal(0, "HTIF: begin_signature $plusarg not found!");
        assert ($value$plusargs("end_signature=%h"  , end_signature  ))  $display("HTIF: end_signature   = 0x%08h", end_signature  );  else  $fatal(0, "HTIF: end_signature   $plusarg not found!");
        assert ($value$plusargs("tohost=%h"         , tohost         ))  $display("HTIF: tohost          = 0x%08h", tohost         );  else  $fatal(0, "HTIF: tohost          $plusarg not found!");
        assert ($value$plusargs("fromhost=%h"       , fromhost       ))  $display("HTIF: fromhost        = 0x%08h", fromhost       );  else  $fatal(0, "HTIF: fromhost        $plusarg not found!");

        // waveforms
        // TODO
        $dumpfile({test_dir, "dut.fst"});
        $dumpvars(0);

        // load binary file into memory
        firmware = {test_dir, "dut.hex"};
        $display("Loading file into memory: %s", firmware);
        #2; // delay to skip part $readmemh within RTL
        $readmemh(firmware, DUT.mem_inst.mem);

        // RESET sequence
        repeat (4) @(posedge clk);
        rst <= 1'b0;

        // wait for HTIF halt request
        signature = {test_dir, "DUT-anvil_demo.signature"};
        do begin
            @(posedge clk);
            // increment counter and check for timeout
            cnt <= cnt+1;
            if (cnt > 200_000) begin
                htif_halt <= 1'b1;
            end
            // check write into HTIF tohost
            //if (DUT.mem_inst.storeValid && &DUT.mem_inst.byteEnable && (DUT.mem_inst.d_address == tohost)) begin
            if (DUT.mem_inst.storeValid && (DUT.mem_inst.d_address == tohost)) begin
                htif_halt <= DUT.mem_inst.storeData[0];
            end
            if (htif_halt || timeout) begin
                $writememh(signature, DUT.mem_inst.mem, begin_signature/4, end_signature/4-1);
                $display("RISCOF: saved signature from 0x%8h to 0x%8h into file \'%s\'", begin_signature, end_signature, signature);
            end
            if (timeout) $error("reached timeout");
        end while (!htif_halt);
        // wait a few clock cycles before finishing simulation
        repeat(4) @(posedge clk);
        $finish;
    end: main
    /* verilator lint_on INITIALDLY */

endmodule: riscof_tb
