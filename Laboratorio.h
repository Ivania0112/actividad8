#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "Computadora.h"

class Laboratorio
{
    private:
        Computadora arreglo[5];
        size_t cont;

    public:
        Laboratorio();
        void agregarComputadora(const Computadora &p);
        void mostrar();
};

#endif // LABORATORIO_H
