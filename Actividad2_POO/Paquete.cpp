#include "Paquete.h"
#include <iostream>

Paquete::Paquete()
{
    largo = 0;
    ancho = 0;
    profundidad = 0;
    peso = 0;
    costoXkilo = 0;
}

Paquete::Paquete(Persona _remitente, Persona _destinatario, double _costo, int _largo, int _ancho, int _profundidad, double _peso, int _costoXkilo) : Envio(_remitente, _destinatario, _costo)
{
    largo = _largo;
    ancho = _ancho;
    peso = _peso;
    profundidad = _profundidad;
    costoXkilo = _costoXkilo;
}

// getters
int Paquete::getLargo() const
{
    return largo;
}
int Paquete::getAncho() const
{
    return ancho;
}
int Paquete::getProfundidad() const
{
    return profundidad;
}

double Paquete::getPeso() const
{
    return peso;
}

int Paquete::getCostoXKilo() const
{
    return costoXkilo;
}

// setters
void Paquete::setLargo(int _largo)
{
    largo = _largo;
}
void Paquete::setAncho(int _ancho)
{
    ancho = _ancho;
}
void Paquete::setProfundidad(int _profundidad)
{
    profundidad = _profundidad;
}

void Paquete::setPeso(double _peso)
{
    peso = _peso;
}

void Paquete::setCostoXKilo(int _costoXkilo)
{
    costoXkilo = _costoXkilo;
}

double Paquete::calculaCosto()
{
    return costoXkilo * peso + Envio::calculaCosto();
}

void Paquete::imprime()
{
    std::cout << "DATOS DE ENVIO" << std::endl;
    std::cout << "- - - - - - - - - - - - - - " << std::endl;
    Envio::imprime();
    std::cout << "DATOS PAQUETE" << std::endl;
    std::cout << "Largo: " << largo << " cm" << std::endl;
    std::cout << "Ancho: " << ancho << " cm" << std::endl;
    std::cout << "Profundidad: " << profundidad << " cm" << std::endl;
    std::cout << "Peso: " << peso << " gr" << std::endl;
    std::cout << "Costo X Kilo: $ " << costoXkilo << std::endl;
}