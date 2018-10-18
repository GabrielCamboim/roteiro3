#ifndef RETANGULO_H
#define RETANGULO_H

#include <FiguraGeometrica.h>


class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        Retangulo(double ,double );
        virtual ~Retangulo();
        double calcularArea();

    private:
        double base,altura;
};

#endif // RETANGULO_H
