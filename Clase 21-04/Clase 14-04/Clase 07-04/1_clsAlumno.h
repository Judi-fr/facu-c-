#ifndef CLSALUMNO_H_INCLUDED
#define CLSALUMNO_H_INCLUDED

class Alumno{
    private:
        int _legajo;
        char nombre[];
        char apellido[];
        int dia;
        int mes;
        int anio;
        char email[];
    public:
        Alumno::Alumno(int , const char *,const char *,int ,int ,int , const char *);


};




#endif // CLSALUMNO_H_INCLUDED
