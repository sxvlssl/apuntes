#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double min, max, top, n;
 

    cout << "Introduzca el valor de mínimo del rango: ";
    cin >> min;

    cout << "Introduzca el valor de máximo del rango: ";
    cin >> max;

    cout << "Introduzca el valor del extremo top: ";
    cin >> top;

    cout << "Introduzca el valor n: ";
    cin >> n;

    double temp = max/n;
    double temp2 = top/temp;

    for (int i=0; i<=top; i++)
    {

        if (temp = temp2)
        cout << round(temp) << endl;
        
        else 
        {
            double temp2 = (top-1)/temp;
        }
    }

    cout << "test: " << round(temp2) << endl;

    cout << round(temp) << endl;
}

    





