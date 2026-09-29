#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Horai, Horaf, Minutoi, Minutof, Segundoi, Segundof;

    cout << "Introduzca la hora inicial: ";
    cin >> Horai; 
    cin >> Minutoi;
    cin >> Segundoi;

    cout << "Introduzca la hora final: ";
    cin >> Horaf;
    cin >> Minutof;
    cin >> Segundof;

    int segundos_de_diferencia = (Horaf*3600 + Minutof*60 + Segundof) - (Horai*3600 + Minutoi*60 + Segundoi);

    cout << "La diferencia de tiempo entre las dos horas es de: " << segundos_de_diferencia << " segundos" << endl;

    return 0;
}