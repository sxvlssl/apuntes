#include <iostream>
using namespace std;

int main(){

    int n1, n2;

    cout << "introduzca el primer número: ";
    cin >> n1;

    cout << "introduzca el segundo número: ";
    cin >> n2;

    bool es_divisible ((0 == n1%n2) || (0 == n2%n1));

    if (es_divisible == 1){
        cout << "Uno de ellos divide al otro" << endl;
    }

    else{
        cout << "Ninguno divide al otro" << endl;
    }
}