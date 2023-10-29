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
    Mapa* mapa = new Mapa("m1.txt"); 
public:
    Nivel(){}

    void ConstruirNivel(){
        string ruta = "./docs/mapas/";
        mapa->DibujarMapa(ruta);
    }
    ~Nivel();
};
