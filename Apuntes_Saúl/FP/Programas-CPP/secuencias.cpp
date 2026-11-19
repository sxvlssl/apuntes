#include <iostream>

using namespace std;

int main() {
    /*
     *  Los programas ejecutan sus sentencias en orden. Las estructuras de control permiten decidir
     *  qué se ejecuta (selección) y repetir bloques (iteración). Con secuencia, selección e iteración
     *  se puede expresar cualquier algoritmo.
     */
    int nota;
    cin >> nota;
    if (nota >= 5) {
        cout << "Aprobado" << endl;
    } else {
        cout << "Suspenso" << endl;
    }

    if (nota >= 9) cout << "Sobresaliente";
    else if (nota >= 7) cout << "Notable";
    else if (nota >= 5) cout << "Aprobado";
    else cout << "Suspenso";

    // Sirve para comparar una expresión entera o de tipo char/enum con valores constantes:
    char op;
    double a, b;
    cin >> a >> op >> b;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/':
            if (b != 0) cout << a / b;
            else cout << "División por cero";
            break;
        default: cout << "Operacion invalida";
    }
    // Sin break la ejecución continúa en el siguiente case (fall-through). Es un error frecuente y a veces una técnica intencionada.

    int mayor = (a > b) ? a : b;

    int n = 5, factorial = 1;
    while (n > 1) {
        factorial *= n;
        --n;
    }

    int edad;
    do {
        cout << "Edad (0-120): ";
        cin >> edad;
    } while (edad < 0 || edad > 120);

    int suma;
    for (int i = 1; i <= 100; i++) {
        suma += i;
    }
    cout << suma;

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j)
            cout << i * j << '\t';
        cout << '\t';
    }

    int x;
    while (cin >> x) {
        if (x < 0) continue;
        if (x == 0) break;
        cout << x * x << endl;
    }

    /*
     *  Acumulador - sumar o multiplicar - s += x;
     *  Contador - contar casos - if (cond) ++cont;
     *  Máx/Min - recordar el mejor - if (x > max) max = x;
     *  Centinela - leer hasta un valor marca - while (x != -1)
     *  Búsqueda - parar al encontrar - break al hallarlo
     */

    cin >> n;
    bool primo = (n >= 2);
    for (int d = 2; d * d <= n && primo; ++d) {
        if (n % d == 0) primo = false;
    }
    cout << n << (primo ? " es primo" : " o es primo") << endl;
}
