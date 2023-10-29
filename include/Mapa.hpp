#include <iostream>
#include <fstream>
#include <Nivel.hpp>
#include <string>
#include <Dibujo.hpp>

using namespace std;

class Mapa : public Dibujo
{
private:
  string stage;

public:
  Mapa(string stage)
  {
    this->stage = stage;
  }

  void DibujarMapa(string ruta)
  {
    string map = this->stage;
    string archivo = ruta + map; 

    ifstream file(archivo);
    if (!file.is_open())
    {
        cerr << "No se pudo abrir el archivo del mapa: " << archivo << endl;
        return;
    }

    string linea;
    while (getline(file, linea))
    {
        cout << linea << endl;
    }

    file.close();
  }

  ~Mapa() {}
};
