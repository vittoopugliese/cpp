#include <iostream>
using namespace std;

// Hacer un programa para un cajero automático para ingresar un importe a retirar
// y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.
// Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se
// deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y
// 0 billetes de $100.
// Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se
// deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y
// 0 billetes de $100.
// Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se
// deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y
// 0 billetes de $500.
// Recordatorio. Considerar en todos los casos que el importe a retirar es en
// todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.

int main(){
    int plata, cantmil, cantquini, cantdocs, cantcien, importres;
    cin >> plata;
    cantmil = plata / 1000;
    importres = plata - (cantmil * 1000);
    cantquini = importres / 500;
    importres = importres - (cantquini * 500);
    cantdocs = importres / 200;
    importres = importres - (cantdocs * 200);
    cantcien = importres / 100;
    cout << cantmil << " " << cantquini  << " " << cantdocs  << " " << cantcien;
    return 0;
}