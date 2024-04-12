#include <iostream>
using namespace std;

// Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala: 
// $10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo. 
// $12 por kW por el consumo excedente de 101 a 200 kW. 
// $15 por kW por el consumo excedente de 201 kW en adelante.

// Hacer un programa para que, dado el consumo en kilovatios de un determinado 
// cliente, el programa calcule e informe el total a pagar.
// Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550 
// Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300.
// Ejemplo 3: Un consumo de 250 kW, se calculará: $10 x 100 + $12 x 100 + $15 x 50 = $2950.

int main() {
    int kilovatios;
    cin >> kilovatios;

    int costoTotal = 0;

    if (kilovatios <= 100) {
        costoTotal = kilovatios * 10;
    } else if (kilovatios <= 200) {
        costoTotal = 1000 + (kilovatios - 100) * 12;
    } else {
        costoTotal = 2200 + (kilovatios - 200) * 15;
    }

    cout << costoTotal;

    return 0;
}