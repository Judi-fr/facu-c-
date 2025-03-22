#include <iostream>

using namespace std;

int main()
{
    int matrix[30][12][31]={};
    int cargar_matriz(int matriz[30][12][31]);
    void punto2(int matriz[30][12][31]);

    cargar_matriz(matrix);
    punto2(matrix);

}
void punto2(int matriz[30][12][31]){
    int m,d,e;
    bool sin_asistencias=true;
    for(m=1;m<=12;m++){
        for(d=1;d<=31;d++){
            sin_asistencias=true;
            for(e=0;e<30;e++){
                if(matriz[e][m-1][d-1]>0){
                    sin_asistencias=false;
                }
            }
            if(sin_asistencias==true){
                cout<<"Mes: "<<m<<" Dia: "<<d<<endl;
            }
        }
    }
}
int cargar_matriz(int matriz[30][12][31]){
   int empleado,mes,dia,horas;
   cout<<"Ingresa el numero de empleado excluyendo el 0: ";
   cin>>empleado;
   while(empleado !=0){
        cout<<"Ingresa el mes: ";
        cin>>mes;
        mes-=1;
        cout<<"Ingresa el dia: ";
        cin>>dia;
        dia-=1;
        cout<<"Ingresa las horas trabajadas: ";
        cin>>horas;

        matriz[empleado][mes][dia]=horas;

        cout<<endl<<"si desea finalizar la carga ingrese 0"<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"ingresa el numero de empleado: ";
        cin>>empleado;

   };
    return matriz[30][12][31];
}
