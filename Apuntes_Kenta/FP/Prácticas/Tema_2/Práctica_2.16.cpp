#include <iostream>
using namespace std;

int main(){

    char tipo_radar;
    double velocidad_captada, velocidad_final;

    cout << "Introduzca el tipo de radar, F para radar fijo, M para radar móvil y T para tramo: ";
    cin >> tipo_radar;
    
    cout << "Introduzca la velocidad captada por el radar: ";
    cin >> velocidad_captada;


    if (velocidad_captada <= 100){
        if (tipo_radar == 'F'){
            velocidad_final = velocidad_captada - 5;
        }
        if (tipo_radar == 'M'){
            velocidad_final = velocidad_captada - 7;
        }
        else{
            velocidad_final = velocidad_captada - 3;
        }
    }
    else{
        if (tipo_radar == 'F'){
            velocidad_final = velocidad_captada - velocidad_captada*0.05;
        }
        if (tipo_radar == 'M'){
            velocidad_final = velocidad_captada - velocidad_captada*0.07;
        }
        else{
            velocidad_final = velocidad_captada - velocidad_captada*0.03;
        }
    }


    //output
    cout << "La velocidad tras reducirle el margen de error es de: " << velocidad_final << " km/h" << endl;

}