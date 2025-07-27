#include <cstring>
#include <iostream>
#include "clsArchivoMaterias.h"

ArchivoMaterias::ArchivoMaterias(const char *n){
    strcpy(nombre, n);
}

Materia ArchivoMaterias::leerRegistro(int pos){
    FILE *p=fopen(nombre, "rb");
    Materia obj;
    obj.setNumero(-1);
    if(p == nullptr){
        obj.setNumero(-2);
        return obj;
    }
    fseek(p, pos * sizeof obj, 0);
    fread(&obj, sizeof obj, 1, p);
    fclose(p);
    return obj;
}

bool ArchivoMaterias::grabarRegistro(Materia obj){
    FILE *p = fopen(nombre, "ab");
    if(p == nullptr){
        return false;
    }
    bool escribio=fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

int ArchivoMaterias::buscarRegistro(int num){
    int cantReg = contarRegistros();
    Materia obj;
    for(int i=0; i<cantReg; i++){
        obj = leerRegistro(i);
        if(obj.getNumero() == num){
            return i;
        }
    }
    return -1;
}

int ArchivoMaterias::contarRegistros(){
    FILE *p=fopen(nombre, "rb");
    if(p == nullptr){
        return -1;
    }
    fseek(p, 0, 2);
    int tam = ftell(p);
    fclose(p);
    return tam/sizeof(Materia);
}

bool ArchivoMaterias::modificarRegistro(Materia obj, int pos){
    FILE *p = fopen(nombre, "rb+");
    if(p == nullptr){
        return false;
    }
    fseek(p, pos * sizeof obj, 0);
    bool escribio = fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoMaterias::limpiar(){
    FILE *p = fopen(nombre, "wb");
    if(p == nullptr) return false;
    fclose(p);
    return true;
}
