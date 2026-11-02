#include <iostream>
using namespace std;

int main(){

    int i=0, n, minimo;

    cout << "n: ";
    cin >> n;
    minimo = n;

    while(n <= 0){
        cout << "n: ";
        cin >> n;

        if (n<minimo){
            minimo = n;
        }

        i++;
    }

    cout << "Introducidos: " << i << ".  Mínimo: " << minimo << "\n";

}