#ifndef CLSRECLUTADOR_H_INCLUDED
#define CLSRECLUTADOR_H_INCLUDED
#include <string>
using namespace std;


class Reclutador{
    private:
        int _edad_minima = 22;
        int _edad_maxima = 50;
        int _experiencia_minima = 2;
        string _pocision1 = "Programador";
        string _pocision2 = "Tester";
        string _pocision3 = "Diseñador";

    public:
        void setEdadMin();
        void setEdadMax();
        void setExperiencia();
        void setPuestos();

        int getEdadMax();
        int getEdadMin();
        int getExperiencia();
        string getPocision1();
        string getPocision2();
        string getPocision3();
};


#endif // CLSRECLUTADOR_H_INCLUDED
