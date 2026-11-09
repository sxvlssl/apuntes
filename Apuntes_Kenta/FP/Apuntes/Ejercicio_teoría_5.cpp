#include <iostream>
using namespace std;

int main(){
    
char vocal;

    do{
        cout << "vocal: ";
        cin >> vocal;
    }while (vocal!='a' && vocal!='e' && vocal!='i' && vocal!='o' && vocal!='u');

cout << vocal << " es una vocal\n";

}