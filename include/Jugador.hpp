#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Jugador : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Jugador() : Dibujo("sprites/charsprites/charf1"){

    }
    Jugador(int x, int y) : Dibujo(x, y, "sprites/charsprites/charf1")
    {
        
    }
    void Actualizar()
    {
        // this->x += 2;
        // this->y += 1;
    }

    void DesplazarIzquierda()
    {
        this->x -= 1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }
    void DesplazarAbajo(){
        this->y += 1;
    }
    void DesplazarArriba(){
        this->y -= 1;
    }

    ~Jugador();
};
