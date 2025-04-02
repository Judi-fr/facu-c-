#include <iostream>
#include "clsCuentaBancaria.h"

using namespace std;

CuentaB::constructor(int cuent,float sald){
    cuenta=cuent;
    saldo=sald;
}

void CuentaB::depositar(float monto){
    saldo+=monto;
}

float CuentaB::retirar(){
    float monto;
    cout<<"Cuanto deseas retirar? ";
    cin>>monto;
    if(monto<=saldo){
        saldo-=monto;
        cout<<"Se retiro "<<monto;
        return monto;
    }
    else{
        cout<<"No dispones de esa cantidad de dinero"<<endl;
        return 0;
    }

}

void CuentaB::obtenerSaldo(){
    cout<<"Saldo disponible: "<<saldo;
}
