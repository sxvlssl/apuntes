#include <iostream>
using namespace std;
int main(){

    int min, max;

    //input
    cout << "Conjetura de Collatz\n";
    
    do{
        cout << "min: ";
        cin >> min;
    }while(min<=1);
    do{
        cout << "max: ";
        cin >> max;
    }while(max<min);

    //main
    int min_temp = min;
    int orbita, orbita_mayor = 0, n_mayor_orbita, n;

    while(min_temp<=max){
        orbita = 0;
        n = min_temp;
        while(n != 1){
            bool es_par = !(n%2);
            if(es_par){
                n = n/2;
            }else{
                n = n*3+1;
            }
            orbita++;
        }
        if(orbita > orbita_mayor){
            n_mayor_orbita = min_temp;
            orbita_mayor = orbita;
        }
        min_temp++;
    }
    cout << " " << n_mayor_orbita << "  " << orbita_mayor << endl;
}