#include <iostream>
#include "Laboratorio.h"

using namespace std;

int main()
{
    Computadora p02 = Computadora("Pastrie", "Microsoft Windows", 500, 4);
    Computadora p03;
    p03.setNombre_equipo("Mikelson");
    p03.setSistema_operativo("MacOS");
    p03.setDisco_duro(4000);
    p03.setMemoria_ram(8);

    Laboratorio lb;
    lb.agregarComputadora(p02);
    lb.agregarComputadora(p03);

    lb.mostrar();

    return 0;
}
