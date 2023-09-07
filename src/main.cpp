#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{

    std::cout << "Hola Mundo" << std::endl;
    std::cout << "int" << sizeof(int) << std::endl;
    std::cout << "char" << sizeof(char) << std::endl;
    std::cout << "bool" << sizeof(bool) << std::endl;
    std::cout << "float" << sizeof(float) << std::endl;
    std::cout << "double" << sizeof(double) << std::endl;
    std::cout << "Mascota" << sizeof(Mascota) << std::endl;

    void *puntero = malloc(32);
    std::cout << "puntero " << puntero << std::endl;
    // Mascota en C
    Mascota *mascotac = (Mascota *)malloc(sizeof(Mascota));
    mascotac->Inicializar();
    mascotac->DecirNombre();
    mascotac->Destruir();
    free(mascotac);

    // Mascota en C++
    Mascota *mascotacpp = new Mascota(2);
    mascotacpp->DecirNombre();
    mascotacpp->~Mascota();
    free(mascotacpp);

    free(puntero);
    return 0;
}


// Crear un archivo en Include para cada clase de los diagramas UML 
// Crear Jueco cpp para la lógica del juego