#include "Sobre.h"

Sobre::Sobre()
{
    largo = 0;
    ancho = 0;
    costoAdicional = 0;
}

Sobre::Sobre(Persona _remitente, Persona _destinatario, double _costo, int _largo, int _ancho) : Envio(_remitente, _destinatario, _costo)
{
    largo = _largo;
    ancho = _ancho;
    costoAdicional = 0;
}
int Sobre::getLargo() const
{
    return largo;
}

int Sobre::getAncho() const
{
    return ancho;
}

double Sobre::getCostoAdicional() const
{
    return costoAdicional;
}

void Sobre::setLargo(int _largo)
{
    largo = _largo;
}
void Sobre::setAncho(int _ancho)
{
    ancho = _ancho;
}
void Sobre::setCostoAdicional(double _costoAdicional)
{
    costoAdicional = _costoAdicional;
}

double Sobre::calculaCosto()
{
    if ((largo >= 30 && ancho >= 25) || (ancho >= 30 && largo >= 25))
    {
        costoAdicional = 20;
    }
    return costoAdicional + Envio::calculaCosto();
}

void Sobre::imprime()
{
    std::cout << "DATOS DE ENVIO" << std::endl;
    std::cout << "- - - - - - - - - - - - - - " << std::endl;
    Envio::imprime();
    std::cout << "DATOS SOBRE" << std::endl;
    std::cout << "Largo: " << largo << std::endl;
    std::cout << "Ancho: " << ancho << std::endl;
    std::cout << "Costo Adicional: " << costoAdicional << std::endl;
}