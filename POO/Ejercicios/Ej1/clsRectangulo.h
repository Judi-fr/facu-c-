#ifndef CLSRECTANGULO_H_INCLUDED
#define CLSRECTANGULO_H_INCLUDED

class Rectangulo{
    private:
        int _base = 0; ///18
        int _altura = 0; ///12
    public:
        void setBase();
        int getBase();
        void setAltura();
        int getAltura();
        int calcularArea();
        int calcularPerimetro();
};

#endif // CLSRECTANGULO_H_INCLUDED
