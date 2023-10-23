#pragma once
#include <list>
#include <Dibujo.hpp>


using namespace std;

class Sprite : public Dibujo
{
private:

    list<Dibujo*> frames;
    
    public : 
    Sprite(list<Dibujo*> frames)
    {
        this->frames = frames;
    }

    void Dibujar(){
        this->frames[frameActual].Dibujar();
    }
    void AvanzarCuadro(){
        
    }
    ~Sprite() {}
};
