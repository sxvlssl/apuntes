#include <iostream>
using namespace std;
int main(){

    //input
    int n;
    cout << "n: ";
    cin >> n;


    //main
    for(int altura=0; altura<=n; altura++){
        for(int i=1; i<=n-altura; i++){
            cout << " ";
        }
        int numero = altura;
        for(int i=1; i<=altura*2+1; i++){
            int ciclos = -1;
            int n_temp = abs(numero);
            while(n_temp>=10){
                n_temp--;
                ciclos++;
            }if(abs(numero)>=10){
                cout << ciclos;
            }else if(numero < 0){
                numero = abs(numero);
                cout << numero;
                numero = -numero;
            }else{
                cout << numero;
            }
            numero = numero-1;
        }
        cout << "\n";
    }
}