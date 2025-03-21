#include <iostream>

using namespace std;

int main()
{
    int matrix[30][12][31]={};
    int cargar_matriz(int matriz[30][12][31]);

    cargar_matriz(matrix);

    //PUNTO 2
    int m,d,e;
    for(m=0;m<12;m++){
        int contador=0;
        for(d=0;d<=31;d++){
            if(contador==30){cout<<"Mes: "<<m+1<<" Dia: "<<d<<endl;}
            for(e=0;e<30;e++){
                if(matrix[e][m][d]==0){
                    contador+=1;
                }
            }
        }
    }

}

int cargar_matriz(int matriz[30][12][31]){
   int empleado,mes,dia,horas;
   cout<<"Ingresa el numero de empleado: ";
   cin>>empleado;
   do{
        cout<<"Ingresa el mes: ";
        cin>>mes;
        cout<<"Ingresa el dia: ";
        cin>>dia;
        cout<<"Ingresa las horas trabajadas: ";
        cin>>horas;

        matriz[empleado][mes][dia]=horas;

        cout<<endl<<"si desea finalizar la carga ingrese"<<endl;
        cout<<"dentro del numero de empleado un 0"<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"si quiere continuar ingrese otro numero"<<endl<<endl;
        cout<<"ingresa el numero de empleado: ";
        cin>>empleado;

   }while(empleado !=0);
    return matriz[30][12][31];
}
