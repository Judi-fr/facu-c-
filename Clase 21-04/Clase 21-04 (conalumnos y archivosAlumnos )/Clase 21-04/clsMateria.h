#ifndef CLSMATERIA_H_INCLUDED
#define CLSMATERIA_H_INCLUDED

class Materia{
    private:
        int numero;
        char nombre[40];
        int cantidadAlumnos;
        int cantidadDocentes;
        bool estado;
    public:
        Materia(int num = 0, const char *nom = "SIN NOMBRE", int cA=0, int cD=0);
        void setNumero(int);
        void setNombre(const char *);
        void setCantidadAlumnos(int);
        void setCantidadDocentes(int);
        void setEstado(bool);
        int getNumero();
        const char *getNombre();
        int getCantidadAlumnos();
        int getCantidadDocentes();
        bool getEstado();
        void Cargar();
        void Mostrar();
};

#endif // CLSMATERIA_H_INCLUDED
