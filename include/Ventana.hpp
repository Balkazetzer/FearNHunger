#include <curses.h>
#include <unistd.h>
#include <list>

using namespace std;

class Ventana
{
private:
    /* data */
public:
    Ventana(/* args */);
    ~Ventana();

    void Actualizar(list<Actualizable *> actualizables)
    {

        for (auto &&actualizable : actualizables)
        {
            actualizable->Actualizar();
        }

        usleep(41000);
    }

    void Dibujar(list<Dibujo *> dibujos)
    {
        clear();
        for (auto &&dibujo : dibujos)
        {
            dibujo->Dibujar();
        }
        box(stdscr, '|', '-');
        refresh();
    }
};

Ventana::Ventana(/* args */)
{
    initscr();
    noecho();
    curs_set(FALSE);
    cbreak();
    keypad(stdscr, true);
    timeout(10);
}

Ventana::~Ventana()
{
    keypad(stdscr, false);
    endwin();
}
