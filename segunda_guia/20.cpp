#include <iostream>
using namespace std;

// Hacer un programa en el que se ingrese la edad y altura de 5 personas.. Luego, calcular e informar:
// * La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
// * El promedio de altura de las personas mayores a 30 años.
// * La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
// * La cantidad de personas cuya edad sea de 20, 30 o 40 años.

int main() {
    int edad1, edad2, edad3, edad4, edad5;
    float alt1, alt2, alt3, alt4, alt5;
    int personasDeMasDe180cmY30Anos = 0;
    int promedioDeAlturaDeLosMayoresDe30 = 0;
    int personasConAlturaEntre170Y180 = 0;
    int personasDe20 = 0, personasDe30 = 0, personasDe40 = 0;

    cout << "Ingrese la edad primera persona: ";
    cin >> edad1;
    cout << "Ingrese la altura primera persona: ";
    cin >> alt1;
    
    cout << "Ingrese la edad de la segunda persona: ";
    cin >> edad2;
    cout << "Ingrese la altura segunda persona: ";
    cin >> alt2;

    cout << "Ingrese la edad tercera persona: ";
    cin >> edad3;
    cout << "Ingrese la altura tercera persona: ";
    cin >> alt3;

    cout << "Ingrese la edad de la cuarta persona: ";
    cin >> edad4;
    cout << "Ingrese la altura cuarta persona: ";
    cin >> alt4;

    cout << "Ingrese la edad de la quinta persona: ";
    cin >> edad5;
    cout << "Ingrese la altura quinta persona: ";
    cin >> alt5;

    if(edad1 >= 30 && alt1 >= 1.8) personasDeMasDe180cmY30Anos++;
    if(edad2 >= 30 && alt2 >= 1.8) personasDeMasDe180cmY30Anos++;
    if(edad3 >= 30 && alt3 >= 1.8) personasDeMasDe180cmY30Anos++;
    if(edad4 >= 30 && alt4 >= 1.8) personasDeMasDe180cmY30Anos++;
    if(edad5 >= 30 && alt5 >= 1.8) personasDeMasDe180cmY30Anos++;

    if(edad1 >= 30) promedioDeAlturaDeLosMayoresDe30 += alt1;
    if(edad2 >= 30) promedioDeAlturaDeLosMayoresDe30 += alt2;
    if(edad3 >= 30) promedioDeAlturaDeLosMayoresDe30 += alt3;
    if(edad4 >= 30) promedioDeAlturaDeLosMayoresDe30 += alt4;
    if(edad5 >= 30) promedioDeAlturaDeLosMayoresDe30 += alt4;

    if(alt1 >= 1.7 && alt1 <= 1.8) personasConAlturaEntre170Y180++;
    if(alt2 >= 1.7 && alt2 <= 1.8) personasConAlturaEntre170Y180++;
    if(alt3 >= 1.7 && alt3 <= 1.8) personasConAlturaEntre170Y180++;
    if(alt4 >= 1.7 && alt4 <= 1.8) personasConAlturaEntre170Y180++;
    if(alt5 >= 1.7 && alt5 <= 1.8) personasConAlturaEntre170Y180++;

    switch (edad1){
    case 20:
        personasDe20++;
        break;
    case 30:
        personasDe30++;
        break;
    case 40:
        personasDe40++;
        break;
    }

    switch (edad2){
    case 20:
        personasDe20++;
        break;
    case 30:
        personasDe30++;
        break;
    case 40:
        personasDe40++;
        break;
    }

    switch (edad3){
    case 20:
        personasDe20++;
        break;
    case 30:
        personasDe30++;
        break;
    case 40:
        personasDe40++;
        break;
    }

    switch (edad4){
    case 20:
        personasDe20++;
        break;
    case 30:
        personasDe30++;
        break;
    case 40:
        personasDe40++;
        break;
    }

    switch (edad5){
    case 20:
        personasDe20++;
        break;
    case 30:
        personasDe30++;
        break;
    case 40:
        personasDe40++;
        break;
    }

    cout << "Personas +30a que miden +1.8m: " << personasDeMasDe180cmY30Anos << endl;
    cout << "Promedio de altura de los +30a: " << promedioDeAlturaDeLosMayoresDe30 / personasDe30 << endl;
    cout << "Personas con altura entre 1.7m y 1.8m: " << personasConAlturaEntre170Y180 << endl;
    cout << "Personas con 20: " << personasDe20 << endl;
    cout << "Personas con 30: " << personasDe30 << endl;
    cout << "Personas con 40: " << personasDe40 << endl;
    
    return 0;
}