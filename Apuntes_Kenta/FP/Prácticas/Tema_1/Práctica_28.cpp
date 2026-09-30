#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double min, max, top, n;

    cout << "Introduzca el valor de mínimo del rango: ";
    cin >> min;

    cout << "Introduzca el valor de máximo del rango: ";
    cin >> max;

    cout << "Introduzca el valor del extremo top: ";
    cin >> top;

    cout << "Introduzca el valor n: ";
    cin >> n;

    int escalado = round(top*((n-min)/(max-min)));

    cout << "El valor escalado es: " << escalado << endl;

}

    





