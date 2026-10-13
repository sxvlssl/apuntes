#include <iostream>
using namespace std;

int main(){

int edad;

//a)

bool es_mayor_edad (edad > 18);

//Usando if else

if (edad > 18){
    es_mayor_edad = true;
}
else{
    es_mayor_edad = false;
}

//b)

int ingresos, MAX_INGRESOS, MIN_INGRESOS;


bool suscept_ayuda (((edad > 18) && (ingresos <= MAX_INGRESOS)) || ((edad <= 18) && (ingresos > MIN_INGRESOS)));

//Usando if else

if (((edad > 18) && (ingresos <= MAX_INGRESOS)) || ((edad <= 18) && (ingresos > MIN_INGRESOS))){
    suscept_ayuda = true;
}

else{
    suscept_ayuda = false;
}

}