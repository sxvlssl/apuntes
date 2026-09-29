#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    int temp, temp2;

    cout << "Introduzca el valor de x: ";
    cin >> x;
    cout << "Introduzca el valor de y: ";
    cin >> y;
    cout << "Introduzca el valor de z: ";
    cin >> z;

    temp = x;
    temp2 = y;

    x = z;
    y = temp;
    z = temp2;


    cout << x << " " << y << " " << z << endl;
}    

