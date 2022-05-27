#include "Envio.h"
#include <iostream>

Envio::Envio()
{
    costo = 0;
}

Envio::Envio(Persona _remitente, Persona _destinatario, double _costo) //
{
    remitente = _remitente;
    destinatario = _destinatario;
    costo = _costo;
}

Persona Envio::getRemitente() const
{
    return remitente;
}
Persona Envio::getDestinatario() const
{
    return destinatario;
}

double Envio::getCosto() const
{
    return costo;
}

void Envio::setRemitente(Persona _remitente)
{
    remitente = _remitente;
}
void Envio::setDetinatario(Persona _destinatario)
{
    destinatario = _destinatario;
}

void Envio::setCosto(double _costo)
{
    costo = _costo;
}

double Envio::calculaCosto()
{
    return costo;
}

void Envio::imprime()
{
    std::cout << "Remitente: " << remitente.getNombre() << std::endl;
    std::cout << "Ciudad Remitente: " << remitente.getCiudad() << std::endl;
    std::cout << "Codigo Postal Remitente: " << std::to_string(remitente.getCp()) << std::endl;
    std::cout << "- - - - - - - - - - - - - - - " << std::endl;
    std::cout << "Destinatario: " << destinatario.getNombre() << std::endl;
    std::cout << "Ciudad Destinatario: " << destinatario.getCiudad() << std::endl;
    std::cout << "Codigo Postal Destinatario: " << std::to_string(destinatario.getCp()) << std::endl;
    std::cout << "- - - - - - - - - - - - - - - " << std::endl;
}