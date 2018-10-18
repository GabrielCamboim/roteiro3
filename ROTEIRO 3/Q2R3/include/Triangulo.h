#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(double, double);
        virtual ~Triangulo();
        double calcularArea();

    private:
        double base,altura;

};

#endif // TRIANGULO_H
