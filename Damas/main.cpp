#include <iostream>
#include <vector>
#include "Tablero.h"
using namespace std;

int main()
{

    Tablero Tab(6);
    Tab.PrintTablero();
    bool turno=0;
    while (!Tab.Fin)
    {
        cout<<endl<<"El turno es de: "<<turno<<endl;
        Tab.Jugar(turno);
    }
    cout << endl << "Hello world!" << endl;
    return 0;
}

    /*
    Tab.Jugador1[0]->posx=3;
    Tab.Jugador1[0]->posy=3;
    cout<<endl<<"new Tablero"<<endl;
    Tab.PrintTablero();
    cout<<endl;
    Tablero Tab2(5);
    Tab2=Tab;
    cout<<endl<<"new tab2"<<endl;
    Tab2.PrintTablero();
    cout<<endl<<"tablero 1"<<endl;
    Tab.Jugador1[0]->posx=0;
    Tab.Jugador1[0]->posy=0;
    Tab.PrintTablero();
    cout<<endl<<"new tab2"<<endl;
    Tab2.PrintTablero();*/
