#include <iostream>
#include <cmath>
using namespace std;

main(){
    double X1; //coordenada x del punto P1
    double Y1; //coordenada y del punto P1
    double X2; //coordenada x del punto P2
    double Y2; //coordenada y del punto P2
    double distancia; //distancia euclídea entre los dos puntos

    //Pido al usuario que introduzca las coordenadas del punto P1
    cout << "Introduzca la coordenada x del punto P1: ";
    cin  >> X1;

    cout << "Introduzca la coordenada y del punto P1: ";
    cin >> Y1;

    //Pido al usuario que introduzca las coordenadas del punto P2
    cout << "Introduzca la coordenada x del punto P2: ";
    cin  >> X2;

    cout << "Introduzca la coordenada y del punto P2: ";
    cin >> Y2;

    //calcula la distancia euclídea entre los dos puntos
    distancia = sqrt(pow(X1-X2, 2) + pow(Y1-Y2, 2));


    //Muestra al usuario la distancia euclídea entre los dos puntos
    cout << "La distancia euclídea entre los dos puntos es de: " << distancia << " unidades." << endl;

    return 0;
}


