#include <iostream>
using namespace std;

int main(){
    double km, puntos, precio_base, precio_final;
    const double tarifa_base = 150;

    cout << "introduzca la cantidad de kilómetros del viaje: ";
    cin >> km;

    cout << "introduzca la cantidad de puntos de la tarjeta: ";
    cin >> puntos;

    if (km <= 300){
    precio_base = tarifa_base;
    }
    else {
    precio_base = tarifa_base+((km-300)*0.1);
    }

    double porcentaje = 0;
    
    if (km > 700){
        porcentaje = 0.02;
    }
    if ((puntos > 100) && (puntos <=200)){
        porcentaje = porcentaje + 0.03;
    }
    if (puntos > 200){
        porcentaje = porcentaje + 0.04;
    }

    precio_final = precio_base - precio_base*porcentaje;

    cout << "El precio del viaje es de: " << precio_final << " euros" << endl;
    
}