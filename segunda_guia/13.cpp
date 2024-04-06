#include <iostream>
using namespace std;

// Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor. 
// Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
// Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
// Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
// Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.

int main() {
    int n1, n2, n3;
    cin >> n1; cin >> n2; cin >> n3;

    if (n1 <= n2 && n1 <= n3) {

        if (n2 <= n3) {
            cout << n1 << ", " << n2 << ", " << n3 << endl;
        } else {
            cout << n1 << ", " << n3 << ", " << n2 << endl;
        }

    } else if (n2 <= n1 && n2 <= n3) {

        if (n1 <= n3) {
            cout << n2 << ", " << n1 << ", " << n3 << endl;
        } else {
            cout << n2 << ", " << n3 << ", " << n1 << endl;
        }

    } else {
        
        if (n1 <= n2) {
            cout << n3 << ", " << n1 << ", " << n2 << endl;
        } else {
            cout << n3 << ", " << n2 << ", " << n1 << endl;
        }
        
    }

    return 0;
}