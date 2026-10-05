#include <iostream>
using namespace std;

main(){
    int n;

    cout << "Introduzca un número entero: ";
    cin >> n;

    bool es_par = (n%2 == 0);

    if (es_par)
    cout << n << " es par" << endl;

    else 
    cout << n << " no es par" << endl;
}