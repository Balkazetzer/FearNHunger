#include <iostream>
#include <cstdio>
#include <Nivel.hpp>
#include <string>

using namespace std;


class Mapa
{
private:
string ruta;
public:
  Mapa(/* args */);

  string ruta;

  string GetRuta(){
    return this-> ruta;
  }
  ~Mapa();
};

Mapa::Mapa(/* args */)
{
}

Mapa::~Mapa()
{
}
