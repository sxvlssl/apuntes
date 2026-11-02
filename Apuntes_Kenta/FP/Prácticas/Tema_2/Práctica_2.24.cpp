#include <iostream>
using namespace std;

int main(){
    double capital, interes, capital_inicial;

    //input
    cout << "Introduzca la cantidad de euros depositada: ";
    cin >> capital;
    cout << "Introduzca el interés: ";
    cin >> interes;

    //main
    capital_inicial=capital;
    int i=0;
    while (capital <= 2*capital_inicial){
    capital = capital+capital*(interes/100);
    i++;
    }

    //output
    cout << "Para al menos doblar la cantidad inicial han de pasar " << i << " años\n";
    
    return 0;
}