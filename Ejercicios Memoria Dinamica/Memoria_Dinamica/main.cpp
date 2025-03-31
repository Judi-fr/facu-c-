#include <iostream>

using namespace std;

void punto1();

int main()
{

    cout<<"Punto 1"<<endl;
    cout<<"Elegi un ejercicio: ";
    int opcion;
    cin>>opcion;

    switch(opcion){
        case 1:
            punto1();
    }
}

void punto1(){
int tam;
    int *vIn=nullptr;
    cout<<"indica el tamaño del vector ";
    cin>>tam;

    vIn= new int[tam];

    if(vIn==nullptr){
        cout<<"nuuuuuuuuuuuuuuuuuul";
    }
    else{
        int i;
        for(i=0;i<tam;i++){
            vIn[i]=i+1;
        }
        for(i=0;i<tam;i++){
            cout<<vIn[i]<<endl;

        }
        delete[] vIn;
    }
}
