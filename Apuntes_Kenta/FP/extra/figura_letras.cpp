#include <iostream>
using namespace std;

int main(){

    int n;
    do{
        cout << "n (menor a 27): ";
        cin >> n;
    }while(n>=27);

    char letra;

    for(int L=1; L<=n; L++){
        letra = 'a';
        for(int i=1; i<=n-L; i++){
            cout << " ";
        }
        for(int i=1; i<=L*2-1; i++){
            if(i<=L){
                cout << letra;
                letra = letra+1;
            }else if(i == L+1){
                letra = letra-2;
                cout << letra;
            }else{
                letra = letra-1;
                cout << letra;
            }
        }
        cout << "\n";
    }
}