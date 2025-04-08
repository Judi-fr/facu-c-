using namespace std;
#include <iostream>
#include <cstring>
#include <string>
#include <utility>
#include "clsPostulante.h"
#include "clsReclutador.h"


int main()
{
    string razon;
    int cant_rechazados = 0, cant_evaluados=0;
    pair<int,int> contador;

    int edadMa, edadMi, experiencia;
    string Pocision1, Pocision2, Pocision3;

    Reclutador rec1;

    edadMi=rec1.getEdadMin();
    edadMa=rec1.getEdadMax();
    Pocision1=rec1.getPocision1();
    Pocision2=rec1.getPocision2();
    Pocision3=rec1.getPocision3();
    experiencia=rec1.getExperiencia();
    rec1.setPuestos();


    Postulante postulante1("Ezequiel", 22,"capo",2);
    ///contador = postulante1.evaluar(edadMi, edadMa, rec1.getPocision1(), rec1.getPocision2(), rec1.getPocision3(), experiencia);

    cant_evaluados+=contador.first;
    cant_rechazados+=contador.second;

    cout<<"los evaluados fueron "<<cant_evaluados<<" los rechazados fueron "<<cant_rechazados<<endl;

    postulante1.mostrarResultados();


}
