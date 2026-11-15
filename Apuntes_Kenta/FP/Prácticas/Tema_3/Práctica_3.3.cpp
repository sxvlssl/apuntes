#include <iostream>
using namespace std;
int main(){

    char caracteres[100];
    char caracter;

    //input
    int n_caracteres=0;
    caracter = cin.get();
    while(caracter != '#' && n_caracteres <= 100){
        caracteres[n_caracteres]=caracter;
        n_caracteres++;
        caracter=cin.get();
    }

    //main
    //compruebo si es un palíndromo
    bool es_palindromo = true;
    int n=0;
    while(n < n_caracteres/2 && es_palindromo==true){
    if(caracteres[n] != caracteres[n_caracteres-1-n]){
            es_palindromo=false;
        }
        n++;
    }

    //invierto los vectores
    if(es_palindromo==false){
        for(int i=0; i < n_caracteres/2; i++){
            caracter = caracteres[i];
            caracteres[i] = caracteres[n_caracteres-1-i];
            caracteres[n_caracteres-1-i] = caracter;
        }
    }

    //output
    cout << "\n\n";
    if (es_palindromo)
       cout << "Es palíndromo";
    else{
        cout << "No Es palíndromo" << "\n"
             << "Componentes del vector después de invertirlo: ";
    
        for (int n=0; n < n_caracteres; n++){
           cout  << caracteres[n];
        }
    }
}