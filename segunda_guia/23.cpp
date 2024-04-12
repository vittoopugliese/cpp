#include <iostream>
using namespace std;

// Hacer un programa para ingresar un número de mes y listar por pantalla a 
// qué bimestre corresponde ese mes. Tener en cuenta esta lista:
// Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
// Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.

// Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, 
// de forma tal que si en un hipotético caso, hubiera años de 200 meses su
// diagrama no deba ser modificado en tal situación.

// Recordar también que la división directa con el operador /  genera un resultado 
// con fracción. Por ejemplo si mes=7 y usted calcula bimestre=7/2 el resultado 
// que obtendrá es bimestre= 3.5, lo cual es incorrecto.

int main() {
    int numeroMes, bimestre;
    cout << "Numero del mes que queres saber el bimesterrr (del 1 al 12): ";
    cin >> numeroMes;

    if(numeroMes < 0 || numeroMes > 12) {
        cout << "No entendes una consigna";
        return 0;
    }

    if(numeroMes % 2 !=0){
        bimestre = (numeroMes + 1) / 2;
    } else {
        bimestre = numeroMes / 2;
    }

    cout << "El bimestre del mes " << numeroMes << " es el bimestre " << bimestre << endl; 
    return 0;
}