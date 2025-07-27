#include <iostream>
using namespace std;

#include "Examen.h"
#include "ServicioMesa.h"
#include "ArchivoServicioMesa.h"

void Examen::EjemploDeListado(){
   ArchivoServicioMesa archivo("restaurant.dat");
   ServicioMesa registro;

   int i, cantidadRegistros = archivo.CantidadRegistros();
   for(i = 0; i < cantidadRegistros; i++){
      registro = archivo.Leer(i);
      cout << registro.toCSV() << endl;
   }
}

void Examen::Punto1(){
    ///1) Listar la cantidad de servicios de mesa que fueron valorados
    /// con un puntaje mayor al puntaje promedio

    ArchivoServicioMesa archivo("restaurant.dat");
    ServicioMesa registro;
    int cantidadRegistros = archivo.CantidadRegistros();
    float promedio=0;

    for(int i =0;i<cantidadRegistros;i++){
        registro=archivo.Leer(i);
        promedio+=registro.getPuntajeObtenido();
    }
    promedio= promedio/cantidadRegistros;

    int i=0,rta=0;
    while(i<cantidadRegistros){
        registro=archivo.Leer(i);
        if(registro.getPuntajeObtenido()>promedio){
            rta++;
        }
        i++;
    }
    cout<<"La cantidad de servicios con mayor puntaje que el promedio es de "<<rta<<endl;

}

void Examen::Punto2(){
    ///2) Listar el número de plato que recaudó mayor cantidad de dinero
    ArchivoServicioMesa archivo("restaurant.dat");
    int cantidadRegistros = archivo.CantidadRegistros();
    ServicioMesa registro;

    int platos[1000]={};
    for(int i=0;i<cantidadRegistros;i++){
        int nPlato;
        registro=archivo.Leer(i);
        nPlato=registro.getIDPlato();
        platos[nPlato]+=registro.getImporte();

    }
    int MayorImporte=0, MayorNum;
    for(int x=0;x<cantidadRegistros;x++){

        if(platos[x]>MayorImporte){
            MayorImporte=platos[x];
            MayorNum=x;
        }
    }
    cout<<MayorNum;

}

void Examen::Punto3(){
    ///Listar el número de mozo que recibió mayor cantidad total de propinas en el año 2024


}
