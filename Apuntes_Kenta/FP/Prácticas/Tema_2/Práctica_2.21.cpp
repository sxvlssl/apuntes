#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double valor_final;
    double valor_inicial;
    double VP; //VP = Variación porcentual

    cout << "Introduzca el valor inicial: ";
    cin >> valor_inicial;    

    while(valor_inicial>=0){
        cout << "Introduzca el valor final: ";
        cin >> valor_final;

        VP = abs(100*((valor_final-valor_inicial)/valor_inicial));

        cout << "Variación porcentual: " << VP << "%" << endl;

        cout << "Introduzca el valor inicial: ";
        cin >> valor_inicial;    
    }
}