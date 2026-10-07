#include <iostream>
using namespace std;

int main()
{
    double A, B, C;

    cout << "introduzca los valores de A, B y C: ";
    cin >> A;
    cin >> B;
    cin >> C;

    bool recta (!(A == 0) && !(B == 0));

    cout << recta << endl;
    
    //Ejercicio 6

    char letra1;
    cout << "introduzca una letra: ";
    cin >> letra1;

    bool vocal ((letra1 == 'a') || (letra1 == 'e') || (letra1 == 'i') || (letra1 == 'o') || (letra1 == 'u'));

    cout << vocal << endl;

    //Ejercicio 5

    int velocidad;
    cout << "velocidad: ";
    cin >> velocidad;

    bool velocidad_sol (velocidad >= 100);
    
    cout << velocidad_sol << endl;

    //Ejercicio 4

    int anio; //año
    cout << "Introduzca un año: ";
    cin >> anio;

    bool bisiesto (((0 == anio%4) && !(0 == anio%100)) || (0 == anio%400));

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



