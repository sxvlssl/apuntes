#include <iostream>
using namespace std;
int main(){

    int min, max, k, numero_divisores=0;
    int suma;

    //input
    do{
        cout << "min: ";
        cin >> min;
    }while(min<=1);
    do{
        cout << "max: ";
        cin >> max;
    }while(max<=min);    
    do{
        cout << "k: ";
        cin >> k;
    }while(k<=1);


    //main
    while(min<=max){
        int divisor=1;
        suma=0;
        while(divisor<min){
            while(min%divisor==0){
                numero_divisores++;
            }
            divisor++;
        }
        if(suma==min){
            cout << suma << "\n";
        }
        min++;
    }
}