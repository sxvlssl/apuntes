#include <iostream>
using namespace std;

int main(){

    char caracter;

    cout << "Introduzca un dígito: ";
    cin >> caracter;

    int entero = caracter - '0'; 

    cout << "Entero: " << entero << endl;
    cout << "Caracter: " << caracter << endl;

}
