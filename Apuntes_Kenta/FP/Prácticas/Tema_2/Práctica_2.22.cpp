#include <iostream>
using namespace std;

int main(){

    int n;
    double x, potencia=1;
    long long factorial=1;

    //input
    do{
        cout << "introduzca un número n dentro del intervalo [1,20]: ";
        cin >> n;
    }while (n<1 || n>20);

    cout << "x: ";
    cin >> x;

    //main
    int i = 1;
    do{
    //n!
    factorial = i*factorial;
    //potencia
    potencia = potencia*x;

    i++;
    }while (i<=n);

    //output
    cout << "n! = " << factorial << endl
         << "x^n = " << potencia << endl;
}