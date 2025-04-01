#include <iostream>

using namespace std;

void punto1();
void punto2();

int main()
{

    cout<<"Punto 1"<<endl;
    cout<<"Punto 2"<<endl;
    cout<<"Elegi un ejercicio: ";
    int opcion;
    cin>>opcion;

    switch(opcion){
        case 1:
            punto1();
            break;
        case 2:
            punto2();
            break;

    }
}
void punto1(){
int tam;
    int *vIn=nullptr;
    cout<<"indica el tama�o del vector ";
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
