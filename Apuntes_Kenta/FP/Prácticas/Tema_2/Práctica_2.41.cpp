#include <iostream>
using namespace std;
int main(){

    //[Mayor nota media]

    int codigo, alumno;
    double nota, nota_total, nota_media, nota_max = 0;

    //main
        cout << "Introduzca el código del alumno: ";
        cin >> codigo;
    while(codigo != 0){

            cout << "Nota del alumno: ";
            cin >> nota;
            int n_notas = 0;
            nota_total = 0;
        while(nota != -1){
            nota_total += nota;
            n_notas++;
            cout << "Nota del alumno: ";
            cin >> nota;
        }
        nota_media = nota_total/n_notas;

        if(nota_media > nota_max){
            nota_max = nota_media;
            alumno = codigo;
        }

        cout << "Introduzca el código del alumno: ";
        cin >> codigo;
    }

    //output
    cout << alumno << "  " << nota_max << endl;
}