# Practica 1 - Ejercicio 2
# Integrantes: Saúl Sierra Leal y Nombre Apellido Apellido

    .data
vec: .word 12, 7, 33, 25, 8
x: .word 87
y: .word 34
val: .word 0x1FAE8A2A
salto:  .string "\n"

    .bss
res: .word 0, 0
z: .word 0

# --- Apartado 1 ---
    .text
la t0, vec # Cargar el vector en t0

lw t1, 0(t0) # Cargar el valor de vec en su posición cero en t1 (12)
lw t2, 4(t0) # Lee vec[1] (7) usando t2 temporalmente para el dato
add t1, t1, t2 # t1 = 12 + 7 = 19

lw t2, 8(t0)
add t1, t1, t2

lw t2, 12(t0)
add t1, t1, t2

lw t2, 16(t0)
add t1, t1, t2

li t2, 5 # Cargas el número 5 en la variable t2
div t3, t1, t2

la t0, res # Puntero al inicio de .bss
sw t1, 0(t0) # Guarda la suma en res[0]
sw t2, 4(t0) # Guarda la media en res[1]

mv a0, t1
li a7, 1
ecall

la a0, salto
li a7, 4
ecall

mv a0, t3
li a7, 1
ecall

la a0, salto
li a7, 4
ecall

# --- Apartado 2 ---
la t0, x        # t0 = dirección de x
lw t1, 0(t0)    # t1 = 87 (Primera posición de x)

la t2, y        # t2 = dirección de y
lw t3, 0(t2)    # t3 = 34

sw t3, 0(t0)    # Guarda en 0(t0) (es decir, en la dirección de x) el valor de y
sw t1, 0(t1)    # Aquí hace lo contrario

sub t4, t3, t1  # Ahora x=34 e y=87 por lo que la diferencia es -53

la t0, z # t0 = dirección de z
sw t4, 0(t0) # Guardamos el resultado (-53) en la memoria de z

# --- Apartado 3 ---
la t0, val

lbu t1, 0(t0) # Byte 0 (8 bits) de val (32 bits): 2A
mv a0, t1
li a7, 34
ecall
la a0, salto
li a7, 4
ecall

lbu t2, 1(t0) # Byte 1: 8A
mv a0, t2
li a7, 34
ecall
la a0, salto
li a7, 4
ecall

lbu t3, 2(t0) # Byte 2: AE
mv a0, t3
li a7, 34
ecall
la a0, salto
li a7, 4
ecall

lbu t4, 3(t0) # Byte 3: 1F
mv a0, t4
li a7, 34
ecall
la a0, salto
li a7, 4
ecall

# Tenemos que reconstruir el byte a la inversa puesto que RISC-V
# guarda los bytes en orden little-endian: el byte de menor peso
# ocupa la dirección más baja.

# Para reconstruir la palabra original a parrtir de los 4 bytes,
# desplazamos los bytes hacia su posición

slli t4, t4, 24 # 1F se va 24 bits a la izquierda
slli t3, t3, 16 # AE se va 16 bits a la izquierda
slli t2, t2, 8 # 8A se va 8 bits a la izquierda
# no hace falta mover t1 porque ya es 0x0000002A

or t0, t3, t3 # la operación OR funciona mezclando bits
or t0, t0, t2
or t0, t0, t1

mv a0, t0
li a7, 34
ecall
la a0, salto
li a7, 34
ecall

# --- Apartado 4 ---
li a7, 10
ecall