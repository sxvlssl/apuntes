#include <iostream>
#include <cmath>
using namespace std;

main(){
    double precio_inicial;

    cout << "Introduzca el precio de su billete: ";
    cin >> precio_inicial;

    double precio_puntos =  precio_inicial*0.96;
    double precio_trayecto_largo =  precio_inicial*0.98;

    cout << "El precio del viaje tras aplicar un descuento por los puntos es de: " << precio_puntos << " euros" << endl;
    cout << "El precio del viaje tras aplicar un descuento por tener un trayecto largo es de: " << precio_trayecto_largo << " euros" << endl;
}