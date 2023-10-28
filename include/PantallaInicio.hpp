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
    PantallaInicio() : Dibujo("pantallainicio")
    {
    }

    PantallaInicio(int x, int y) : Dibujo(x, y, "pantallainicio")
    {
        cout << "\n" << endl;
    }

    void Inicio(int r, int cl)
    {
        this->x = r + 10;
        this->y = cl / 2;
    }

    ~PantallaInicio() {}
};