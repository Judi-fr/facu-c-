#include <iostream>
#include <cstring>
#include "clsMateria.h"
#include "funciones.h"

using namespace std;

Materia::Materia(int num, const char *nom, int cA, int cD){
    numero = num;
    strcpy(nombre, nom);
    cantidadAlumnos = cA;
    cantidadDocentes = cD;
}

void Materia::setNumero(int n){
    numero = n;
}

void Materia::setNombre(const char *n){
    strcpy(nombre, n);
}
void Materia::setCantidadAlumnos(int cA){
    cantidadAlumnos = cA;
}
void Materia::setCantidadDocentes(int cD){
    cantidadDocentes = cD;
}
void Materia::setEstado(bool e){
    estado = e;
}
int Materia::getNumero(){
    return numero;
}
const char* Materia::getNombre(){
    return nombre;
}
int Materia::getCantidadAlumnos(){
    return cantidadAlumnos;
}
int Materia::getCantidadDocentes(){
    return cantidadDocentes;
}
bool Materia::getEstado(){
    return estado;
}
void Materia::Cargar(){
    cout<<"INGRESE EL NUMERO DE MATERIA: ";
    cin>>numero;
    cout<<"INGRESE EL NOMBRE DE LA MATERIA: ";
    cargarCadena(nombre, 39);
    cout<<"INGRESE LA CANTIDAD DE ALUMNOS: ";
    cin>>cantidadAlumnos;
    cout<<"INGRESE LA CANTIDAD DE DOCENTES: ";
    cin>>cantidadDocentes;
    estado=true;
}

void Materia::Mostrar(){
    if(estado){
        cout<<"NUMERO DE MATERIA: "<<numero<<endl;
        cout<<"NOMBRE: "<<nombre<<endl;
        cout<<"CANTIDAD DE ALUMNOS: "<<cantidadAlumnos<<endl;
        cout<<"CANTIDAD DE DOCENTES: "<<cantidadDocentes<<endl<<endl;
    }
}
