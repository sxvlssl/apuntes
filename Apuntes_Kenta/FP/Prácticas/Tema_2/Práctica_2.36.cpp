#include <iostream>
using namespace std;
int main(){

    int n, valor_inicial;
    //input
    cout << "numero de filas: ";
    cin >> n;
    cout << "Valor inicial: ";
    cin >> valor_inicial;


    //main
    for(int i=1; i<=n; i++){
        cout << "\n";
        int p=valor_inicial+i-1;
        for(int o=1; o<=n; o++){
            cout << " " << p;
            p++;
        }
    }
    cout << "\n";
}