#include "Triangulo.h"

Triangulo::Triangulo()
{
   base =0;
   altura=0;
}

Triangulo::~Triangulo()
{
    //dtor
}
Triangulo::Triangulo(double base, double altura)
{
    this->base=base;
    this->altura=altura;
}

double Triangulo::calcularArea()
{
    return (base*altura)/2;
}
