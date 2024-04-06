#include <iostream>
using namespace std;

// Hacer un programa para ingresar cinco números y listar cuantos de esos 
// cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.

int main() {
    int n1, n2, n3, n4, n5;
    int neg = 0, pos = 0;

    cin >> n1; cin >> n2; cin >> n3; cin >> n4; cin >> n5;

    if (n1 > 0) {
        pos++;
    } else if (n1 < 0) {
        neg++;
    }

    if (n2 > 0) {
        pos++;
    } else if (n2 < 0) {
        neg++;
    }

    if (n3 > 0) {
        pos++;
    } else if (n3 < 0) {
        neg++;
    }

    if (n4 > 0) {
        pos++;
    } else if (n4 < 0) {
        neg++;
    }

    if (n5 > 0) {
        pos++;
    } else if (n5 < 0) {
        neg++;
    }

    cout << "Positivos: " << pos << endl;
    cout << "Negativos: " << neg << endl;

    main();
    return 0;
}