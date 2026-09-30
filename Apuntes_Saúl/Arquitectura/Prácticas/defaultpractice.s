    .data
n1: .word 7
n2: .word 3

    .bss
res: .word 0

    .text
    lw a1, n1
    lw a2, n2
    add a0, a1, a2
    la t0, res
    sw a0, 0, t0
    addi a7, zero, 10
    ecall