#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double kms, gasolina_c, gasolina_q;

    cout << "Introduzca los kilómetros recorridos: ";
    cin >> kms;
    cout << "Introduzca la cantidad de gasolina consumida: ";
    cin >> gasolina_c;
    cout << "Introduzca la cantidad de gasolina disponible: ";
    cin >> gasolina_q;

    double eficiencia = kms/gasolina_c;
    double consumo = 100*(1/eficiencia);
    double autonomia = eficiencia*gasolina_q;

    cout << "La eficiencia del vehículo es de " << eficiencia << " kms por litro" << endl;
    cout << "El consumo del vehículo es de " << consumo << " litros cada 100 kms" << endl;
    cout << "La autonomía del vehículo es de " << autonomia << " kms" << endl;
}