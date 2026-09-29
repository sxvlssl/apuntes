#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double media; //µ
    double desviacion;     //σ
    double x;
    const double pi = 3.14159;

    cout << "Introduzca la media: ";
    cin >> media;
    cout << "Introduzca la desviación típica: ";
    cin >> desviacion;
    cout << "Introduzca el valor de abcisa (x): ";
    cin >> x;

    double gaussiana = (1/(desviacion*sqrt(2*pi)))*exp(-0.5*pow(((x-media)/desviacion), 2));

    cout << "El valor de la gaussiana es: " << gaussiana << endl;

}