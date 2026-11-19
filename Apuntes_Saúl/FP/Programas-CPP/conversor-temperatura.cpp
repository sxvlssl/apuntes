#include <iostream>

using namespace std;

int main() {
    double celsius;
    cout << "Grados Celsius: ";
    cin >> celsius;
    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    cout << celsius << " C = " << fahrenheit << " F" << endl;
}
