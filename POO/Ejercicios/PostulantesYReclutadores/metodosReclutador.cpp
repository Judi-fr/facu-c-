#include <iostream>
#include "clsReclutador.h"

using namespace std;


void Reclutador::setEdadMin(){
    int edad;
    cin>>edad;
    _edad_minima = edad;
}

void Reclutador::setEdadMax(){
    int edad;
    cin>>edad;
    _edad_maxima = edad;
}

void Reclutador::setExperiencia(){
    int experiencia;
    cin>>experiencia;
    _experiencia_minima = experiencia;
}

void Reclutador::setPuestos(){
    int opcion;
    while(opcion!=0){
        string aux;
        cout<<"1. Puesto: "<<_pocision1<<endl;
        cout<<"2. Puesto: "<<_pocision2<<endl;
        cout<<"3. Puesto: "<<_pocision3<<endl;
        cout<<"Deseas cambiar un puesto? (1/3) "<<endl;
        cout<<"Ingresa 0 para salir. "<<endl<<endl;
        cout<<"Ingrese un numero (0/3) ";
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Nueva Pocision: ";
                cin>>aux;
                _pocision1=aux;
                break;
            case 2:
                cout<<"Nueva Pocision: ";
                cin>>aux;
                _pocision2=aux;
                break;
            case 3:
                cout<<"Nueva Pocision: ";
                cin>>aux;
                _pocision3=aux;
                break;
        }
        system("cls");
    }

}

int Reclutador::getExperiencia(){
    return _experiencia_minima;
}

int Reclutador::getEdadMax(){
    return _edad_maxima;
}

int Reclutador::getEdadMin(){
    return _edad_minima;
}

string Reclutador::getPocision1(){
    return _pocision1;
}
string Reclutador::getPocision2(){
    return _pocision2;
}
string Reclutador::getPocision3(){
    return _pocision3;
}
