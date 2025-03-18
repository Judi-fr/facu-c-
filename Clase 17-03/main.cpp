#include <iostream>

using namespace std;

void cargarVector(int *v, int tam);
void duplicarValor(int &);
void mostrarVector(int *v, int tam);


int main()
{
    int valor = 10;
    const int valor2 = 15;
    int &referencia=valor;
    duplicarValor(valor);
    cout<<"DIRECCION VALOR: "<<&valor<<endl;
    cout<<"DIRECCION REFERENCIA: "<<&referencia<<endl;
    cout<<"CONTENIDO DE VALOR: "<<valor<<endl;
    int vec[valor2] = {5, 2, 3, 8, 1};
    //cargarVector(vec, valor2);
    mostrarVector(vec, valor2);
    return 0;
    //ordenarDeMenorAMayor(vec, 5);
    cout<<vec<<endl;
    return 0;
    for(int i=1; i<5; i++)cout<<&vec[i]<<endl;
    return 0;

}

void cargarVector(int *v, int tam){
    for(int i=0; i<tam; i++){
        cin>>v[i];
    }
}

void ordenarDeMenorAMayor(int vec[], int tam){
    int aux;
    for(int i=0; i<tam-1; i++){
        for(int j = i+1; j<tam; j++){
            if(vec[i]>vec[j]){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}
void mostrarVector(int v[], int tam){
    for(int i=0; i<tam; i++){
        cout<<*(v+i)<<endl;
    }
}

void duplicarValor(int &x){
    cout<<"DIRECCION X: "<<&x<<endl;
    cout<<"CONTENIDO DE X: "<<x<<endl;
    x = x * 2;
}
