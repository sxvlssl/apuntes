#include <iostream>
using namespace std;

int main(){

    double numerador = 2;
    double denominador = 1;
    int tope;

    //input
    do{
        cout << "tope: ";
        cin >> tope;
    }while(tope>100000 || tope <= 0);

    //main

    //a)
    double pi_a = numerador/denominador;
    bool alternacion = true;

    for(int i=1; i<=tope-1; i++){
        if(alternacion){
            denominador = denominador + 2;
            alternacion = false;
        }
        else{
            numerador = numerador + 2;
            alternacion = true;
        }
    pi_a = pi_a*(numerador/denominador);
    }
    pi_a = 2*pi_a;
    

    //b)
    numerador = 2;
    denominador = 1;
    double pi_b = numerador/denominador;
    double numerador_temp;

    for(int i=1; i<=tope-1; i++){

        numerador_temp = numerador;
        numerador=denominador+1;
        denominador=numerador_temp+1;

        pi_b = pi_b*(numerador/denominador);
    }
    pi_b = 2*pi_b;

    //output
    cout.precision(15);
    cout << "\na) pi = " << pi_a << "\n"
    << "\nb) pi = " << pi_b << "\n";
}