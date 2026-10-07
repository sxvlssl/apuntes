#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n;
    cout << "n: ";
    cin >> n;

    int unidad = n%10;
    n = n/10;
    int decena = n%10;
    n = n/10;
    int centena = n%10;

    cout << centena << endl << decena << endl << unidad << endl;

}
