#include <iostream>
#include "clsDado.h"
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;



int main()
{
    bool maximo=false, minimo=false;
    Dado d1;
    d1.getValor();
    d1.esMaximo(&maximo);
    cout<<"es el maximo numero?"<<endl;
    if(maximo==true){
        cout<<"ES MAXIMO, ES 6"<<endl;
    }else{
        cout<<"No lo es"<<endl;
    }
    maximo=false;
    cout<<"Vamos a lanzarlo devuelta.."<<endl;
    system("pause");
    d1.Lanzar();
    d1.getValor();
    d1.esMaximo(&maximo);
    if(maximo==true){
        cout<<"ES MAXIMO, ES 6"<<endl;
    }else{
        cout<<"No lo es"<<endl;
    }
    d1.esMinimo(&minimo);
    if(minimo==true){
        cout<<"PERO es el minimo"<<endl;
    }

}

/*2
Crea una clase llamada Dado que simule el comportamiento de un dado de seis caras. La clase debe contener los siguientes atributos:
valor (int): Almacena el valor actual del dado (un número entre 1 y 6).
Implementa los siguientes métodos públicos:
Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1 y 6.
lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor aleatorio entre 1 y 6 al atributo valor.
getValor(): Devuelve el valor actual del dado.
esMaximo(): Devuelve true si el valor del dado es 6, y false en caso contrario.
esMinimo(): Devuelve true si el valor del dado es 1, y false en caso contrario.

*/
