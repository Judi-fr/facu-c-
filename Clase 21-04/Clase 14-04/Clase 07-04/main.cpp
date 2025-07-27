#include <iostream>
#include "clsMateria.h"
#include "clsArchivoMaterias.h"

using namespace std;

/**

LA UTN DE PACHECO QUIERE ALMACENAR LA INFORMACIÓN DE LAS 18
MATERIAS DE LA CARRERA DE TUP, PARA LO CUAL PRECISA CARGAR
LOS SIGUIENTES DATOS:

-NUMERO DE MATERIA
-NOMBRE DE LA MATERIA
-CANTIDAD DE ALUMNOS
-CANTIDAD DE DOCENTES

ARMAR LA CLASE QUE PERMITA GUARDAR DICHA INFORMACIÓN Y,
A SU VEZ, CARGARLA Y MOSTRARLA

*/

void cargarMaterias(Materia *v, int tam){
    for(int i=0; i<tam; i++){
        v[i].Cargar();
    }
}

void mostrarMaterias(Materia *v, int tam){
    for(int i=0; i<tam; i++){
        v[i].Mostrar();
    }
}

bool grabarMateria(Materia reg){
    FILE *p = fopen("Materias.dat", "ab");
    if(p == nullptr){
        cout<<"ERROR DE ARCHIVO"<<endl;
        return false;
    }
    bool escribio=fwrite(&reg, sizeof reg, 1, p);
    fclose(p);
    return escribio;
}

void cargarMateria(){
    Materia obj;
    obj.Cargar();
    if(grabarMateria(obj)){
        cout<<"SE AGREGO EL REGISTRO CORRECTAMENTE"<<endl;
    }else{
        cout<<"NO SE PUDO GRABAR EL REGISTRO"<<endl;
    }
}

Materia leerMateria(int pos){
    FILE *p=fopen("Materias.dat", "rb");
    Materia obj;
    obj.setNumero(-1);
    if(p == nullptr){
        obj.setNumero(-2);
        return obj;
    }
    fseek(p, pos * sizeof obj, 0);
    fread(&obj, sizeof obj, 1, p);
    fclose(p);
    return obj;
}

void listarConVectorDinamico(){
    ArchivoMaterias arcMat;
    int tam = arcMat.contarRegistros();
    if(tam <= 0){
        return;
    }
    Materia *vMaterias;
    vMaterias = new Materia[tam];
    if(vMaterias == nullptr){
        return;
    }
    FILE *p = fopen("Materias.dat", "rb");
    if(p == nullptr){
        delete[] vMaterias;
        return;
    }
    fread(vMaterias, sizeof (Materia), tam, p);
    fclose(p);
    for(int i=0; i<tam; i++){
        vMaterias[i].Mostrar();
    }
    delete[] vMaterias;
}

int buscarPosicionMateria(int num){
    ArchivoMaterias arcMat;
    int cant = arcMat.contarRegistros();
    Materia obj;
    for(int i=0; i<cant; i++){
        obj = leerMateria(i);
        if(obj.getNumero() == num){
            return i;
        }
    }
    return -1;
}

void mostrarMateriaPorNumero(){
    cout<<"INGRESE EL NUMERO DE MATERIA: ";
    int num;
    cin>>num;
    ArchivoMaterias arcMat("Materias.dat");
    int pos = arcMat.buscarRegistro(num);
    if(pos < 0){
        cout<<"EL NUMERO INGRESADO NO EXISTE EN EL ARCHIVO"<<endl;
        return;
    }
    Materia obj = arcMat.leerRegistro(pos);
    obj.Mostrar();
}

void mostrarPosicionMateria(){
    cout<<"INGRESE EL NUMERO DE MATERIA: ";
    int num;
    cin>>num;
    int pos = buscarPosicionMateria(num);
    if(pos<0){
        cout<<"EL NUMERO INGRESADO NO SE ENCUENTRA EN EL ARCHIVO"<<endl;
        return;
    }
    cout<<"LA POSICION ES: "<<buscarPosicionMateria(num)<<endl;
}

/**
AGREGAR UNA OPCION AL MENU QUE PIDA AL USUARIO
UN NUMERO DE MATERIA Y MUESTRE LA MATERIA CON ESE
NUMERO

AGREGAR UNA OPCION AL MENU QUE PIDA AL USUARIO
UN NUMERO DE MATERIA Y MUESTRE LA POSICION QUE
OCUPA LA MATERIA CON ESE NUMERO EN EL ARCHIVO
DEBE USARSE UNA FUNCION QUE DEVUELVA LA POSICION
*/

