#include <iostream>
using namespace std;

int main(){

    int entero_inicial, entero, suma=0, n=1, digito, potencia;

    //input
    cout << "Número entero: ";
    cin >> entero;

    //main
    entero_inicial=entero;
    while(entero/10>=1){
        entero = entero/10;
        n++;
    }
    entero=entero_inicial;
    for(int i=1; i<=n; i++){

        digito = entero%10;
        entero = entero/10;

        potencia=1;
        for (int i2=1; i2<=n; i2++){
            potencia = potencia*digito;
        }
        suma = potencia + suma;
    }

    if (suma==entero_inicial){
        cout << "El número es narcisista\n";
    }
    else{
        cout << "El número no es narcisista\n";
    }
}