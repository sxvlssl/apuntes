#include <stdio.h>
#include <string.h>

// Define una función que recibe un num, la base de destino y un puntero out donde escribirá el texto resultante
// Esto convierte un número entero positivo de una base decimal a cualquier otra base numérica entre 2 y 16 y
// guarda el resultado como texto en la variable out.
void decimal_to_base(unsigned int num, int base, char *out) {
    const char *digits = "0123456789ABCDEF"; // Un mapa de caracteres.
    char temp[65]; // Esto es un buffer temporal para guardar datos de forma provisoria mientras realiza un proceso
    int pos = 0; // Posición

    // Caso especial, si el número a convertir es 0, directamente copia "0" a la salida y termina la función
    if (num == 0) {
        strcpy(out, "0");
        return;
    }

    // Este es el algoritmo de conversión
    while (num > 0) {
        temp[pos++] = digits[num % base]; // num % base obtiene el residuo de dividir el número entre la base. Es como hacer num-base * (num/base). Convierte ese residuo en su caracter correspondiente.
        // Guarda el caracter en temp e incrementa el pos
        num /= base; // Divide el número entre la base para procesar el siguiente digito en la próxima iteración
    }

    for (int i = 0; i < pos; i++) { // Como los digitos se guardaron al revés este bucle invierte el orden y los copia en la cadena final out.
        out[i] = temp[pos - 1 - i];
    }
    out[pos] = '\0'; // Añade \0 al final de out para indicar que la cadena de texto ha terminado correctamente.
}

int main(void) {
    unsigned int val = 255;
    char res[65];

    decimal_to_base(val, 2, res);
    printf("Dec %u -> Bin: %s\n", val, res);

    decimal_to_base(val, 8, res);
    printf("Dec %u -> Oct: %s\n", val, res);

    decimal_to_base(val, 16, res);
    printf("Dec %u -> Hex: %s\n", val, res);

    return 0;
}
