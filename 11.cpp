#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar 
// por pantalla a cuántos días, horas y minutos equivalen.
// Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que 
// equivalen a 1 día, 1 hora y 20 minutos.
// Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que 
// equivalen a 0 día, 8 horas y 0 minutos.

int main() {
    int min, dias, horas, minres;
    cin >> min;
    dias = (min / 60) / 24;
    horas = (min / 60) % 24;
    minres = min % 60;
    cout << dias << " " << horas << " " << minres;
    return 0;
}