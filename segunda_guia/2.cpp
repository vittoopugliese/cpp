#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado dos números y luego informar por
// pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. 

int main() {
    int n1, n2;
    cin >> n1;
    cin >> n2;

    if(n1 % n2 == 0){
        cout << "Si es multiplo";
    } else {
        cout << "nop es multiplo";
    }
    
    return 0;
}