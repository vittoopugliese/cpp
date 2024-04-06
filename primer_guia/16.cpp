#include <iostream>
using namespace std;

// El Laboratorio V&V hace frascos de píldoras para aprender a programar.
// Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol,
// 2 grs de Micilina y 7 mg de Ácido Sinítico.
// Nos solicitan un programa donde se ingrese la cantidad de frascos de un
// pedido y muestre la cantidad de miligramos de Betamol, Micilina y de Ácido
// Sinítico que son necesarios para elaborarlos.

int main(){
    int frascos, pills, beta, mici, sintico;
    cin >> frascos;

    pills = frascos * 75;
    beta = pills * 45;
    mici = pills * 2000;
    sintico = pills * 7;

    cout << beta << " " << mici << " " << sintico;
    return 0;
}