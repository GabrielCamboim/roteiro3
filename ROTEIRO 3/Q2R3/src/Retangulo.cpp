#include "Retangulo.h"

Retangulo::Retangulo()
{
    base=0;
    altura=0;
}

Retangulo::~Retangulo()
{

}
Retangulo::Retangulo(double base, double altura)
{
    this->base=base;
    this->altura=altura;
}

double Retangulo::calcularArea()
{
    return base*altura;
}
