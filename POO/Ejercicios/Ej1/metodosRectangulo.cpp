#include <iostream>
#include "clsRectangulo.h"


using namespace std;

void Rectangulo::setBase(){
    int v;
    cin>>v;
    _base = v;
}
int Rectangulo::getBase(){
    return _base;
}
void Rectangulo::setAltura(){
    int v;
    cin>>v;
    _altura = v;
}
int Rectangulo::getAltura(){
    return _altura;
}

int Rectangulo::calcularArea(){
    int area;
    if(_base!=0 && _altura!=0){
        return area=_base*_altura;
    }
    else{
        cout<<"Ingrese la base/altura antes de calcular el area"<<endl;
    }
}

int Rectangulo::calcularPerimetro(){
    int perimetro;
    if(_base!=0 && _altura!=0){
        return perimetro=2*(_base+_altura);
    }
    else{
        cout<<"Ingrese la base/altura antes de calcular el perimetro"<<endl;
    }
}
