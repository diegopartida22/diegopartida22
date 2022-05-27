#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

class Persona
{
public:
    Persona();
    Persona(std::string, std::string, int);
    std::string getNombre() const;
    std::string getCiudad() const;
    int getCp() const;

    void setNombre(std::string);
    void setCiudad(std::string);
    void setCp(int);

private:
    std::string nombre;
    std::string ciudad;
    int cp;
};
#endif