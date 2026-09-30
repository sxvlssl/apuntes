#include <iostream>
using namespace std;

int main()
{

    int min, max, top, n;
 

    cout << "Introduzca el valor de mínimo del rango: ";
    cin >> min;

    cout << "Introduzca el valor de máximo del rango: ";
    cin >> max;

    cout << "Introduzca el valor del extremo top: ";
    cin >> top;

    cout << "Introduzca el valor n: ";
    cin >> n;

    int temp = max/n;
    int temp2 = top/temp;

    for (int i=0; i<=top; i++)
    {

        if (temp = temp2)
        cout << temp << endl;
        
        else 
        {
            int temp2 = (top-1)/temp;
        }
    }

    cout << "test: " << temp2 << endl;

    cout << temp << endl;
}

    





