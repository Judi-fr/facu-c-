#include <iostream>
#include <cstring>
#include "clsAlumno.h"
#include "funciones.h"

using namespace std;

void Alumno::setLegajo(int l){
    legajo = l;
}
void Alumno::setFechaNacimiento(Fecha f){
    fechaNacimiento = f;
}

void Alumno::setEmail(const char *e){
    strcpy(email, e);
}

int Alumno::getLegajo(){
    return legajo;
}

Fecha Alumno::getFechaNacimiento(){
    return fechaNacimiento;
}

Fecha Alumno::getFechaIngreso(){
    return fechaIngreso;
}

bool Alumno::getEstado(){
    return estado;
}

void Alumno::Cargar(){
    cout<<"INGRESE EL LEGAJO: ";
    cin>>legajo;
    cout<<"INGRESE EL NOMBRE: ";
    cargarCadena(nombre, 29);
    cout<<"INGRESE EL APELLIDO: ";
    cargarCadena(apellido, 29);
    cout<<"INGRESE LA FECHA DE NACIMIENTO:"<<endl;
    fechaNacimiento.Cargar();
    cout<<"INGRESE LA FECHA DE INGRESO:"<<endl;
    fechaIngreso.Cargar();
    cout<<"INGRESE EL EMAIL: ";
    cin>>email;
    estado = true;
}

void Alumno::Mostrar(){
    cout<<"LEGAJO: "<<legajo<<endl;
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"APELLIDO: "<<apellido<<endl;
    cout<<"FECHA DE NACIMIENTO: ";
    fechaNacimiento.Mostrar();
    cout<<endl;
    cout<<"FECHA DE INGRESO: ";
    fechaIngreso.Mostrar();
    cout<<endl;
    cout<<"EMAIL: "<<email<<endl;
}
