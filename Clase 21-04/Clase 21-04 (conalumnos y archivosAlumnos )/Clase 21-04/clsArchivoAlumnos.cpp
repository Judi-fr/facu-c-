#include <cstring>
#include <iostream>
#include "clsArchivoAlumnos.h"

ArchivoAlumnos::ArchivoAlumnos(const char *n){
    strcpy(nombre, n);
}

Alumno ArchivoAlumnos::leerRegistro(int pos){
    FILE *p=fopen(nombre, "rb");
    Alumno obj;
    obj.setLegajo(-1);
    if(p == nullptr){
        obj.setLegajo(-2);
        return obj;
    }
    fseek(p, pos * sizeof obj, 0);
    fread(&obj, sizeof obj, 1, p);
    fclose(p);
    return obj;
}

bool ArchivoAlumnos::grabarRegistro(Alumno obj){
    FILE *p = fopen(nombre, "ab");
    if(p == nullptr){
        return false;
    }
    bool escribio=fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

int ArchivoAlumnos::buscarRegistro(int leg){
    int cantReg = contarRegistros();
    Alumno obj;
    for(int i=0; i<cantReg; i++){
        obj = leerRegistro(i);
        if(obj.getLegajo() == leg){
            return i;
        }
    }
    return -1;
}

int ArchivoAlumnos::contarRegistros(){
    FILE *p=fopen(nombre, "rb");
    if(p == nullptr){
        return -1;
    }
    fseek(p, 0, 2);
    int tam = ftell(p);
    fclose(p);
    return tam/sizeof(Alumno);
}

bool ArchivoAlumnos::modificarRegistro(Alumno obj, int pos){
    FILE *p = fopen(nombre, "rb+");
    if(p == nullptr){
        return false;
    }
    fseek(p, pos * sizeof obj, 0);
    bool escribio = fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoAlumnos::limpiar(){
    FILE *p = fopen(nombre, "wb");
    if(p == nullptr) return false;
    fclose(p);
    return true;
}
