#include <iostream>
using namespace std;

// Hacer un programa para ingresar el importe de una compra y el descuento a
// aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado 
// y el importe total a cobrar.
// Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
// Importe: 4500, Descuento: 1800, total: 2700.

int main() {
    int imp, dto, desc, total;
    cin >> imp;
    cin >> dto;
    desc = (imp * dto) / 100;
    total = imp - desc;
    cout << total;
    return 0;
}