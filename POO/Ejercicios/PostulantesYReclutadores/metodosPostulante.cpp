#include "clsPostulante.h"
#include "clsReclutador.h"
#include <iostream>
#include <utility>


///Postulante::Postulante(string nombre, int edad, string puesto, int experiencia){
   /// _nombre=nombre;
    ///_edad = edad;
    ///_puesto = puesto;
    ///_experiencia =experiencia;

///}

void Postulante::cargar(){
    cout<<"Nombre: ";
    cin>>_nombre;
    cout<<"Edad: ";
    cin>>_edad;
    cout<<"Puesto: ";
    cin>>_puesto;
    cout<<"Experiencia: ";
    cin>>_experiencia;
}

pair<int,int> Postulante::evaluar(int edadMin, int edadMax, string puesto1, string puesto2, string puesto3, int experiencia){
    int contador = 0;
    string razon = "";       ///si se activa algun if se va a sumar la razon por la que el postulante no paso la evaluacion
    _evaluacion = "paso";    ///si se activa algun if se va a pisar "paso" por un "no paso"

    if(!( _edad >= edadMin && _edad <= edadMax )){
        _evaluacion = "no paso";
        _razon += "- no cumple con la edad deseada. \n";
        contador = 1;
    }
    if(!( _experiencia >= experiencia )){
        _evaluacion = "no paso";
        _razon += "- no cumple con la experiencia necesaria. \n";
        contador = 1;
    }
    if( _puesto != puesto1 && _puesto != puesto2 && _puesto != puesto3 ){
        _evaluacion = "no paso";
        _razon += "- la pocision que pide no esta disponible \n";
        contador = 1;
    }
    return {1,contador};  /// el numero 1 representa a 1 postulante evaluado.
                          /// el "contador" representa si paso o no paso la evaluacion con valor 1 o 0

}

void Postulante::mostrarResultados(){
    if( _evaluacion == "sin evaluar" ){
        cout<<_nombre<<" todavia no fue evaluado."<<endl;
        system("pause"); ///espera a que se presione una tecla para continuar
        return;
    }
    if( _evaluacion == "no paso" ){
        cout<<_nombre<<" "<<_evaluacion<<" por lo siguiente: "<<endl<<_razon<<endl;
        system("pause");   ///espera a que se presione una tecla para continuar
        return;
    }
    cout<<endl<<_nombre<<" "<<_evaluacion<<" la evaluacion."<<endl;
}

void Postulante::mostrarValores(){
    cout<<_nombre<<endl;
    cout<<_edad<<endl;
    cout<<_puesto<<endl;
    cout<<_experiencia<<endl;
}
