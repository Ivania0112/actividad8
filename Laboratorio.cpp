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
    cout <<left;
    cout <<setw(12)<<"Nombre";
    cout <<setw(13)<<"Sistema Op.";
    cout <<setw(6)<<"HDD";
    cout <<setw(6)<<"RAM";
    cout << endl;
    for (size_t i=0; i< cont; i++){
        Computadora &p= arreglo[i];
        cout << p;
        //cout<< "Nombre del equipo: "<< p.getNombre_equipo()<<endl;
        //cout<< "Sistema operativo: "<< p.getSistema_operativo()<<endl;
        //cout<< "Tama�o del disco duro: "<< p.getDisco_duro()<<" GB"<<endl;
        //cout<< "Tama�o memoria RAM: "<< p.getMemoria_ram()<<" GB"<<endl;
        //cout<< endl;
    }
}
