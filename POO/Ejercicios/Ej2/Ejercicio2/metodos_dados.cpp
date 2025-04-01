#include <iostream>
#include "clsDado.h"
#include <cstdlib>
#include <ctime>

using namespace std;



Dado::Dado(){
    int numero_aleatorio;
    srand(time(0));
    numero_aleatorio = rand()%6+1;
    valor=numero_aleatorio;
}
void Dado::Lanzar(){
    int numero_aleatorio;
    srand(time(0));
    numero_aleatorio = rand()%6+1;
    valor=numero_aleatorio;
}

void Dado::getValor(){
    cout<<"Valor actual del dado: "<<valor<<endl;
}

bool Dado::esMaximo(bool *booleano){
    if(valor==6){
        *booleano=true;
    }else{
        *booleano=false;
    }
}

bool Dado::esMinimo(bool *booleano){
    if(valor==1){
        *booleano=true;
    }
}
