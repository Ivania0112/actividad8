#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{
    Laboratorio l;
    l.recuperar();
    l.mostrar();
    //Computadora p02 = Computadora("Pastrie", "Windows", 500, 4);
    //Computadora p03;
    //p03.setNombre_equipo("Mikelson");
    //p03.setSistema_operativo("MacOS");
    //p03.setDisco_duro(4000);
    //p03.setMemoria_ram(8);CCC

    //Laboratorio lab;
    //lb.agregarComputadora(p02);
    //lb.agregarComputadora(p03);
    //lab << p02 << p03;
    Laboratorio lb;
    lb.recuperar();
    //cout << p02;
    //Computadora p04;
    //cin >> p04;
    //lab << p04;

    //lab.mostrar();
    //lab.respaldar_tabla();
    //lab.respaldar();

    Computadora p04;
    cin>>p04;
    lb <<p04;
    lb.mostrar();
    lb.respaldar_tabla();
    lb.respaldar();
    return 0;
}
