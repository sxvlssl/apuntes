#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double grado1, grado2;
    const double pi = 3.1416;

    cout << "introduzca el valor del primer ángulo: ";
    cin >> grado1;

    cout << "introduzca el valor del segundo ángulo: ";
    cin >> grado2;

    double r1 = grado1*pi/180;
    double r2 = grado2*pi/180;

    cout << "El valor del primer ángulo en radianes es: " << r1 << endl;
    cout << "El valor del segundo ángulo en radianes es: " << r2 << endl;
}