#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int i = 1, suma = 0;

    while (i <= 1000){
    suma = i*i + suma;
    i++;
    }

    cout << suma << endl;
}