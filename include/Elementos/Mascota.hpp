#include <iostream>
#include <cstdio>

class Mascota
{
private:
    std::string nombre;
    int edad;

public:
    Mascota(int edad)
    {
        this->nombre = "Chorizo";
        this->edad = edad;
        std::cout << "Ha nacido una nueva mascota." << std::endl;
    }
    ~Mascota()
    {
        std::cout << "Adios Mundo Cruel" << std::endl;
    }

    void DecirNombre()
    {
        std::cout << "Mi nombre es " << this->nombre << std::endl;
    }

    void Inicializar()
    {

        std::cout << "Ha nacido una nueva mascota" << std::endl;
        this->nombre = "Chori";
    }

    void Destruir()
    {

        std::cout << "Adios mundo cruel" << std::endl;
    }

    void Comer()
    {
        std::cout << "Estoy comiendo" << std::endl;
    }
};