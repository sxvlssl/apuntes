#include <iostream>
using namespace std;
int main(){
//input
    int n;
    do{
        cout << "n (mayor o igual a 4): ";
        cin >> n;
    }while(n<4 || n%2 != 0);

//main
    //primera linea
    for(int espacio=1; espacio<=n*2.5-1; espacio++){
        cout << " ";
    }
    cout << "#";
    for(int i=1; i<=n*2-3; i++){
        cout << " ";
    }
    cout << "#";
    cout << "\n";

    //parte de arriba
    for(int parte1=1; parte1<=n-1; parte1++){
        //triangulo 1
        for(int i=1; i<=n-parte1; i++){
            cout << " ";
        }
        for(int i=1; i<=parte1*2-1; i++){
            cout << "*";
        }
        //espacio entre triangulos
        for(int i=1; i<=n*1.5; i++){
            cout << " ";
        }
        //triangulo 2
        if(parte1 != n-1){
            cout << "#";
            for(int i=1; i<=n*2-parte1*2-3; i++){
                cout << " ";
            }
            cout << "#";
        }else{
            cout << "#";
        }
        cout << "\n";
    }
    //parte del centro
    for(int i=1; i<=n*2-1; i++){
        cout << "*";
    }
    for(int i=1; i<=n/2; i++){
        cout << "o";
    }
    for(int i=1; i<=n*2-1; i++){
        cout << "*";
    }
    cout << "\n";

    //parte de abajo
    for(int progreso=1; progreso<=n; progreso++){
        //primer triangulo
        for(int i=1; i<=n-progreso; i++){
            cout << " ";
        }
        for(int i=1; i<=progreso; i++){
            cout << "+";
        }
        //espacio entre triangulos
        for(int i=1; i<=n*1.5; i++){
            cout << " ";
        }
        cout << "\n";
        //segundo triangulo
    }


}