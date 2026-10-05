#include <iostream>
using namespace std;

main(){
    
    double x;

    cout << "x: ";
    cin >> x;

    bool esta_fuera = ((x < 1) || (x > 10));

    cout << esta_fuera << endl;

}