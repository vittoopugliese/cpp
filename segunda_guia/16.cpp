#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
// obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
// - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
// - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
// - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
// - “Recursa la materia”, si no aprobó ningún examen parcial.

int main() {
    int nota1, nota2, nota3, nota4;
    int examenesAprobados;
    
    cin >> nota1; cin >> nota2; cin >> nota3; cin >> nota4;

    if(nota1 >= 4) examenesAprobados++;
    if(nota2 >= 4) examenesAprobados++;
    if(nota3 >= 4) examenesAprobados++;
    if(nota4 >= 4) examenesAprobados++;

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7) {
        cout << "Promocionaste chaval";
    } else if (examenesAprobados == 3 || examenesAprobados == 4) {
        cout << "Rinde Final";
    } else if (examenesAprobados == 1 || examenesAprobados == 2) {
        cout << "Recupera Parciales";
    } else {
        cout << "Recursa la materia";
    }

    return 0;
}