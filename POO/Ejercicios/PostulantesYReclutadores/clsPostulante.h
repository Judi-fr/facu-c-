#ifndef CLSPOSTULANTE_H_INCLUDED
#define CLSPOSTULANTE_H_INCLUDED
#include <string>
using namespace std;

class Postulante{
    private:
        int _edad;
        int _experiencia;
        string _nombre;
        string _puesto;
        string _evaluacion="sin evaluar"; ///    sin evaluar / paso / no paso
        string _razon;

    public:
        Postulante(string , int , string , int );
        pair<int,int> evaluar(int ,int , string ,string ,string , int );
        void mostrarResultados();

};


#endif // CLSPOSTULANTE_H_INCLUDED
