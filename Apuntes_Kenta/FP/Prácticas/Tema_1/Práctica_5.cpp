#include <iostream>
using namespace std;

int main(){
    double valor_final;
    double valor_inicial;
    double VP; //VP = Variación porcentual

    //pido al usuario que introduzca los valores iniciales y finales

    cout << "Introduzca el valor inicial: ";
    cin >> valor_inicial;

    cout << "Introduzca el valor final: ";
    cin >> valor_final;

    //calculo la variación porcentual

    VP = abs(100*((valor_final-valor_inicial)/valor_inicial));

    cout << "Variación porcentual: " << VP << "%" << endl;

}
