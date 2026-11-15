#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int tope;
    double pi = 0;
    double raiz, signo = -1;

    //input
    do{
        cout << "tope: ";
        cin >> tope;
    }while(tope>100000 || tope <= 0);

    const double raiz2 = 1.0/3;
    raiz = 1/sqrt(3);
    //main
    for(int i=0; i<=tope; i++){
        signo = -1*signo;
        pi = (signo*raiz)/(2*i+1)+pi;
        raiz = raiz*raiz2;
    }
    pi = pi*6;

    //output
    cout.precision(15);
    cout << pi << endl;
}