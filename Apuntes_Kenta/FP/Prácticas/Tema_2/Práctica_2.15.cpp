#include <iostream>
#include <string>
using namespace std;

int main(){

double bodyTemperature;
char temp;
const double temperaturaFiebre = 38;

//Input
cout << "Introduzca la temperatura corporal: ";
cin >> bodyTemperature;

cout << "Introduzca si tiene dificultad respirando: ";
cin >> temp;
bool difficultyBreathing (temp == 'S');

cout << "Introduzca si tiene diabetes: ";
cin >> temp;
bool diabetes (temp == 'S');

cout << "Introduzca si tiene cancer: ";
cin >> temp;
bool cancer (temp == 'S');

//Main

string resultado = "Cuarentena en su casa";

if (bodyTemperature < temperaturaFiebre){
    resultado = "Test negativo";
}
else if(difficultyBreathing || diabetes || cancer){
        resultado = "Consulte autoridades locales";
}

//Output

cout << resultado << endl;

}