#include <iostream>

using namespace std;

int main()
{
    int tam;
    int *vIn=nullptr;
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





    int matrix[30][12][31]={};
    int cargar_matriz(int matriz[30][12][31]);
    void punto1(int matriz[30][12][31]);
    void punto2(int matriz[30][12][31]);
    void punto3(int matriz[30][12][31]);

    cargar_matriz(matrix);
    system("cls");

    int opcion;
    cout<<"Que punto deseas ver (1-3) ";
    cin>>opcion;
    cout<<endl;

    while(true){
        switch (opcion) {
        case 1:
            punto1(matrix);
            break;
        case 2:
            punto2(matrix);
            break;
        case 3:
            punto3(matrix);
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
        }
        cout<<endl;
        cout<<"Que punto deseas ver (1-3) ";
        cin>>opcion;
        cout<<endl;
    }
}
void punto1(int matriz[30][12][31]){
    int m,d,e,contador=0;
    cout<<"La cantidad de dias asistidos al mes fueron"<<endl<<endl;
    for(m=1;m<=12;m++){
        for(d=1;d<=31;d++){
            for(e=0;e<30;e++){
                if(matriz[e][m-1][d-1]>0){
                    contador++;
                    break;
                }
            }
        }
     cout<<"Mes: "<<m<<" - "<<contador<<" dias"<<endl;
     contador=0;
    }

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
void punto3(int matriz[30][12][31]){
    int e,m,d,horas=0;
    for(e=1;e<=30;e++){
        for(m=0;m<12;m++){
            for(d=0;d<31;d++){
                horas+=matriz[e-1][m][d];
            }
        }
        cout<<"EL EMPLEADO N*"<<e<<" ---- TRABAJO "<<horas<<" ESTE ANIO"<<endl;
        horas=0;
    }
}
int cargar_matriz(int matriz[30][12][31]){
   int empleado,mes,dia,horas;
   cout<<"Ingresa el numero de empleado (1-30) ";
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

        matriz[empleado-1][mes][dia]=horas;

        cout<<endl<<"si desea finalizar la carga ingrese 0"<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"ingresa el numero de empleado: ";
        cin>>empleado;

   };
    return matriz[30][12][31];
}

