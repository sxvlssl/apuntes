#include <iostream>
using namespace std;

int main(){

    int n;
    int L;

    cout << "L: ";
    cin >> L;

    for (n=1; n<=L; n++){
        for (int i=1; i<=L-n; i++)
            cout << " ";
        for (int i=1; i<=n; i++)
            cout << "\033[32m"<< "*";
            
        
    cout << endl;
    }
}