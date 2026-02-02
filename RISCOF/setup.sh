#! /usr/bin/env bash

curl -L -O https://github.com/riscv-collab/riscv-gnu-toolchain/releases/download/2025.01.20/riscv32-elf-ubuntu-24.04-gcc-nightly-2025.01.20-nightly.tar.xz
tar -xf riscv32-elf-ubuntu-24.04-gcc-nightly-2025.01.20-nightly.tar.xz

curl -L -O https://github.com/riscv/sail-riscv/releases/download/0.9/sail-riscv-Linux-x86_64.tar.gz
tar -xzf sail-riscv-Linux-x86_64.tar.gz

curl -L -J -O https://github.com/riscv-non-isa/riscv-arch-test/archive/refs/tags/3.10.0.tar.gz
tar -xzf riscv-arch-test-3.10.0.tar.gz

# setup python environment
python3 -m venv .venv
source .venv/bin/activate
pip3 install git+https://github.com/riscv/riscof.git@d38859f85fe407bcacddd2efcd355ada4683aee4
