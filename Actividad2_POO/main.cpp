#include <iostream>
using namespace std;
#include "Envio.h"
#include "Sobre.h"
#include "Paquete.h"

// Diego Partida Romero A01641113

int main()
{

    Persona p1("Diego Partida Romero", "Guadalajara", 45768);
    Persona p2("Carlos Alberto Veryan Peña", "Guatemingo", 40569);
    Envio envio1(p1, p2, 118);
    Paquete paquete1(p1, p2, envio1.calculaCosto(), 4, 5, 6, 45, 4);
    Sobre sobre1(p1, p2, envio1.calculaCosto(), 30, 32);
    // envio1.imprime();
    // sobre1.imprime();
    cout << "- ENVIO Y PAQUETE - \n"
         << endl;
    paquete1.imprime();
    cout << "- - - - - - - - - - - - - - " << endl;
    cout << "Costo del envio: $" << envio1.calculaCosto() << endl;
    cout << "- - - - - - - - - - - - - - " << endl;
    cout << "Costo del paquete: $" << paquete1.calculaCosto() << endl;
    cout << "- - - - - - - - - - - - - - " << endl;
    cout << "Costo del sobre + costo adicional: $" << sobre1.calculaCosto() << endl;
}
