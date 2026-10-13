#include <iostream>
using namespace std;

int main(){
    double km, precio_final;
    const double tarifa_base = 150;

    cout << "introduzca la cantidad de kilómetros del viaje: ";
    cin >> km;

    if (km <= 300){
    precio_final = tarifa_base;
    }
    
    else {
    double precio_final = tarifa_base+((km-300)*0.1);
    }

    cout << "El precio del viaje es de: " << precio_final << " euros" << endl;
    
}