/**
MODIFICAR EL PROGRAMA PARA TENER UN MENU PRINCIPAL
QUE LLAME A DOS SUBMENUES, UNO DE MATERIAS Y OTRO
DE ALUMNOS

LOS ALUMNOS ALMACENAN LA SIGUIENTE INFORMACION:
-LEGAJO (int)
-NOMBRE Y APELLIDO (char[])
-CARRERA (int)
-MAIL (char[])
-DNI (int)
-TELEFONO (char[])

CADA SUBMENU DEBE TENER UNA OPCION PARA AGREGAR UN
REGISTRO, LISTAR TODOS LOS REGISTROS, LISTAR EL
REGISTRO QUE TENGA EL VALOR DEL CAMPO CLAVE INGRESADO
POR EL USUARIO.
*/

void listarMaterias(){
    Materia obj;
    ArchivoMaterias arcMat;
    int cant = arcMat.contarRegistros();
    for(int i=0; i<cant; i++){
        leerMateria(i).Mostrar();
    }
}

void modificarCantidadAlumnos(){
    cout<<"INGRESE EL NUMERO DE MATERIA A MODIFICAR: ";
    int num;
    cin>>num;
    ArchivoMaterias arcMat;
    int pos = arcMat.buscarRegistro(num);
    if(pos < 0){
        cout<<"NO EXISTE UNA MATERIA CON ESE NUMERO EN EL ARCHIVO"<<endl;
        return;
    }
    Materia obj;
    obj = arcMat.leerRegistro(pos);
    int cA;
    cout<<"INGRESE LA NUEVA CANTIDAD DE ALUMNOS: ";
    cin>>cA;
    obj.setCantidadAlumnos(cA);
    arcMat.modificarRegistro(obj, pos);
}

void bajaMateria(){
    cout<<"INGRESE EL NUMERO DE LA MATERIA A DAR DE BAJA: ";
    int num;
    cin>>num;
    ArchivoMaterias arcMat("Materias.dat");
    int pos = arcMat.buscarRegistro(num);
    if(pos < 0){
        cout<<"NO EXISTE UNA MATERIA CON ESE NUMERO"<<endl;
        return;
    }
    Materia obj = arcMat.leerRegistro(pos);
    obj.setEstado(false);
    arcMat.modificarRegistro(obj, pos);
}

void bajaFisica(){
    ArchivoMaterias arcMat;
    ArchivoMaterias arcAux("Materias.aux");
    int cantReg = arcMat.contarRegistros();
    Materia obj;
    for(int i=0; i<cantReg; i++){
        obj = arcMat.leerRegistro(i);
        arcAux.grabarRegistro(obj);
    }
    arcMat.limpiar();
    for(int i=0; i<cantReg; i++){
        obj = arcAux.leerRegistro(i);
        if(obj.getEstado()==true){
            arcMat.grabarRegistro(obj);
        }
    }
}

int main()
{
    int opc;
    while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"=================="<<endl;
        cout<<"1. AGREGAR MATERIA"<<endl;
        cout<<"2. LISTAR MATERIAS"<<endl;
        cout<<"3. MODIFICAR CANTIDAD DE ALUMNOS"<<endl;
        cout<<"4. BAJA LOGICA"<<endl;
        cout<<"5. BAJA FISICA"<<endl;
        cout<<"6. MOSTRAR POSICION MATERIA"<<endl;
        cout<<"0. SALIR"<<endl;
        cout<<"=================="<<endl;
        cout<<"INGRESE LA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                cargarMateria();
                break;
            case 2:
                listarMaterias();
                break;
            case 3:
                modificarCantidadAlumnos();
                break;
            case 4:
                bajaMateria();
                break;
            case 5:
                bajaFisica();
                break;
            case 6:
                mostrarPosicionMateria();
                break;
            case 0:
                return 0;
        }
        system("pause");
    }

    /**
    MODOS DE APERTURA:
        (read) rb: modo de lectura, no crea archivos
        (append) ab: modo de escritura, crea el
                    archivo solo si no existe.
        (write) wb: modo de escritura, siempre crea
                    un archivo vacío
    */
//    Materia vMaterias[5];
//    cargarMaterias(vMaterias, 5);
//    system("cls");
//    mostrarMaterias(vMaterias, 5);
    return 0;
}
