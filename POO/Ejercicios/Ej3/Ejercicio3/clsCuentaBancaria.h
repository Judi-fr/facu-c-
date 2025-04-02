#ifndef CLSCUENTABANCARIA_H_INCLUDED
#define CLSCUENTABANCARIA_H_INCLUDED

class CuentaB{
    private:
        int cuenta;
        float saldo;
    public:
        constructor(int , float );
        void depositar(float );
        float retirar();
        void obtenerSaldo();

};

#endif // CLSCUENTABANCARIA_H_INCLUDED
