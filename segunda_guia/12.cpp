#include <iostream>
using namespace std;

// Hacer un programa para leer tres números diferentes y determinar e informar el número del medio.
// Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
// N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
// N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
// N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8

int main() {
    int n1, n2, n3;
    cin >> n1; cin >> n2; cin >> n3;

    if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)) {
        cout << "el numero medio es: " << n1 << endl;
    } else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)) {
        cout << "el numero medio es: " << n2 << endl;
    } else if ((n3 > n1 && n3 < n2) || (n3 < n1 && n3 > n2)) {
        cout << "el numero medio es: " << n3 << endl;
    } else {
        cout << "todos son iguales" << endl;
    }

    return 0;
}