#include <iostream>
using namespace std;

enum class Letra {mayuscula, minuscula, no_letra};

int main(){
    char convertida, original;
    const int DIST_MAY_MIN = 'a'-'A';        


    //Input
    
    cout << "Pasar de mayúscula a minúscula y viceversa\n\n"
         << "Introduzca una letra: ";
    cin >> original;
    cout << "\n";

    //Main

    Letra solucion = Letra::no_letra;
    convertida = original;

    if ('A' <= original && original <= 'Z'){
        solucion = Letra::mayuscula;
        convertida = original + DIST_MAY_MIN;   
    }
    else if ('a' <= original && original <= 'z'){
        solucion = Letra::minuscula;
        convertida = original - DIST_MAY_MIN;
    }

    //Output

    if (solucion == Letra::mayuscula){
        cout << original << " era mayúscula\n"
        << "Conversión a minúscula: " << convertida;
    }
    else if (solucion == Letra::minuscula){
        cout << original << " era minúscula\n"
        << "Conversión a mayúscula: " << convertida;
    }
    else{
        cout << "El carácter no era una letra." << endl;
    }

}