#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    double altura1, altura2,altura3;

    cout << "Introduzca la altura de las tres personas: ";
    cin >> altura1;
    cin >> altura2; 
    cin >> altura3;
        
    double media = (altura1+altura2+altura3)/3;
    double desviacion = sqrt((pow(altura1-media, 2) + pow(altura2-media, 2) + pow(altura3-media, 2))/3);

    cout << "Media: " << media << endl;
    cout << "Desviación: " << desviacion << endl;
}