#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double nReal, decimal;

    cout << "Introduzca el número a redondear: ";
    cin >> nReal;

    cout << "Introduzca el número de decimales: ";
    cin >> decimal;

    nReal = nReal*pow(10, decimal);

    double temp = round (nReal);

    double redondeado = temp/pow(10, decimal);

    cout << "El número redondeado es: " << redondeado << endl;
    
}