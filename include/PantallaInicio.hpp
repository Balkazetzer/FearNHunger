#pragma once

#include <curses.h>
#include <unistd.h>
#include <ncurses.h>
#include <list>
#include <Actualizable.hpp>
#include <Dibujo.hpp>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class PantallaInicio : public Dibujo
{
private:
    string recurso;
public:
    PantallaInicio() : Dibujo("pantallainicio"){

    }

    ~PantallaInicio(){}
};