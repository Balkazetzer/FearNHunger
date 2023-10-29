#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Jugador : public Dibujo, public Actualizable
{
private:
    Mapa &mapa;

public:
    Jugador(Mapa &mapa) : Dibujo("sprites/charsprites/charf1"), mapa(mapa)
    {
    }
    Jugador(int x, int y, Mapa &mapa) : Dibujo(x, y, "sprites/charsprites/charf1"), mapa(mapa)
    {
    }
    void Actualizar()
    {
        // this->x += 2;
        // this->y += 1;
    }

    void DesplazarIzquierda()
    {
        if (mapa.EspacioVacio(this->x - 1, this->y))
        {
            this->x -= 1;
        }
    }

    void DesplazarDerecha()
    {
        if (mapa.EspacioVacio(this->x + 1, this->y))
        {
            this->x += 1;
        }
    }

    void DesplazarAbajo()
    {
        if (mapa.EspacioVacio(this->x, this->y + 1))
        {
            this->y += 1;
        }
    }

    void DesplazarArriba()
    {
        if (mapa.EspacioVacio(this->x, this->y - 1))
        {
            this->y -= 1;
        }
    }

    ~Jugador();
};
