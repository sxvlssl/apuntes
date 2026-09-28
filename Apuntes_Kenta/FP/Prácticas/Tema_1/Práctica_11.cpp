#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double decimal;

    cout << "Introduzca el número decimal: ";
    cin >> decimal;

    double redondeado = round (decimal);

    cout << "El número decimal redondeado es: " << redondeado << endl;

}