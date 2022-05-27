#include "Persona.h"

Persona::Persona()
{
    nombre = "XXXXXXXX";
    ciudad = "XXXXXXXX";
    cp = 000000;
}
Persona::Persona(std::string _nombre, std::string _ciudad, int _cp)
{
    nombre = _nombre;
    ciudad = _ciudad;
    cp = _cp;
}
std::string Persona::getNombre() const
{
    return nombre;
}
std::string Persona::getCiudad() const
{
    return ciudad;
}
int Persona::getCp() const
{
    return cp;
}

void Persona::setNombre(std::string _nombre)
{
    nombre = _nombre;
}
void Persona::setCiudad(std::string _ciudad)
{
    ciudad = _ciudad;
}
void Persona::setCp(int _cp)
{
    cp = _cp;
}