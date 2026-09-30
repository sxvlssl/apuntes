# Practica 1 - Ejercicio 1
# Integrantes: Nombre Apellido Apellido y Nombre Apellido Apellido

    .data
nombre: .string "ana"
notas: .word 7, 4, 9
salto: .string "\n"
msg_apro: .string "aprobado\n"
msg_susp: .string "suspenso\n"

    .text
# --- Apartado 1 ---
main:
    la t0, notas
    lw t1, 0(t0)
    lw t2, 4(t0)
    lw t3, 8(t0)
    
## Buscar el mayor
    mv t4, t1 # Suponemos que la primera (7) es la mayor. t4 de ahora en adelante es el número mayor
    
    blt t4, t2, mayor2 # 7<4?
    j comprobar3_max
mayor2:
    mv t4, t2 # la mayor ahora es t2 (4)

comprobar3_max: 
    blt t4, t3, mayor3 # t4<t3? La tercera es mayor, saltamos
    j fin_mayor

mayor3:
    mv t4, t3 # Si entramos aquí, la mayor es t3 (9)

fin_mayor:
    # aquí t4 vale 9
    mv t5, t1
    
    bgt t5, t2, menor2
    j comprobar3_min

menor2:
    mv t5, t2

comprobar3_min:
    bgt t5, t3, menor3
    j fin_menor

menor3:
    mv t5, t3

fin_menor:
   # aquí t5 vale 4 (la nota menor) 
   
   # imprimimos los resultados en consola
   mv a0, t4
   li a7, 1
   ecall
   
   la a0, salto 
   li a7, 4
   ecall
   
   mv a0, t5
   li a7, 1
   ecall
   
   la a0, salto
   li a7, 4
   ecall
   
# --- Apartado 2 ---
main_2:
    la t0, notas
    lw t1, 0(t0)
    lw t2, 4(t0)
    add t1, t1, t2
    
    lw t2, 8(t0)
    add t1, t1, t2

    li t3, 3
    div t1, t1, t3
    
    li t4, 5
    blt t1, t4, es_suspenso # ¿t1<t4?
    
es_aprobado:
    la a0, msg_apro
    li a7, 4
    ecall
    
es_suspenso:
    la a0, msg_susp
    li a7, 4
    ecall
    
# --- Apartado 3 ---    
la t0, nombre
lbu t1, 0(t0)

mv a0, t1
li a7, 1 ## ASCII 97
ecall

la a0, salto
li a7, 4
ecall

addi, t1, t1, -32
sb t1, 0(t0)

la a0, nombre
li a7, 4
ecall
li a7, 4
la a0, salto
ecall

li a7, 10
ecall
