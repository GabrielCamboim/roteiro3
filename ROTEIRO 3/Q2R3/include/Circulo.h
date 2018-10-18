#ifndef CIRCULO_H
#define CIRCULO_H

#include <FiguraGeometrica.h>


class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(double);
        virtual ~Circulo();
        double calcularArea();

    private:
        double raio;
};

#endif // CIRCULO_H
