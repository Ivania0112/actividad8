#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{
    Computadora p02 = Computadora("Pastrie", "Windows", 500, 4);
    Computadora p03;
    p03.setNombre_equipo("Mikelson");
    p03.setSistema_operativo("MacOS");
    p03.setDisco_duro(4000);
    p03.setMemoria_ram(8);

    Laboratorio lab;
    //lb.agregarComputadora(p02);
    //lb.agregarComputadora(p03);
    lab << p02 << p03;


    //cout << p02;
    Computadora p04;
    cin >> p04;
    lab << p04;
    lab.mostrar();

    return 0;
}
