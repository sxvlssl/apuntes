#include <iostream>
using namespace std;
int main(){
//input
    int n;
    cout << "n: ";
    cin >> n;

//main
    for(int progreso=1; progreso<=n; progreso++){
        //primer triángulo
        for(int i=1; i<=n-progreso; i++){
            cout << " ";
        }
        for(int i=1; i<=progreso*2-1; i++){
            cout << "*";
        }
        //puente
        for(int i=1; i<=n; i++){
            cout << ".";
        }
        //segundo triángulo
        if(progreso==1){
            for(int i=1; i<=n*2-1; i++){
                cout << "*";
            }
        }else if(progreso != n){
            cout << "*";
            for(int i=1; i<=2*n-progreso*2-1; i++){
                cout << " ";
            }
            cout << "*";
        }else{
            cout << "*";
        }
        cout << "\n";
    }
}