#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado tres números y luego determinar 
// e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso
// contrario no emitir nada.
// Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.


int main() {
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a == b && b == c){
        cout << "tres iguales";
    } else {
        cout << "no emito nada ....";
    }
    
    return 0;
}