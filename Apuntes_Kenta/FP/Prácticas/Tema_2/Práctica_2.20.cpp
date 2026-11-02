#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double desviacion; //σ
    double media; //µ
    double maximo, minimo, incremento, x;
    const double pi = 3.14159;

    //input
    cout << "Introduzca la media o esperanza: ";
    cin >> media;    

    do{
        cout << "Introduzca la desviación típica: ";
        cin >> desviacion;
    }while (desviacion<0);

    cout << "Mínimo: ";
    cin >> minimo;
    do{
        cout << "Máximo: ";
        cin >> maximo;
    }while (minimo>maximo);

    do{
        cout << "Incremento: ";
        cin >> incremento;   
    }while (incremento<0);

    //main
    double i = minimo;
    do{
    double gaussiana = (1/(desviacion*sqrt(2*pi)))*exp(-0.5*pow(((i-media)/desviacion), 2));
    cout << gaussiana << endl;
    i = i+incremento;
    }while (i<=maximo);
    
    return 0;
}