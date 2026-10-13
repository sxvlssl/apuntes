#include <iostream>
using namespace std;

int main(){

    char letra_original;
    cout << "Introduzca una letra: ";
    cin >> letra_original;


    if ((letra_original > 'A') && (letra_original < 'Z' )){
    char minuscula = letra_original + ('a'-'A');
    cout << minuscula << endl;
    }
    else {
    cout << letra_original << endl;
    }
}