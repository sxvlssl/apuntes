#include <iostream>
using namespace std;
int main(){

    int min, max, k, numero_divisores=0;

    //input
    do{
        cout << "min: ";
        cin >> min;
    }while(min<=0);
    do{
        cout << "max: ";
        cin >> max;
    }while(max<min);    
    do{
        cout << "k: ";
        cin >> k;
    }while(k<1);

    //main
    while(min<=max){
        int divisor=2;
        numero_divisores=0;
        while(divisor<min){
            if(min%divisor==0){
                numero_divisores++;
            }
            divisor++;
        }
        if(numero_divisores>=k){
            cout << min << endl;
        }
        min++;
    }
}