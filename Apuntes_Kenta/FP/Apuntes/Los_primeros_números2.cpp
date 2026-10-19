#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int i = 1, factorial = 1;
    double n;

    cout << "Introduzca n: ";
    cin >> n;

    while (i <= n){
    factorial = i*factorial;
    i++;
    }

    cout << factorial << endl;
}


