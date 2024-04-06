#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado un número y luego emitir por pantalla
// un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
// Importante: Verifique que el programa emita UN SOLO CARTEL.

int main() {
    int numero;
    cin >> numero;
    
    if(numero > 0){
        cout << "Es positivo";
    } else if( numero < 0){
        cout << "Es negativo";
    } else {
        cout << "Es 0...";
    }

    return 0;
}