#include <iostream> 
using namespace std;  
   
int main(){    
    int entero, ultimo_dvsor, dvsor;
    int divisores[50];

    //input
    cout << "Divisores de un entero\n\n";
    
    do{
       cout << "Introduce un numero entero mayor estricto que 0: ";
       cin >> entero;
    }while (entero <= 0);
   
    cout << "\n";

    //main
    dvsor = 2;
    ultimo_dvsor = entero / 2;

    int i = 0;
    while (dvsor <= ultimo_dvsor){
        if (entero % dvsor == 0){
            divisores[i]=dvsor;
            i++;
        }
        dvsor++;
    }

    //output
    cout << "Divisores de " << entero << ": ";
    for(int n=0; n<i; n++){
        cout << divisores[n] << " ";
    }
    cout << "\n";
}