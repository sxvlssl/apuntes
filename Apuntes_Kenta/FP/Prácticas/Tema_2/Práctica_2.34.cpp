#include <iostream>
using namespace std;
int main(){

    int n;
    double x, potencia=1;
    long factorial=1;

    //input
    do{
        cout << "introduzca un número n dentro del intervalo [1,20]: ";
        cin >> n;
    }while (n<1 || n>20);

    cout << "x: ";
    cin >> x;

    //main

    for (int i=1; i<=n; i++){
    //n!
    factorial = i*factorial;
    //potencia
    potencia = potencia*x;
    }  

    //output
    cout << "n! = " << factorial << endl;
    cout << "x^n = " << potencia << endl;
}