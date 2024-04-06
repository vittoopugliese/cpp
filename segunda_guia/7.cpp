#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado tres números e informar con una
// leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.
// Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa
// que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.

int main(){
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a != b && a != c && b != c ) {
        cout << "todos distintos";
    } else {
        cout << "no emito nada ....";
    }

    return 0;
}