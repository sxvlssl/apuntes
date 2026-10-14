#include <iostream>
using namespace std;

int main(){
    int Horai, Horaf, Minutoi, Minutof, Segundoi, Segundof;

    //Input

    cout << "Introduzca la hora inicial: ";
    cin >> Horai; 
    cin >> Minutoi;
    cin >> Segundoi;

    cout << "Introduzca la hora final: ";
    cin >> Horaf;
    cin >> Minutof;
    cin >> Segundof;

    //Main

    bool primero_es_anterior = false;

    if (Horai < Horaf){
        primero_es_anterior = true;
    }

    if ((Horai == Horaf) && (Minutoi < Minutof)){
        primero_es_anterior = true;
    }

    if ((Horai == Horaf) && (Minutoi == Minutof) && (Segundoi < Segundof)){
       primero_es_anterior = true;
    }

    //Output

    if ((Horai == Horaf) && (Minutoi == Minutof) && (Segundoi == Segundof)){
        cout << "Las dos horas son iguales" << endl;
    }
    else{
        if (primero_es_anterior == true){
        cout << "El primero es anterior" << endl;
        }
        else{
        cout << "El primero no es anterior" << endl;
        }
    }
}