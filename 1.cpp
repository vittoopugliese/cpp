#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado la cantidad de horas 
// trabajadas por un operario y el valor que se le paga por hora trabajada 
// y listar por pantalla el sueldo que le corresponda.

int main(){
    int horas, valor, sueldo;
    cin >> horas;
    cin >> valor;
    sueldo = horas * valor;
    cout << sueldo;
    return 0;
}
