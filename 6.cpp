#include <iostream>
using namespace std;

// Hacer un programa para que un comercio ingrese por teclado la recaudación en 
// pesos para cada una de las cuatro semanas del mes. El programa debe listar la 
// recaudación promedio por semana y el porcentaje de recaudación por semana.
// Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación 
// promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

int main() {
    float rectotal, recprom;
    float rec1,rec2,rec3,rec4;
    float sem1, sem2, sem3, sem4;
    
    cin >> rec1;
    cin >> rec2;
    cin >> rec3;
    cin >> rec4;

    rectotal = rec1 + rec2 + rec3 + rec4;
    recprom = rectotal / 4;
    sem1 = (rec1 / rectotal) * 100;
    sem2 = (rec2 / rectotal) * 100;
    sem3 = (rec3 / rectotal) * 100;
    sem4 = (rec4 / rectotal) * 100;

    cout << rectotal << endl;
    cout << recprom << endl;
    cout << sem1 << " " << sem2 << " " << sem3 << " " << sem4;
    return 0;
}
