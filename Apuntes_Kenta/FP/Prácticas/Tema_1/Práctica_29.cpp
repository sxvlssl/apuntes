#include <iostream>
using namespace std;

int main()
{

    //Ejercicio 4

    int año; 
    cout << "Introduzca un año: ";
    cin >> año;

    bool bisiesto ((año % 4) && !(año % 100) && (año & 400));

    cout << bisiesto << endl;

    //Ejercicio 3

    int adivine; 
    cout << "Introduzca un número entre 1 y 100: ";
    cin >> adivine;

    bool adivine_sol ((1 <= adivine) && (100 >= adivine));

    cout << adivine_sol << endl;


    //Ejercicio 2

    int edad; 
    cout << "Introduzca la edad: ";
    cin >> edad;

    bool mayor ((18 <= edad) && (65 >= edad));

    cout << mayor << endl;


    //Ejercicio 1

    char letra; 
    cout << "Introduzca una letra: ";
    cin >> letra;

    bool minuscula ('a' <= letra);

    cout << minuscula << endl;

}



