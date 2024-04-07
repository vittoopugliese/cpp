#include <iostream>
using namespace std;

// Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises.
// Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:
// Cantidad de carteras
// Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)
// Calcular e informar:
// Cantidad total de carteras vendidas en total.
// Cuántas carteras quedaron de cada tipo.
// Los colores de carteras que no se vendieron.
// NOTA: Ninguna venta superará las 10 carteras.

int main() {
    const int max = 10;
    const int carterasBlancas = 45;
    const int carterasNegras = 50;
    const int carterasMarrones = 40;
    const int carterasGrises = 49;

    int venta1, venta2, venta3;
    int tipo1, tipo2, tipo3;
    int cantBlancas = 0, cantNegras = 0, cantMarron = 0, cantGris = 0;
    int cantBlancasRest, cantNegrasRest, cantMarronRest, cantGrisRest;
    int totalVendidas, coloresNoVendidos;

    cout << "Tipo 1 de cartera: ";
    cin >> tipo1;

    if(tipo1 > 4) {
        cout << "Solo hay 4 tipos...";
        return 0;
    }

    cout << "Cantidad del tipo 1: ";
    cin >> venta1;

    if(venta1 > max){
        cout << "La venta no puede superar las 10 carteras";
        return 0;
    } 

    cout << "Tipo 2 de cartera: ";
    cin >> tipo2;

    if(tipo2 > 4) {
        cout << "Solo hay 4 tipos...";
        return 0;
    }

    cout << "Cantidad del tipo 2: ";
    cin >> venta2;

    if(venta2 > max){
        cout << "La venta no puede superar las 10 carteras";
        return 0;
    } 

    cout << "Tipo 3 de cartera: ";
    cin >> tipo3;

    if(tipo3 > 4) {
        cout << "Solo hay 4 tipos...";
        return 0;
    }

    cout << "Cantidad del tipo 3: ";
    cin >> venta3;

    if(venta3 > max){
        cout << "La venta no puede superar las 10 carteras";
        return 0;
    } 

    switch (tipo1){
    case 1:
        cantBlancas += venta1;
        break;
    case 2:
        cantNegras += venta1;
        break;
    case 3:
        cantMarron += venta1;
        break;
    case 4:
        cantGris += venta1;
        break;
    }

    switch (tipo2){
    case 1:
        cantBlancas += venta2;
        break;
    case 2:
        cantNegras += venta2;
        break;
    case 3:
        cantMarron += venta2;
        break;
    case 4:
        cantGris += venta2;
        break;
    }

    switch (tipo3){
    case 1:
        cantBlancas += venta3;
        break;
    case 2:
        cantNegras += venta3;
        break;
    case 3:
        cantMarron += venta3;
        break;
    case 4:
        cantGris += venta3;
        break;
    }

    totalVendidas = cantBlancas + cantNegras + cantMarron + cantGris;
    cantBlancasRest = carterasBlancas - cantBlancas;
    cantNegrasRest = carterasNegras - cantNegras;
    cantMarronRest = carterasMarrones - cantMarron;
    cantGrisRest = carterasGrises - cantGris;

    cout << "Vendidas en total: " << totalVendidas << endl;
    cout << endl;
    cout << "Blancas vendidas: " << cantBlancas << " - Blancas restantes: " << cantBlancasRest << endl;
    cout << "Negras vendidas: " << cantNegras << " - Negras restantes: " << cantNegrasRest << endl;
    cout << "Marrones vendidas: " << cantMarron << " - Marrones restantes: " << cantMarronRest << endl;
    cout << "Grises vendidas: " << cantGris << " - Grises restantes: " << cantGrisRest << endl;
    cout << endl;

    if(cantBlancas == 0){
        cout << "Ninguna gris vendida" << endl;
    }

    if(cantNegras == 0){
        cout << "Ninguna negra vendida" << endl;
    }

    if(cantMarron == 0){
        cout << "Ninguna marron vendida" << endl;
    }

    if(cantGris == 0){
        cout << "Ninguna gris vendida" << endl;
    }

    return 0;
}