#include <iostream>
using namespace std;

int main(){

    char letra_original;
    cout << "introduzca una letra: ";
    cin >> letra_original;


    char letra_convertida = letra_original - 'a'-'A';

    cout << letra_convertida << endl;

}