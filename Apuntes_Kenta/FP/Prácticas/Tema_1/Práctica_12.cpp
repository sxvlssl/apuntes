#include <iostream>
#include <cmath>
using namespace std;

main(){
    double km;

    cout << "introduzca la cantidad de kilómetros del viaje: ";
    cin >> km;

    double precio = 150+(km*0.1);

    cout << "El precio del viaje es de: " << precio << " euros" << endl;

}