#include <iostream>
using namespace std;

int main(){
    double metros;
    cout << "Introduzca la cantidad de metros a convertir: ";
    cin >> metros;

    double pulgada = metros*39.3701;
    double pie = metros*3.28084;
    double yarda = metros*1.09361;
    double milla = metros*0.0006214;
    double milla_marina = metros*0.00053996;

    cout << "La cantidad de metros introducida es equivalente a: " << endl;
    cout << pulgada << " pulgadas" << endl;
    cout << pie << " pies" << endl;
    cout << yarda << " yardas" << endl;
    cout << milla << " millas" << endl;
    cout << milla_marina << " millas marinas" << endl;
}

    