#include <iostream>

using namespace std;

class Materia{
    public:
        void cargar();
        void mostrar();
    private:
        int numero;
        char nombreMat[40];
        int alumnos;
        int docentes;
};

void Materia::cargar(){
    cout<<"numero de materia ";
    cin>>numero;
    cout<<"nombre de la materia: ";
    cin.ignore();
    cin.getline(nombreMat,40);
    cout<<"cantidad de alumnos ";
    cin>>alumnos;
    cout<<"cantidad de docentes ";
    cin>>docentes;
    cout<<endl;
}

void Materia::mostrar(){
    cout<<"Numero: "<<numero<<endl;
    cout<<"Nombre: "<<nombreMat<<endl;
    cout<<"Cantidad de alumnos: "<<alumnos<<endl;
    cout<<"Cantidad de docentes: "<<docentes<<endl;
    cout<<endl;
}

int main(){
    Materia materias[5];
    int i;
    for(i=0;i<5;i++){
        materias[i].cargar();
    }
    for(i=0;i<5;i++){
        materias[i].mostrar();
    }
}
 /*LA UTN DE OACHECO QUIERE ALMACENAR LA INFORMACION DE LAS 18 MATERIAS DE LA CARRERA DE TUP, PARA LO CUAL
  PRECISA CARGAR LOS SIGUIENTES DATOS:

 -NUMERO DE MATERIA
 -NOMBRE DE LA MATERIA
 -CANTIDAD DE ALUMNOS
 -CANTIDAD DE DOCENTES

 ARMAR LA CLASE QUE PERMITA GUARDAR DICHA INFORMACION Y A SU VEZ, CARGARLA Y MOSTRARLA
 */
