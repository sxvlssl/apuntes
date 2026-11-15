#include <iostream>
using namespace std;
int main(){

    int min, max, k, numero_divisores=0;
    int numeros_divisibles[100];

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
    int i = 0;
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
            numeros_divisibles[i] = min;
            i++;
        }
        min++;
    }

    //output
    cout << "Números con " << k << " o más divisores: \n";
    for(int n=0; n<i; n++){
        cout << numeros_divisibles[n] << " ";
    }
    cout << "\n";
}