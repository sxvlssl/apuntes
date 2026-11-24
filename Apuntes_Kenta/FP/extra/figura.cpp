#include <iostream>
using namespace std;
int main(){

    int L_menor;

    //input
    do{
        cout << "introduzca la longitud del triángulo menor (entre 0 y 10): ";
        cin >> L_menor;
    }while(L_menor<10);

    //main
    int L_mayor = 2*L_menor;
    int L_intermedio;


    bool es_par = (L_menor%2 == 0);
    if(es_par){
        L_intermedio = 1.5*L_menor;
    }
    else{
        L_intermedio = 1.5*L_menor+1;
    }

    //Triángulos
    for(int i=1; i<=L_mayor; i++){

        if(i<=L_mayor-L_intermedio==true){
            //Triángulo grande
            for(int o=1; o<=L_menor+L_mayor-i; o++){
                cout << " ";
            }
            for(int o=1; o<=i; o++){
                cout << "+";
            }
            cout << "\n";
        }
        else if(i<=L_mayor-L_menor==true){
            //Triángulo grande
            for(int o=1; o<=L_menor+L_mayor-i; o++){
                cout << " ";
            }
            for(int o=1; o<=i; o++){
                cout << "+";
            }
            //Triángulo mediano
            for(int o=1; o<=L_mayor-i; o++){
                cout << " ";
            }
            for(int o=1; o<=i-(L_intermedio-L_menor); o++){
                cout << "*";
            }
                cout << "\n";
        }
        else{
            //Triángulo pequeño
            for(int o=1; o<=L_mayor-i; o++){
                cout << " ";
            }
            for(int o=1; o<=i-L_mayor+L_menor; o++){
                cout << "*";
            }
            //Triángulo grande
            for(int o=1; o<=L_mayor-i; o++){
                cout << " ";
            }
            for(int o=1; o<=i; o++){
                cout << "+";
            }
            //Triángulo mediano
            for(int o=1; o<=L_mayor-i; o++){
                cout << " ";
            }
            for(int o=1; o<=i-(L_intermedio-L_menor); o++){
                cout << "*";
            }
            cout << "\n";
        }
    }
}