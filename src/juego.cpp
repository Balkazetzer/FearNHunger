#include <curses.h>
#include <iostream>
#include <fstream>
#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <list>
#include <Jugador.hpp>
#include <Actualizable.hpp>
#include <PantallaInicio.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    initscr();
    int rows, cols;
    bool sizescr;
    getmaxyx(stdscr, rows, cols);
    fstream pinicio;

    Ventana ventana;
    sizescr = ventana.Comprobar(rows, cols);
    // COMPRUEBA TAMAÑO SUFICIENTE
    if (sizescr == true)
    {

        Jugador *chara = new Jugador(3, 3);
        PantallaInicio *inicio = new PantallaInicio();

        list<Dibujo *> dibujos;
        dibujos.push_back(chara);

        list<Actualizable *> actualizables;
        actualizables.push_back(chara);

        list<Dibujo *> fondos;
        fondos.push_back(inicio);
        char key, st;

        do
        {

            do
            {

                ventana.Dibujar(fondos);
                st = getch();

            } while (st != 'q' && st != 'Q' && st != 's' && st != 'S');
            ventana.Actualizar(actualizables);
            // PANTALLA DE INICIO
            ventana.Dibujar(dibujos);

            key = getch();

            // INICIALIZAR MAPA

            // COMANDOS DE MOVIMIENTO
            switch (key)
            {
            case 'q':
                endwin();
                return 0;
                break;

            case 'a':
                chara->DesplazarIzquierda();
                break;

            case 'd':
                chara->DesplazarDerecha();
                break;

            case 'w':
                chara->DesplazarArriba();
                break;

            case 's':
                chara->DesplazarAbajo();
                break;
            }

        } while (true);
    }
    else
    {
        cout << "Por favor aumenta el tamaño de la terminal a un mínimo de 30 x 30 " << endl;
        sleep(3);
        endwin();
    }
    return 0;
}
