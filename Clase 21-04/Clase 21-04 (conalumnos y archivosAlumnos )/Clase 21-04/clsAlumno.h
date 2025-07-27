#ifndef CLSALUMNO_H_INCLUDED
#define CLSALUMNO_H_INCLUDED

#include "clsFecha.h"

class Alumno{
    private:
        int legajo;
        char nombre[30];
        char apellido[30];
        Fecha fechaNacimiento;
        Fecha fechaIngreso;
        char email[40];
        bool estado;
    public:
        void setLegajo(int);
        void setEmail(const char *);
        void setFechaNacimiento(Fecha);
        int getLegajo();
        Fecha getFechaNacimiento();
        Fecha getFechaIngreso();
        bool getEstado();
        void Cargar();
        void Mostrar();
};

#endif // CLSALUMNO_H_INCLUDED
