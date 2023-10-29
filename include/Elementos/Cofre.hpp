#pragma once
#include <fstream>
#include <string.h>
#include <ncurses.h>
#include <Dibujo.hpp>
#include <Mapa.hpp>
#include <Nivel.hpp>

class Cofre : public Dibujo
{
private:
    string lleno = "elementos/cofrelleno";
    string vacio = "elementos/cofrevacio";

public:
    string recurso;
    bool contiene;
    Cofre(bool contiene);
    ~Cofre();
};

Cofre::Cofre(bool contiene) : contiene(contiene)
{
    if (contiene)
    {
        recurso = this->lleno;
    }
    else
    {
        recurso = this->vacio;
    }
}

Cofre::~Cofre()
{
}
