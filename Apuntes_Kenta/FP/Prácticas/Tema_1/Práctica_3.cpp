#include <iostream>
using namespace std;

int main(){
    double radio;
    double longitud_circunferencia, area_circulo;
    const double pi = 3.1416;

    //Le pido al usuario que introduzca el valor del radio
    cout << "Introduzca el valor del radio: "; 
    cin >> radio;

    //Calculo la longitud de la circunferencia
    longitud_circunferencia = 2*pi*radio;

    //Calculo el área del circulo
    area_circulo = pi*radio*radio;

    //Muestro los resultados
    cout << "Longitud de la circunferencia: " << longitud_circunferencia << endl;
    cout << "Área del circulo: " << area_circulo << endl;
}