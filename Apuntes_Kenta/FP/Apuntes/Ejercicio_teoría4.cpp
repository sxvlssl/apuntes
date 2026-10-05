#include <iostream>
using namespace std;


main(){

    int entero1, entero2;
    int maximo;

    cout << "entero1: ";
    cin >> entero1;

    cout << "entero2: ";
    cin >> entero2;

    maximo = entero1;
    if (entero1 < entero2){
    maximo = entero2;
    }

    cout << "El entero mayor es: " << maximo << endl;
}
