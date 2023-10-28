#include <curses.h>
#include <iostream>
#include <fstream>
#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <list>
#include <Jugador.hpp>
#include <Actualizable.hpp>
#include <PantallaInicio.hpp>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    initscr();
    noecho(); // Desactiva el eco de los caracteres de entrada
    int rows, cols;
    bool sizescr;
    getmaxyx(stdscr, rows, cols);
    string dimensiones = "dimensiones de la pantalla " + to_string(rows) +"x, "+ to_string(cols) + "y";
    fstream pinicio;

    Ventana ventana;
    sizescr = ventana.Comprobar(rows, cols);
    // COMPRUEBA TAMAÑO SUFICIENTE
    if (sizescr == true)
    {

        Jugador *chara = new Jugador(3, 3);
        PantallaInicio *inicio = new PantallaInicio(rows, cols);

        list<Dibujo *> dibujos;
        dibujos.push_back(chara);

        list<Actualizable *> actualizables;
        actualizables.push_back(chara);

        list<Dibujo *> pantallas;
        pantallas.push_back(inicio);
        char key, st;

        do
        {
            // PANTALLA DE INICIO
            ventana.Dibujar(pantallas);
            refresh();
            mvprintw(15, 5, "PRESIONA S PARA EMPEZAR EL JUEGO O CUALQUIER OTRA TECLA PARA SALIR");
            mvprintw(30, 5, dimensiones.c_str());
            refresh(); 
            cin >> st;

            if (st == 's' || st == 'S') // CORRER JUEGO
            {
                while (true)
                {
                    cin.ignore();
                    key = getch();

                    // INICIALIZAR MAPA

                    // COMANDOS DE MOVIMIENTO
                    switch (key)
                    {
                    case 'q':
                    case 'Q':
                    case 27: 
                        endwin();
                        return 0;

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

                    ventana.Actualizar(actualizables);
                    ventana.Dibujar(dibujos);
                    refresh();
                }
            }
            else // CERRAR JUEGO
            {

                clear();
                refresh();
                printw("SALIENDO \n");
                for (int i = 0; i < 3; i++)
                {
                    printw(".\n"); 
                    sleep(1);
                    refresh();
                }
                clear();
                refresh();
                sizescr = false;
                endwin();
                return 0;
            }
        } while (sizescr); // Modifica la condición del bucle a sizescr
    }
    else
    {
        printw("Por favor aumenta el tamaño de la terminal a un mínimo de 30 x 30 \n"); // Usa printw en lugar de cout
        sleep(3);
        endwin();
        return 0;
    }
    return 0;
}
