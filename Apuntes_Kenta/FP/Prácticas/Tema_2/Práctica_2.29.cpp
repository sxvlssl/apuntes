#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int tope;
    double pi_temp, pi_a, pi_b, pi_c;
    double signo;
    //input
    do{
        cout << "introduzca un tope que esté en un intervalo [1,100000]: ";
        cin >> tope;
    }while (tope<1 || tope>100000);

    //main

    //a)
    pi_temp = 1;
    for (int i=1; i<=tope; i++){
        pi_temp = pi_temp + ((pow(-1, i))/(2*i+1));
    }
    pi_a = pi_temp*4;

    //b)

    pi_temp = 1;
    signo = 1;
    for (int i=1; i<=tope; i++){
        signo = -1*signo;
        pi_temp = pi_temp +(signo/(2*i+1));
    }
    pi_b = pi_temp*4;

    //c)

    pi_temp = 1;
    signo = 1;
    for (int i=1; i<=tope; i++){
        signo = -1*signo;
        pi_temp = pi_temp +(signo/(2*i+1));
    }
    pi_c = pi_temp*4;

    //output
    cout.precision(15);
    cout << "a) pi = " << pi_a << endl;
    cout << "b) pi = " << pi_b << endl;
    cout << "c) pi = " << pi_c << endl;
}