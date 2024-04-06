#include <iostream>
using namespace std;

// Hacer un programa para ingresar tres números y listar el máximo de ellos...

int main() {
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 > n2 && n1 > n3){
        cout << n1 << " - N1 es mayor" << endl;
    } else if(n2 > n1 && n2 > n3) {
        cout << n2 << " - N2 es mayor" << endl;
    } else {
        cout << n3 << " - N3 es mayor" << endl;
    }

    return 0;
}