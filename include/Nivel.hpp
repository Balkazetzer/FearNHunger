#pragma once

#include <curses.h>
#include <unistd.h>
#include <ncurses.h>
#include <list>
#include <Actualizable.hpp>
#include <Dibujo.hpp>
#include <fstream>
#include <Mapa.hpp>
#include <iostream>
#include <string>

using namespace std;

class Nivel : public Dibujo
{
private:
    int nivel;
    Mapa* mapa;
public:
    Nivel(){}

    void CargarMapa(Mapa* mapa, int niv, int secc){
        string ruta;

        switch(niv){

            case 1:

            ruta = mapa->ruta;
            
            switch (secc)
            {
            case   1:

                break;
            
            default:

                break;
            }
            break;

            default:
            break;

        }
    }
    ~Nivel();
};
