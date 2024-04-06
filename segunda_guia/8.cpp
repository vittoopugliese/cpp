#include <iostream>
using namespace std;

// Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por
// teclado la longitud de los tres lados de un triángulo y luego listar qué tipo
// de triángulo es: 
// - Equilátero: si los tres lados son iguales.
// - Isósceles: si dos de los tres lados son iguales.
// - Escaleno: si los tres lados son distintos entre sí.


int main() {
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 == n2 && n1 == n3){
        cout << "Equilatero - todos N iguales";
    } else if(n1 == n2 || n1 == n3 || n2 == n3){
        cout << "Isósceles - 2 N iguales" << endl;
    } else {
        cout << "Escaleno - todos N dif" << endl;
    }

    return 0;
}