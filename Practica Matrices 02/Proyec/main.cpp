#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5]={}, opcion;
    void cargarPuntos(int matriz[5][5]);
    void mostrarTabla(int matriz[5][5]);
    void reiniciarPuntajes(int matriz[5][5]);

    while(true){
        cout<<"1. Cargar Puntos"<<endl;
        cout<<"2. Mostrar Tabla"<<endl;
        cout<<"3. Reiniciar Campeonato"<<endl;
        cout<<"0. Salir"<<endl<<endl<<">>> ";
        cin>>opcion;

        switch(opcion){
            case 1:
                system("cls");
                cargarPuntos(matriz);
                break;
            case 2:
                mostrarTabla(matriz);
                break;
            case 3:
                reiniciarPuntajes(matriz);
                cout<<"Tabla reiniciada!"<<endl<<endl;
                break;
            case 0:
                cout<<endl<<"Gracias por usar el programa!"<<endl;
                return 0;
        }
    }
}
void reiniciarPuntajes(int matriz[5][5]){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=0;
        }
    }
}
void mostrarTabla(int matriz[5][5]){
    system("cls");
    cout<<"    J1  J2  J3  J4"<<endl;
    cout<<"J1  -   "<<matriz[1][2]<<"   "<<matriz[1][3]<<"   "<<matriz[1][4]<<endl;
    cout<<"J2  "<<matriz[2][1]<<"   -   "<<matriz[2][3]<<"   "<<matriz[2][4]<<endl;
    cout<<"J3  "<<matriz[3][1]<<"   "<<matriz[3][2]<<"   -   "<<matriz[3][4]<<endl;
    cout<<"J3  "<<matriz[4][1]<<"   "<<matriz[4][2]<<"   "<<matriz[3][4]<<"   -"<<endl<<endl;
    system("pause");
    cout<<endl;


}
void cargarPuntos(int matriz[5][5]){
    /// ESTETICA DE LA CARGA
    int equipo1, equipo2,resultado,resultado2;
    cout<<"Equipo x vs x"<<endl<<endl<<">>> ";
    cin>>equipo1;
    system("cls");
    cout<<"Equipo "<<equipo1<<" vs x"<<endl<<endl<<">>> ";
    cin>>equipo2;
    if(equipo1==equipo2 || equipo2>4){
        system("cls");
        cout<<"Equipo no valido, vuelva a intentarlo."<<endl;
        cout<<"Equipo "<<equipo1<<" vs x"<<endl<<endl<<">>> ";
        cin>>equipo2;
    }
    system("cls");
    cout<<"Equipo "<<equipo1<<" vs "<<equipo2<<endl<<"Puntos equipo "<<equipo1<<": ";
    cin>>resultado;
    cout<<"Puntos equipo "<<equipo2<<": ";
    cin>>resultado2;
    /// ESTETICA DE LA CARGA
    matriz[equipo1][equipo2]=resultado;
    matriz[equipo2][equipo1]=resultado2;

    cout<<"Resultado cargado! Lo podras ver en la lista de puntos."<<endl<<"------------------------------------------------------"<<endl;

}


