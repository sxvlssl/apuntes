#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double precio_inicial;
    int puntos, trayecto_largo;

    cout << "Introduzca el precio de su billete: ";
    cin >> precio_inicial;

    cout << "Introduzca el descuento por puntos: ";
    cin >> puntos;

    cout << "Introduzca el descuento por trayecto largo: ";
    cin >> trayecto_largo;



    double precio_puntos =  precio_inicial*(1-(puntos/100.0));
    double precio_trayecto_largo =  precio_inicial*(1-(trayecto_largo/100.0));

    cout << "El precio del viaje tras aplicar un descuento por los puntos es de: " << precio_puntos << " euros" << endl;
    cout << "El precio del viaje tras aplicar un descuento por tener un trayecto largo es de: " << precio_trayecto_largo << " euros" << endl;
    return 0;
}