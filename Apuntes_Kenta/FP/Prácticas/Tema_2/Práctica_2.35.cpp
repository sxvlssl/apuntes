#include <iostream>
using namespace std;
int main(){

    int n;
    //input
    cout << "n: ";
    cin >> n;

    //main
    for(int i=1; i<=n; i++){
        cout << "\n";
        int p=i;
        for(int o=n; o>=i; o--){
            cout << p;
            p++;
        }
    }
    cout << "\n";
}