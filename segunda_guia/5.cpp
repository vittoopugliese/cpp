#include <iostream>
using namespace std;

// Un negocio de perfumería efectúa descuentos según el importe de la venta.
// Si el importe es menor a $100 aplicar un descuento del 5%
// Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
// Si el importe es mayor a $500 aplicar un descuento del 15%
// Hacer un programa donde se ingresa el importe original sin descuento y se 
// informe por pantalla el importe con el descuento ya aplicado.
// Importante: Verifique que el programa emita UN SOLO CARTEL.

int main() {
    int imp, dto, total;
    cin >> imp;

    if(imp < 100){
        dto = 5;
        total = imp - (imp * dto) / 100;
    } else if (imp > 101 && imp < 499){
        dto = 10;
        total = imp - (imp * dto) / 100;
    } else {
        dto = 15;
        total = imp - (imp * dto) / 100;
    }

    cout << total << endl;

    main(); // llamo a main para probarlo varias veces sin ejecutar de nuevo xd
    return 0;
}