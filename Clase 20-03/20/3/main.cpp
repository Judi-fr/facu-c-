#include <iostream>

using namespace std;

int main()
{
   int matrix[30][12][31]={};
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

        matrix[empleado][mes][dia]=horas;

        cout<<"Ingresa el numero de empleado: ";
        cin>>empleado;
   }while(empleado !=0);

    //PUNTO 2
    int m,d,e;
    for(m=0;m<12;m++){
        for(d=0;d<31<d++){
            for(e=0;e<30;e++){
                if(e)
            }
        }
    }
}
