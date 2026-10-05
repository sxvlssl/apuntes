#include <iostream>
using namespace std;

int main(){
    int X, Y;
    int temp;

    X = 10;
    Y = 100;

    temp = Y;
    Y = X;
    X = temp;

    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
}