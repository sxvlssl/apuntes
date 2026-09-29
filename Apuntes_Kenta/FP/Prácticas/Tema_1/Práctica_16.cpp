#include <iostream>
using namespace std;

int main(){
    int caja_izda, caja_dcha;
    int temp;

    cout << "Introduzca el valor de la caja izquierda: ";
    cin >> caja_izda;
    cout << "Introduzca el valor de la caja derecha: ";
    cin >> caja_dcha;

    temp = caja_izda;
    caja_izda = caja_dcha;
    caja_dcha = temp;

    cout << "El valor de la caja izquierda es de " << caja_izda << endl;
    cout << "El valor de la caja derecha es de " << caja_dcha << endl;
}    

