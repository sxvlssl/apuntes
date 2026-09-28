#include <iostream>
using namespace std;

main(){
    double capital, interes, total;

    cout << "Introduzca la cantidad de euros depositada: ";
    cin >> capital;

    cout << "Introduzca el interés: ";
    cin >> interes;

    //calculo el total
    total = capital+capital*(interes/100);

    //muestro el resultado
    cout << "El dinero que se tendrá a cabo de un año serán: " << total << " euros." << endl;
}