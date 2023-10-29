#include <iostream>
#include <fstream>
#include <vector>
#include <Nivel.hpp>
#include <string>
#include <Dibujo.hpp>

using namespace std;

class Mapa : public Dibujo
{
private:
    string stage;
    vector<vector<char>> mundo; 

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
            vector<char> fila(linea.begin(), linea.end());
            mundo.push_back(fila);
            cout << linea << endl;
        }

        file.close();
    }

    bool EspacioVacio(int x, int y)
    {
        if(y < 0 || y >= mundo.size() || x < 0 || x >= mundo[0].size())
        {
            return false;
        }

        return mundo[y][x] == ' ';
    }

    ~Mapa() {}
};
