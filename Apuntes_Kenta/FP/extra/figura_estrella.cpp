#include <iostream>
using namespace std;

int main(){

    //input 
    int n;
    cout << "n: ";
    cin >> n;

    //parte de arriba
    for(int l=1; l<=n/2; l++){
        //primer espacio en blanco
        for(int i=1; i<l; i++){
            cout << " ";
        }
        cout << "*";
        //segundo espacio en blanco
        for(int i=1; i<=n/2+1-l; i++){
            cout << " ";
        }
        cout << "*";
        //tercer espacio en blanco
        for(int i=1; i<=n/2+1-l; i++){
            cout << " ";
        }
        cout << "*\n";
    }

    //parte del medio
    for(int i=1; i<=n/2+1; i++){
        cout << " ";
    }
    
    cout << "*\n";
    //parte de abajo
    for(int l=1; l<=n/2; l++){
        //primer espacio en blanco
        for(int i=1; i<=n/2-l; i++){
            cout << " ";
        }
        cout << "*";
        //segundo espacio en blanco
        for(int i=1; i<l+1; i++){
            cout << " ";
        }
        cout << "*";
        //tercer espacio en blanco
        for(int i=1; i<l+1; i++){
            cout << " ";
        }
        cout << "*\n";
    }

}