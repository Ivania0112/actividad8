#include "Laboratorio.h"
#include <fstream>

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
        //cout<< "Tamaï¿½o del disco duro: "<< p.getDisco_duro()<<" GB"<<endl;
        //cout<< "Tamaï¿½o memoria RAM: "<< p.getMemoria_ram()<<" GB"<<endl;
        //cout<< endl;
    }
}
void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo <<left;
        archivo <<setw(12)<<"Nombre";
        archivo <<setw(13)<<"Sistema Op.";
        archivo <<setw(6)<<"HDD";
        archivo <<setw(6)<<"RAM";
        archivo << endl;
        for (size_t i=0; i< cont; i++){
            Computadora &p= arreglo[i];
            archivo << p;

        }
    }
    archivo.close();
}
void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for (size_t i=0; i< cont; i++){
            Computadora &p= arreglo[i];
            archivo << p.getNombre_equipo()<<endl;
            archivo << p.getSistema_operativo()<<endl;
            archivo << p.getDisco_duro()<<endl;
            archivo << p.getMemoria_ram()<<endl;

        }
    }
    archivo.close();
}
void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int disco_duro, memoria_ram;
        Computadora p;

        while(true)
        {
            getline(archivo, temp);
            if (archivo.eof()){
                break;
            }
            p.setNombre_equipo(temp);

            getline(archivo, temp);
            p.setSistema_operativo(temp);

            getline(archivo, temp);
            disco_duro = stof(temp);
            p.setDisco_duro(disco_duro);

            getline(archivo, temp);
            memoria_ram = stoi(temp);
            p.setMemoria_ram(memoria_ram);

            agregarComputadora(p);
        }
    }
    archivo.close();
}
