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
#include <Nivel.hpp>
using namespace std;

class Ventana
{
private:
protected:
    Nivel *nivelSeleccionado;
    int maxx, maxy;

public:
    Ventana(/* args */);
    ~Ventana();

    bool Comprobar(int cols, int rows)
    {
        if (cols >= 30 && rows >= 30)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Actualizar(list<Actualizable *> actualizables)
    {

        for (auto &&actualizable : actualizables)
        {
            actualizable->Actualizar();
        }

        usleep(41000);
    }

    void Dibujar(list<Dibujo *> dibujos)
    {

        nivelSeleccionado->ConstruirNivel();
        for (auto &&dibujo : dibujos)
        {
            dibujo->Dibujar();
        }
        refresh();
    }
};

Ventana::Ventana(/* args */)
{
    getmaxyx(stdscr, this->maxy, this->maxx);
    this->nivelSeleccionado = new Nivel();
    initscr();
    noecho();
    curs_set(0);
    cbreak();
    keypad(stdscr, true);
    timeout(10);
}

Ventana::~Ventana()
{
    keypad(stdscr, false);
    endwin();
}
