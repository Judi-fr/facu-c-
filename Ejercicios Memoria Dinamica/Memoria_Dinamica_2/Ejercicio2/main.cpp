#include <iostream>

using namespace std;

int carga();

int main()
{
            ///ME FRUSTRE Y LO DEJE PARA PRACTICAR POO
        ///A LA RE MIERDA ESTA MIERDA

    cout<<"1. cargar vector"<<endl;
    cout<<"2. mostrar vector"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Elegi un ejercicio: ";
    int opcion;
    cin>>opcion;
    while(opcion != 0){


        switch(opcion){
        case 1:{
                int tam, *vPoint=nullptr,i;
                cout<<"indica el tamanio del vector"<<endl;
                cin>>tam;
                vPoint=new int[tam];
                for(i=0;i<tam;i++){
                    cout<<"carga el vector ";
                    cin>>vPoint[i];
                }
                break;}
            case 2:
                int i;
                for(i=0;i<tam;i++){
                    cout<<vPoint[i]<<endl;
                }
                break;
            case 3:
                exit(100);
                break;

        }
        cout<<"1. cargar vector"<<endl;
        cout<<"2. mostrar vector"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Elegi un ejercicio: ";
        int opcion;
        cin>>opcion;
    }



}
