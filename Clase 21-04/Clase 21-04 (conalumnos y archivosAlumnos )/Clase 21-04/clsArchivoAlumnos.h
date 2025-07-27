#ifndef CLSARCHIVOALUMNOS_H_INCLUDED
#define CLSARCHIVOALUMNOS_H_INCLUDED

#include "clsAlumno.h"

class ArchivoAlumnos{
    private:
        char nombre[40];
    public:
        ArchivoAlumnos(const char *n = "Alumnos.dat");
        Alumno leerRegistro(int);
        bool grabarRegistro(Alumno);
        int buscarRegistro(int);
        int contarRegistros();
        bool modificarRegistro(Alumno, int);
        bool limpiar();
};

#endif // CLSARCHIVOALUMNOS_H_INCLUDED
