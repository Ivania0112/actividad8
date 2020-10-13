#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;
class Computadora
{
    private:
        string nombre_equipo;
        string sistema_operativo;
        int disco_duro;
        int memoria_ram;
    public:
        Computadora();
        Computadora(const string &nombre_equipo, const string &sistema_operativo, int disco_duro, int memoria_ram);

        void setNombre_equipo(const string &v);
        string getNombre_equipo();
        void setSistema_operativo(const string &v);
        string getSistema_operativo();
        void setDisco_duro(int v);
        int getDisco_duro();
        void setMemoria_ram(int v);
        int getMemoria_ram();

};

#endif // COMPUTADORA_H
