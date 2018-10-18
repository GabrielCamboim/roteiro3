#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();
        virtual double calcularArea()=0;

    protected:
    std::string nome;
};

#endif // FIGURAGEOMETRICA_H
