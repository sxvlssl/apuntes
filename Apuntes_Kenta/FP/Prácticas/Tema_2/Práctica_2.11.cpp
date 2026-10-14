#include <iostream>
using namespace std;

int main(){

    char tipo_radar;
    double velocidad_captada, velocidad_final;

    cout << "Introduzca el tipo de radar, F para radar fijo y M para radar móvil: ";
    cin >> tipo_radar;
    
    cout << "Introduzca la velocidad captada por el radar: ";
    cin >> velocidad_captada;

    if (tipo_radar == 'F'){
        if (velocidad_captada <= 100){
            velocidad_final = velocidad_captada - 5;
        }
        else{
            velocidad_final = velocidad_captada - velocidad_captada*0.05;
        }
    }

    else{
        if (velocidad_captada <= 100){
            velocidad_final = velocidad_captada - 7;
        }
        else{
            velocidad_final = velocidad_captada - velocidad_captada*0.07;
        }
    }

    cout << "La velocidad tras reducirle el margen de error es de: " << velocidad_final << " km/h" << endl;

}