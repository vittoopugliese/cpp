#include <iostream>
using namespace std;

// Hacer un programa para ingresar un número de mes y listar por pantalla a qué 
// trimestre corresponde ese mes. Tener en cuenta esta lista:
// Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2. 
// Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4.

// Resolver este ejercicio utilizando la menor cantidad de salidas de IF 
// posibles, de forma tal que si en un hipotético caso, hubiera años de 200 meses 
// su diagrama no deba ser modificado en tal situación.

// Recordar también que la división directa con el operador / genera un
// resultado con fracción. Por ejemplo si mes=7 y usted calcula trimestre=7/3 el 
// resultado que obtendrá es trimestre= 2.33, lo cual es incorrecto.

int main() {
    int numeroMes, trimestre;
    cout << "Numero del mes que queres saber el trimesterrr (del 1 al 12): ";
    cin >> numeroMes;

    if(numeroMes < 0 || numeroMes > 12) {
        cout << "No entendes una consigna";
        return 0;
    }

    if(numeroMes % 3 != 0){
        numeroMes = numeroMes + 1;
        if(numeroMes % 3 != 0){
            numeroMes = numeroMes + 1;
        }
    } 
    
    trimestre = numeroMes / 3;
    cout << "El trimestre del mes " << numeroMes << " es el trimestre " << trimestre << endl; 
    main();
    return 0;
}