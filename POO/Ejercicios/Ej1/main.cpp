#include <iostream>
#include "clsRectangulo.h"

/*
1
Crea una clase llamada Rectangulo que represente un rectángulo. La clase debe tener dos atributos correspondientes a la base y altura.
Implementa las siguientes metodos:
Getters y Setter de cada atributo.
calcularArea(): Devuelve el área del rectángulo.
calcularPerimetro(): Devuelve el perímetro del rectángulo.
*/
using namespace std;
///RESUELTO
///MANGA DE COQUEMONE

int main()
{
    Rectangulo rectangulito;
    rectangulito.setAltura();
    rectangulito.setBase();
    cout<<rectangulito.getAltura()<<endl;
    cout<<rectangulito.getBase()<<endl;
    Rectangulo rectangulito1;
    rectangulito1.setAltura();
    rectangulito1.setBase();
    cout<<rectangulito1.getAltura()<<endl;
    cout<<rectangulito1.getBase()<<endl;
    cout<<"Area: "<<rectangulito.calcularArea()<<endl;
    cout<<"Perimetro: "<<rectangulito1.calcularPerimetro()<<endl;

}
