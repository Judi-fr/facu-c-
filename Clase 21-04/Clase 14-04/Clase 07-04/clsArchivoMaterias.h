#ifndef CLSARCHIVOMATERIAS_H_INCLUDED
#define CLSARCHIVOMATERIAS_H_INCLUDED

#include "clsMateria.h"

class ArchivoMaterias{
    private:
        char nombre[40];
    public:
        ArchivoMaterias(const char *n = "Materias.dat");
        Materia leerRegistro(int);
        bool grabarRegistro(Materia);
        int buscarRegistro(int);
        int contarRegistros();
        bool modificarRegistro(Materia, int);
        bool limpiar();
};

#endif // CLSARCHIVOMATERIAS_H_INCLUDED
