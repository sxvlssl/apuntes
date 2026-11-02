#include <iostream>
using namespace std;

int main(){
    double capital, interes, total;
    int N; //años

    //input
    cout << "Introduzca la cantidad de euros depositada: ";
    cin >> capital;
    cout << "Introduzca el interés: ";
    cin >> interes;
    cout << "Introduzca el la cantidad de años: ";
    cin >> N;

    //main
    for(int i=0; i<=N-1; i++){
        capital = capital+capital*(interes/100);
        cout << "Capital obtenido transcurrido el año número " << i << " = " <<capital << " euros." << endl;
    }

    return 0;
}