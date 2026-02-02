#! /usr/bin/env bash

export PATH=`pwd`/riscv/bin:$PATH
export PATH=`pwd`/sail-riscv-Linux-x86_64/bin:$PATH

# setup python environment
source .venv/bin/activate

riscof run --config=config-anvil_demo.ini --suite=riscv-arch-test-3.10.0/riscv-test-suite/ --env=riscv-arch-test-3.10.0/riscv-test-suite/env
