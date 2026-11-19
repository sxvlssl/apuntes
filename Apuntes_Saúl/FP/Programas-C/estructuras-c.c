#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define PI 3.14159265

int cuadrado(int x);          /* prototipo */

int cuadrado(int x) { return x * x; }

void intercambiar(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

unsigned long long factorial(unsigned n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main(void) {
    printf("Hola, mundo\n");

    bool primo = true;

    int edad;
    double nota;
    printf("Edad y nota: ");
    scanf("%d, %lf", &edad, &nota);
    printf("Tienes %d años y sacaste %.2f\n", edad, nota);

    double cast = 9.99;
    int n = (int)cast;

    char nombre[20] = "Ana";        // Crea una variable (un arreglo de caracteres) tipo texto, para guardar hasta 20 letras
    char saludo[40];                // Otra variable de hasta 40 letras
    strcpy(saludo, "Hola ");     // strcpy = String Copy. Copia el texto "Hola " dentro de la variable saludo.
    strcat(saludo, nombre);         // strcat = String Concatenate. Añade el contenido de nombre al final de lo que añadimos en saludo.
    printf("%zu\n", strlen(saludo));

    /*
     *  strcpy(dest, src)       Copia la cadena src en dest.
     *  strncpy(dest, src, n)   Copia hasta n carácteres de src en dest. Si src es más corta, rellena con bytes nulos.
     *  strcat(dest, src)       Añade la cadena src al final de dest.
     *  strncat(dest, src, n)   Añade como máximo n caracteres de src al final de dest.
     *
     *  strcmp(s1, s2)          Compara s1 y s2 lexicográficamente. Devuelve 0 si son iguales, < 0 si s1 es menor, y > 0 si s1 es mayor.
     *  strncmp(s1, s2, n)      Compara como máximo los primeros n caracteres de s1 y s2.
     *  strcoll(s1, s2)         Compara dos cadenas utilizando la configuración regional activa (LC_COLLATE)
     *  strxfrm(dest, src, n)   Transforma la cadena src según la localización actual y guarda hasta n caracteres en dest.
     *
     *  strchr(str, c)          Busca la primer a ocurrencia del carácter c en str. Devuelve un puntero a esa posición o NULL.
     *  strrchr(str, c)         Busca la última ocurrencia del carácter c en str.
     *  strstr(haystack, needle) Busca la primera aparición de la subcadena needle dentro de haystack
     *
     *  strpbrk(s1, s2)         Busca el primer carácter de s1 que coincida con cualquiera de los caracteres de s2.
     *  strspn(s1, s2)          Devuelve la longitud del primer segmento de s1 que consiste únicamente en caracteres presentes en s2.
     *  strcspn(s1, s2)         Devuelve la longitud del primer segmento de s1 que no contiene ninguno de los caracteres de s2.
     *
     *  strtok(str, delim)      Divide la cadena str en una secuencia de tokens delimitados por los caracteres en delim. Modifica la cadena original y no es segura para hilos.
     *
     *  strlen(str)             Devuelve la longitud de la cadena (sin contar el carácter nulo de la terminación \0.
     *  strerror(errnum)        Devuelve un puntero a una cadena que describe el código de error errnum (usado habitualmente con errno).
     *
     *  strdup(s)               Reserva memoria dinámica (malloc) y duplica la cadena s.
     *  strndup(s, n)           Duplica como máximo n caracteres de la cadena s en memoria dinámica.
     *  strnlen(s, maxlen)      Calcula la longitud de s, pero sin leer más allá de maxlen bytes (evita desbordamientos si falta el \0)
     *
     *  strtok_r(str, delim, saveptr)   Versión segura y reentrante de strtok
     */

    /*
     *  En C el bucle for es exactamente igual que en C++
     */
    int suma = 0;
    for (int i = 1; i <= 100; ++i) {
        suma += i;
    }
    printf("%d\n", suma);

    /*
     *  La estructura del bucle, la semántica del break/continue y el cortocircuito de &&, || son los mismos.
     *  Sin embargo, existen diferencias. En C el tipo de condición es un int ya que el bool es un tipo que
     *  devuelve 0 = falso, distinto de 0 = verdadero. El resultado por ende también es un tipo nativo int.
     *  La variable en el bucle for se puede desde C99 o superior. No hay variable en el if/switch mientras
     *  que en C++ si se puede desde C++17. No existe el bucle por rango, por lo que siempre se recorre con
     *  índice y tamaño conocido.
     */

    int notas[5] = {7, 9, 5, 6, 10};
    for (int i = 0; i < 5; i++) suma += notas[i];

    char s[8] = "Hola";
    strcat(s, " mundo");     // ERROR: desborda el array (8 bytes < 11 necesarios)

    struct Alumno {
        char nombre[30];
        int edad;
        double nota;
    };

    struct Alumno a = {"Lucía, 19, 8.5"};   // Aquí la palabra clave struct es obligatoria

    typedef struct {
        char nombre[30];
        int edad;
    } Persona;

    Persona p = {"Ana", 20};    // Sin embargo, aquí el nombre del struct ya es un tipo gracias a typedef, por lo que no hace falta escribir struct

    /*
     *  En C++ un struct puede además tener funciones miembro, constructores y control de acceso. En C un struct solo contiene datos.
     */

    enum Día { Lunes, Martes, Miércoles };  // C: constantes enteras en el ámbito global
    enum Día hoy = Martes;
    int fecha = hoy + 100;                  // válido: un enum es un int disfrazado

    /*
     *  En C no existe un array que crezca; se implementa con malloc/realloc (más adelante se verá). C++ lo da hecho.
     *
     *  std::vector<int> v;
     *  v.push_back(10);
     *  v.push_back(20);
     *  for (int x : v) std::cout << x << ' ';
     *
     *  En C requiere llevar a mano el puntero, tamaño y capacidad:
     */

    typedef struct {
        int* datos;
        size_t tam;
        size_t cap;
    } VectorInt;

    printf("%d\n", cuadrado(7));

    int x = 3, y = 8;
    intercambiar(&x, &y);

    /*
     *  En C solo existe el paso por valor. Para modificar un argumento se pasa su dirección (un puntero) por valor.
     *  En C++ también es así. Para modificar el original se hace con un puntero T* o en C++ por referencia T& (o puntero).
     *  Leer un objeto grande lo hacemos con const T*. La llamada se hace con f(&x) mientras que en C++ puedes con f(x).
     *  Finalmente, el puntero sí puede ser nulo, mientras que en C++ no, la referencia siempre apunta a algo.
     *
     *  Los arrays decaen a puntero al pasarlos, en ambos lenguajes; en C++ std::vector y std::array evitan ese problema.
     */

    /*
     *  La estructura .h con guardas y .c/.cpp con la implementación es la misma. La interfaz va en un archivo de cabecera .h
     *  y la implementación en un .cpp
     */
    return 0;
}
