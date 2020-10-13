#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont= 0;
}

void Laboratorio:: agregarComputadora(const Computadora &p)
{
    if(cont<5){
        arreglo[cont] = p;
        cont ++;
    }
    else{
        cout<< "Arreglo lleno"<< endl;
    }
}
void Laboratorio::mostrar()
{
    for (size_t i=0; i< cont; i++){
        Computadora &p= arreglo[i];
        cout<< "Nombre del equipo: "<< p.getNombre_equipo()<<endl;
        cout<< "Sistema operativo: "<< p.getSistema_operativo()<<endl;
        cout<< "Tamaño del disco duro: "<< p.getDisco_duro()<<" GB"<<endl;
        cout<< "Tamaño memoria RAM: "<< p.getMemoria_ram()<<" GB"<<endl;
        cout<< endl;
    }
}
