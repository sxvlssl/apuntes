#include <iostream>
using namespace std;

int main(){

    int n, i;
    //input
    cout << "Número de filas: ";
    cin >> n;

    //main
    //Triángulo 1
    for(i=1; i<=n; i++){
        for(int o=1; o<=i; o++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n";

    //Triángulo 2
    for(i=n; i>=0; i--){
        for(int o=1; o<=i; o++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n";

    //Triángulo 3
    for(i=1; i<=n; i++){
        for(int o=1; o<=(n-i)/2; o++){
            cout << " ";
        }for(int o=1; o<=i; o++){
            cout << "*";
        }cout << endl;
    }

    cout << "\n";    

    //Triángulo 4
    for(i=n; i>=0; i--){
        for(int o=1; o<=(n-i)/2; o++){
            cout << " ";
        }for(int o=1; o<=i; o++){
            cout << "*";
        }cout << endl;
    }    

    cout << "\n";

    //Rectángulo hueco
        //fila de arriba
    for(i=1; i<=n; i++){
        cout << "*";
    }
    cout << "\n";
        //columnas
    for(i=1; i<=n; i++){
        cout << "*";
        for(int o=1; o<=n-2; o++){
            cout << " ";
        }
        cout << "*\n";
    }
        //fila de abajo
    for(i=1; i<=n; i++){
        cout << "*";
    }

    cout << "\n\n";
    
}