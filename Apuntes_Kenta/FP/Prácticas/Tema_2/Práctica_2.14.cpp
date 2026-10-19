#include <iostream>
using namespace std;

int main(){

    //input
    char parentesis1, coma, parentesis2;
    double n1, n2, n3;

    cout << "introduzca el intervalo: ";
    cin >> parentesis1;
    cin >> n1;
    cin >> coma;
    cin >> n2;
    cin >> parentesis2;
    cin >> n3;
    
    //main
    bool esta_dentro = false;

    if (((parentesis1 == '(' && n3 > n1) || (parentesis1 == '[' && n3 >= n1)) 
     && ((parentesis2 == ')' && n3 < n2) || (parentesis2 == ']' && n3 <= n2))){
        esta_dentro = true;   
    }

    //output 
    if (esta_dentro == true){
        cout << "El valor " << n3 << " está dentro del intervalo " << parentesis1 << n1 << " " << coma << " " << n2 << parentesis2 << endl;
    }
    else{
        cout << "El valor " << n3 << " no está dentro del intervalo " << parentesis1 << n1 << " " << coma << " " << n2 << parentesis2 << endl;
    }
    
}