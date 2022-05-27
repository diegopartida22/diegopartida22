#ifndef PAQUETE_H
#define PAQUETE_H
//#include "Persona.h"
#include "Envio.h"
#include <iostream>

class Paquete : public Envio
{
public:
    Paquete();
    Paquete(Persona, Persona, double, int, int, int, double, int);

    int getLargo() const;
    int getAncho() const;
    int getProfundidad() const;
    double getPeso() const;
    int getCostoXKilo() const;

    void setLargo(int);
    void setAncho(int);
    void setProfundidad(int);
    void setPeso(double);
    void setCostoXKilo(int);
    double calculaCosto();
    void imprime();

private:
    int largo, ancho, profundidad, costoXkilo;
    double peso;
};
#endif
