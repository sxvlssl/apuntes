#include <iostream>
using namespace std;
int main(){

    int min, max;
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

    //main
    while(min<=max){
        int divisor=1;
        suma=0;
        while(divisor<min){
            if(min%divisor==0){
                suma=suma+divisor;
            }
            divisor++;
        }
        if(suma==min){
            cout << suma << "\n";
        }
        min++;
    }
}