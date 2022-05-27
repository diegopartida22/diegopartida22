#ifndef ENVIO_H
#define ENVIO_H
#include <iostream>
#include "Persona.h"

class Envio : public Persona
{
public:
    Envio();
    Envio(Persona, Persona, double);

    Persona getRemitente() const;
    Persona getDestinatario() const;
    double getCosto() const;

    void setRemitente(Persona);
    void setDetinatario(Persona);
    void setCosto(double);

    double calculaCosto();
    void imprime();

private:
    Persona remitente, destinatario;
    double costo;
};
#endif