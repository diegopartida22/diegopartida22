#ifndef SOBRE_H
#define SOBRE_H
#include "Envio.h"

class Sobre : public Envio
{
public:
    Sobre();
    Sobre(Persona, Persona, double, int, int);
    int getLargo() const;
    int getAncho() const;
    double getCostoAdicional() const;

    void setLargo(int);
    void setAncho(int);
    void setCostoAdicional(double);

    double calculaCosto();
    void imprime();

private:
    int largo, ancho;
    double costoAdicional;
};

#endif
