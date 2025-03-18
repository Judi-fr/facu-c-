#include <iostream>  // Incluye la librería para entrada y salida de datos

using namespace std;  // Permite usar elementos del espacio de nombres std sin tener que escribir "std::" cada vez

int main() {
    cout << "Hola, mundo!" << endl;  // Imprime un mensaje en la consola
    int vector[10];
    vector[4]=10;
    char palabra[10]; //en cada pocision del 0 al 9 habra que rellenarla con una letra de la frase
    palabra[0]='H';
    palabra[1]='o';
    palabra[2]='l';
    palabra[3]='a';
    palabra[4]='\0';//indica que se cortara la cadena
    palabra[5]='a';
    cout<<"este es el valor de el cout";

    int i;
    for (i = 0; i < 10; i++)
    {
        cout<<palabra[i];
        if (palabra[i]=='\0')
        {
            break;
        }
        
    }

    void ordenarDeMenorAMayor(int vec[], int tam[]);
    int tamanio;
    cin>>tamanio;
    int vec[tamanio]={0}, x;
    for ( x = tamanio; x < 5; x++)
    {
        cin>>vec[x];
    }
    
    
    ordenarDeMenorAMayor(vec,tamanio);

    return 0;  // Indica que el programa terminó correctamente
}
void ordenarDeMenorAMayor(int vec[], int tam){
    int i, j;
    int contador=0, auxiliar;
    for(i=0;i<4;i++){
        for (j = 0; j < 5; j++)
        {
            if(vec[i]>vec[j]){
                contador++;            
            }
        }
        vec[contador]=vec[i];
        contador=0;
    }
}
