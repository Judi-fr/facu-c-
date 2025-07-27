#include <iostream>
using namespace std;

#include "Examen.h"
#include "Servicio.h"
#include "ArchivoServicio.h"

void Examen::EjemploDeListado(){
   ArchivoServicio archivo("taller.dat");
   Servicio registro;

   int i, cantidadRegistros = archivo.CantidadRegistros();
   for(i = 0; i < cantidadRegistros; i++){
      registro = archivo.Leer(i);
      cout << registro.toCSV() << endl;
   }
}



void Examen::Punto1(){
    cout<<endl<<"punto 1:"<<endl;
    ArchivoServicio archivo("taller.dat");
    Servicio registro;


    int i,x=0,idReparacion, cantidadRegistros = archivo.CantidadRegistros();
    float minimo=10.0;
    for(i=0;i<cantidadRegistros;i++){
        registro=archivo.Leer(i);
        if(registro.getCalificacion() < minimo){
            minimo=registro.getCalificacion();
        }
    }
    cout<<"la calificacion minima fue de "<<minimo<<endl;
    for(int i=0;i<1000;i++){
        registro=archivo.Leer(i);
        if(registro.getCalificacion()== minimo){
            cout<<"Id reparacion: "<<registro.getIDReparacion()<<endl;
        }
    }



}

void Examen::Punto2(){
    ArchivoServicio archivo("taller.dat");
    Servicio registro;
    int cantidadRegistros = archivo.CantidadRegistros();
    cout<<endl<<"Punto 2: "<<endl;
    int i,empleados[20]={};
    for(i=0;i<cantidadRegistros;i++){
        registro=archivo.Leer(i);
        empleados[registro.getIDPersonal()-1]+=1;
    }
    int maximo=0,id;
    for(i=0;i<20;i++){
        if(empleados[i]>maximo){
            maximo=empleados[i];
            id=i+1;
        }
        cout<<empleados[i]<<endl;
    }
    cout<<"el empleado con mayor cantidad de servicios prestados fue el "<<id<<" con "<<empleados[id-1]<<" servicios prestados"<<endl;
}
void Examen::Punto3(){
    cout<<endl<<"Punto 3: "<<endl;
    ArchivoServicio archivo("taller.dat");
    Servicio registro;
    int cantidadRegistros = archivo.CantidadRegistros();
    Fecha fecha;
    int idReparacion[70]={};

    for(int i=0;i<cantidadRegistros;i++){
        registro=archivo.Leer(i);
        fecha=registro.getFecha();
        if(fecha.getAnio()==2024){
            idReparacion[registro.getIDReparacion()]+=1;
        }
    }
    cout<<"los id de reparacion excluidos de la lista no fueron hechos en el anio 2024"<<endl;
    for(int x=0;x<70;x++){
        if(idReparacion[x]!=0){
            cout<<"id de reparacion "<<x+1<<" tuvo "<<idReparacion[x]<<" servicios en ese anio."<<endl;
        }
    }
}
