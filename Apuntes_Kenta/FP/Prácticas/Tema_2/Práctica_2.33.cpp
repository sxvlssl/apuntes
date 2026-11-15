#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double real;
    const double EPSILON = 1e-15;
    int iteraciones = 0;
   
    //input
    cout << "Algoritmo de Wilkes, Wheeler y Gill, para el cómputo de la raíz cuadrada\n\n";

    // Lectura de real con filtro de entrada de datos -> Debe ser 0 < r < 3
    do{
        cout << "Introduzca un número real r verificando 0 < r < 3 -> ";
        cin >> real;
    }while(real>=3||real<=0);
    
    //main
    // Defina aquí el algoritmo de Wilkes, Wheeler y Gill. 
    double a = real;
    double c = real-1;
    while(abs(c)>=EPSILON){
        a = a - (a*c)/2;
        c = (c*c*(c-3))/4;
        iteraciones++;
    }

    // La raíz de "real" será "raiz_wilkes"
   
    cout << "\n";
    cout << "Raíz cuadrada de " << real << " calculada con sqrt: " << sqrt(real) << "\n"
         << "Aproximación de la raíz cuadrada de " << real << ": " << a << "\n"
         << "Número de iteraciones: " << iteraciones;
}