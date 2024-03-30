
#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y
// la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
// Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje 
// de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.

int main() {
    int cantidadasientos, pasajesocupados, asientosocupados, porcentajeocupacion, porcentajedenoocupacion;
    cin >> cantidadasientos  >> pasajesocupados;
    asientosocupados = (pasajesocupados / cantidadasientos) * 100;
    porcentajeocupacion = asientosocupados;
    porcentajedenoocupacion = 100 - asientosocupados;
    cout << porcentajeocupacion << porcentajedenoocupacion;
    return 0;
}