#ifndef CLSDADO_H_INCLUDED
#define CLSDADO_H_INCLUDED

class Dado{
    private:
        int valor;
    public:
        Dado();
        void getValor();
        bool esMaximo(bool *);
        bool esMinimo(bool *);
        void Lanzar();

};

#endif // CLSDADO_H_INCLUDED
