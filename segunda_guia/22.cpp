#include <iostream>
using namespace std;

// Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su 
// sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los 
// siguientes costos:

// Costo de alquiler de $100000
// Costo por caramelo producido de $2.50
// Costo por mantenimiento cada 1000 caramelos de $50000

// Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
// "El presupuesto es suficiente para cubrir los costos de $XXXX"
// "El presupuesto no es suficiente, necesita un crédito de $XXXX"

int main() {
    int presupuestoInicial, cantCaramelosAProd, res, credito;
    int costoAlquiler = 100000;
    int costoPerMilCaramels = 50000;
    float costoPerCaramelProducido = 2.5;

    cout << "Presupuesto inicial: ";
    cin >> presupuestoInicial;
    cout << "Caramelos a producir: ";
    cin >> cantCaramelosAProd;

    res = presupuestoInicial - costoAlquiler - (cantCaramelosAProd * costoPerCaramelProducido);

    if(cantCaramelosAProd >= 1000){
        res -= costoPerMilCaramels;
    }

    if(res > 0){
        cout << "El presupuesto es suficiente para cubrir los costos de $ " << presupuestoInicial << endl;
        cout << "Platita restante: " << res << endl;
    } else {
        credito = presupuestoInicial - (res * -1);
        cout << "El presupuesto no es suficiente, necesita un crédito de $ " << credito << endl;
    }

    return 0;
}