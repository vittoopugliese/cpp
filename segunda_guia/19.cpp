#include <iostream>
using namespace std;

// Este ejercicio lo resolverán en la parte de código de la materia.
// El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita: 
//ver tabla en guia !!
// Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto. 
// Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int)
// el tipo de lenguaje (char) y si es urgente o no (bool)

int main() {
    char type; bool urgente; int horas;
    int valorHorario, res;

    cout << "Ingrese cantidad de horas a trabajar: ";
    cin >> horas;

    cout << "Ingrese Lenguaje del proyecto (C, #, P, G): ";
    cin >> type;

    if(type != 'C' && type != '#' && type != 'P' && type != 'G'){
        cout << "El lenguaje es una letra como se especifico......";
        return 0;
    } 

    cout << "Proyecto urgente? Pagas 120% mas (1 = sí, 0 = no): ";
    cin >> urgente;

    switch (type) {
    case 'C':
        valorHorario = 7500;
        break;
    case '#':
        valorHorario = 6100;
        break;
    case 'P':
        valorHorario = 5400;
        break;
    case 'G':
        valorHorario = 5000;
        break;
    }

    res = valorHorario * horas;

    if(urgente == 1){
        res = (res * 120) / 100 + res;
    }

    cout << "Pagas: $" << res << endl;
    return 0;
}
