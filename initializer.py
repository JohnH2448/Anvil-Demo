from elftools.elf.elffile import ELFFile

IMEM_BASE = 0x00000000
DMEM_BASE = 0x80000000

elf_name = input("ELF file: ").strip()

imem = {}
dmem = {}

def write_words(mem, base, addr, data):
    if (addr - base) % 4 != 0:
        raise Exception("Unaligned address")

    # pad to whole words
    if len(data) % 4:
        data += b'\x00' * (4 - (len(data) % 4))

    idx = (addr - base) // 4

    for i in range(0, len(data), 4):
        w = data[i] | (data[i+1] << 8) | (data[i+2] << 16) | (data[i+3] << 24)
        mem[idx] = w
        idx += 1


with open(elf_name, "rb") as f:
    elf = ELFFile(f)

    for seg in elf.iter_segments():
        if seg.header.p_type != "PT_LOAD":
            continue

        addr   = seg.header.p_vaddr
        data   = seg.data()
        memsz  = seg.header.p_memsz

        # handle BSS zero fill
        if memsz > len(data):
            data += b'\x00' * (memsz - len(data))

        if addr < DMEM_BASE:
            write_words(imem, IMEM_BASE, addr, data)
        else:
            write_words(dmem, DMEM_BASE, addr, data)


def dump_hex(name, mem):
    if not mem:
        open(name, "w").close()
        return

    max_i = max(mem.keys())

    with open(name, "w") as f:
        for i in range(max_i + 1):
            f.write(f"{mem.get(i,0):08X}\n")


dump_hex("imem.hex", imem)
dump_hex("dmem.hex", dmem)

print("Done -> imem.hex  dmem.hex")
