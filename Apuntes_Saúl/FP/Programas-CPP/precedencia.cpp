#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

bool sonIguales(double a, double b) {
    double epsilon = std::numeric_limits<double>::epsilon();
    return std::abs(a-b) < epsilon;
}

int main() {
    bool a = false; // 1 byte
    char c = 'A';   // 1 byte
    int i = -42;    // 4 bytes
    long long ll = 9000000000LL;    // 8 bytes
    float pi = 3.14f;  // 4 bytes
    double twopi = 3.14159265358979323846; // 8 bytes

    /*
     *  unsigned - sin signo (números naturales)
     *  sizeof(tipo) - consulta el tamaño (depende de la arquitectura)
     *  cstdint - librería con tamaños exactos (int32_t, uint64_t)
     *
     *  Los reales son aproximados: 0.1 + 0.2 no es exactamente 0.3. Nunca compares
     *  reales con ==; compara la diferencia con una tolerancia
     *
     *  Por ejemplo, comprobar que la diferencia en valor absoluto es menor que la tolerancia,
     *  si es menor, son iguales, si es mayor, son diferentes. Abajo hay un ejemplo
     */

    double ad = 0.1 + 0.2;
    double bd = 0.3;

    double epsilon = 1e-9;

    if (std::abs(ad-bd) < epsilon) {
        std::cout << "Son iguales dentro de la tolerancia.\n";
    } else {
        std::cout << "Son diferentes.\n";
    }

    /*
     *  También hay otra forma con una librería cd C++ estándar llamada std::numeric_limits
     *  que representa la difrerencia mínima ejecutable entre 1.0 y el siguiente valor
     *  representable. Lo que hace es que provee el épsilon de la máquina std::numeric_limits<double>::epsilon()
     */

    std::cout << "¿Son iguales con == ? " << (ad == bd ? "Sí" : "No") << "\n";

    std::cout << "¿Son iguales con numeric_limits? " << (sonIguales(ad, bd) ? "Sí" : "No") << "\n";

    // Épsilon para float vs double
    std::cout << "Epsilon float: " << std::numeric_limits<float>::epsilon() << "\n";
    std::cout << "Epsilon double: " << std::numeric_limits<double>::epsilon() << "\n\n";

    // Valores máximo y mínimo representables
    std::cout << "Max int: " << std::numeric_limits<int>::max() << "\n";
    std::cout << "Min double: " << std::numeric_limits<double>::min() << "\n";

    /*
     *  const es una palabra en clave que hace que la variable no pueda modificarse.
     *  Los identificadores empiezan por letra, por _, contienen letras, dígitos y _,
     *  distinguen mayúsculas de min;usculas y no pueden ser palabras reservadas como
     *  int, class, return, double, etc.
     */

    const double PI = 3.14159265;

    /*
     *  Hay distintos operadores:
     *
     *  - Aritméticos: + - * / %            Devuelven números
     *  - Relacionales: == != < > <= >=     Devuelven bool
     *  - Lógicos: && || !                  Evaluan circuitos
     *  - Asignación: = += -= *= /= %=      Asignan variables
     *  - Incremento/Decremento: ++ --      Añaden a una variable un +-1
     */

    int a2 = 7;
    int b2 = 2;
    double c2 = a2 / b2;            // c2 = 3 porque es una división entera
    double d = (double)a2 / b2;     // d = 3.5 porque se asigna como flotante de doble precisión
    int e = a2++;                   // e = 7, a2 = 8. Aquí primero e se asigna a a2 (que en ese momento es igual a 7) y luego se le suma 1
    int f = ++a2;                   // a2 = 9, f = 9. En este otro caso, f se asigna a a2 tras que a2 sea incrementado, por ende tanto f como a2 son igual a 9.

    /*
     *  La precedencia va así (de mayor a menor): (), ! ++ --, * / %, + -, relacionales, &&, ||, asignación. Ante la duda, usa paréntesis.
     */

    /*
     *  Entre ellos los tipos se pueden convertir. C++ implícitamente promociona al tipo mayor (int + double da double).
     *  Asignar un double a un int, trunca la parte decimal.
     *
     *  Sin embargo, se puede hacer una conversión explícita de dos formas:
     *  - El cast estilo C (no recomendado en C++): Es un operador a ciegas, fuerza la conversión sin importar si es peligrosa,
     *      lo que puede provocar errores de memoria o comportamientos inesperados si te equivocas.
     *
     *  - static_cast<tipo>(variable): Es la forma moderna y recomendada en C++. Hace exactamente lo mismo, pero el compilador
     *      comprueba en tiempo de compilación si la conversión tiene sentido lógico y es segura. Si intentas convertir algo
     *      incompatible, por ejemplo, un texto a un número de forma directa, el compilador te dará un error claro antes de ejecutar
     *      el programa
     */

    double x = 9.99;
    int n = static_cast<int>(x);

    /*
     *  Entrada y salida estándar
     *
     *  cout << ..., escribe
     *  cin >> ..., lee separando por espacios
     *  endl añade salto de línea y vacía el buffer; '\n' solo salta de línea.
     */

    /*
     *  std::fixed fuerza a std::cout a mostrar los números en formato de punto fijo, es decir, sin notación científica.
     *  std::setprecision(n) establece que se muestren exactamente n dígitos decimales redondeando si es necesario.
     */

    int edad;
    double nota;
    std::cout << "Edad y nota: ";
    std::cin >> edad >> nota;
    std::cout << std::fixed << std::setprecision(2);    // Configura el formato de impresión de números decimales en la consola
    std::cout << "Tienes " << edad << " años y sacaste " << nota << std::endl;

    string nombre = "Ana";
    string saludo = "Hola, " + nombre;
    cout << saludo.size();

    return 0;
}

