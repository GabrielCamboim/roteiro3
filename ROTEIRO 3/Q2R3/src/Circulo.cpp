#include "Circulo.h"

Circulo::Circulo()
{
    raio=0;
}
Circulo::~Circulo()
{
    //dtor
}
Circulo::Circulo(double raio)
{
    this->raio=raio;
}

double Circulo::calcularArea()
{
    return (raio*raio)*3.14;
}
