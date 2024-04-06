#include <iostream>
using namespace std;

// Hacer un programa para ingresar cinco números y listar el máximo y
// el mínimo de ellos.

int main(){
    int n1, n2, n3, n4, n5;

    cin >> n1; cin >> n2; cin >> n3; cin >> n4; cin >> n5;

    int maximo = n1;
    int minimo = n1;

    if (n2 > maximo){
        maximo = n2;
    }
    if (n2 < minimo){
        minimo = n2;
    }

    if (n3 > maximo){
        maximo = n3;
    }
    if (n3 < minimo){
        minimo = n3;
    }

    if (n4 > maximo){
        maximo = n4;
    }
    if (n4 < minimo){
        minimo = n4;
    }

    if (n5 > maximo){
        maximo = n5;
    }
    if (n5 < minimo){
        minimo = n5;
    }

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    return 0;
}