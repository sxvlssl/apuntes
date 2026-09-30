# Practica 1 - Ejercicio 1
# Integrantes: Saúl Sierra Leal y Nombre Apellido Apellido
# ---  Apartado 1 ---
    .data
salto: .string "\n"

## E1 = 7 × 9 + 53 - 21
    .text
addi a1, zero, 7
addi a2, zero, 9
mul a3, a1, a2

addi a4, zero, 53
addi a5, zero, 21
sub a6, a4, a5

add a0, a3, a6
addi a7, zero, 1
ecall

# --- Apartado 2 ---
## 7 × 9 + 53 - 21
la a0, salto
li, a7, 4
ecall

mul a0, a1, a6
addi a7, zero, 1
ecall

# --- Apartado 3 ---
la a0, salto
li, a7, 4
ecall

addi a1, zero, 380
addi a2, zero, 17
div a0, a1, a2
addi a7, zero, 1
ecall

la a0, salto
li, a7, 4
ecall

rem a0, a1, a2
addi a7, zero, 1
ecall

la a0, salto
li, a7, 4
ecall

div a3, a1, a2 ## a3=380/17 Cociente
mul a4, a3, a2 ## a4=a3*17 Cociente*17
rem a5, a1, a2 ## a5=380%%17 Resto
add a0, a4, a5
addi a7, zero, 1
ecall

## Porque en números enteros, la suma del resto más el cociente multiplicado por el divisor siempre es igual al dividendo

# --- Apartado 4 ---
##0x2AF3C3A7 2A F3 C3 A7 // A7 C3 F3 2A
la a0, salto
li, a7, 4
ecall

lui t0, 0x2AF3C
addi a0, t0, 0x3A7
addi a7, zero, 1
ecall

la a0, salto
li, a7, 4
ecall

lui t0, 0x2AF3C
addi a0, t0, 0x3A7
addi a7, zero, 34
ecall

# --- Apartado 5 ---
la a0, salto
li, a7, 4
ecall

## 0xFFFFFF5D
li t0, -163
mv a0, t0
li a7, 34
ecall

la a0, salto
li, a7, 4
ecall

li t0, -163
mv a0, t0
li a7, 35
ecall

la a0, salto
li, a7, 4
ecall

li t0, -163
mv a0, t0
li a7, 1
ecall