#include <iostream>
using namespace std;

main(){
    double salario_inicial;
    double incremento_conjunto;   //Salario final tras aplicarle una subida del 5%
    double incremento_secuancial; //Salario final tras incrementalo primero un 3% y luego un 2%

    //Le pido al usuario el valor del salario inicial
    cout << "Introduzca el valor del salario inicial: ";
    cin >> salario_inicial;

    //calculo el incremento conjunto
    incremento_conjunto = 1.05*salario_inicial;

    //calculo el incremento secuencial
    incremento_secuancial = 1.02*(1.03*salario_inicial);

    //Muestro los resultados
    cout << "El valor del salario tras un aumento del 5% es: " << incremento_conjunto << endl;
    cout << "El valor del salario tras un aumento del 3% y luego sobre el resuntado un aumento del 2% es: " << incremento_secuancial << endl;

    return 0;
}