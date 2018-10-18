#include "Assalariado.h"

Assalariado::Assalariado()
{
    //ctor
}

Assalariado::Assalariado(std::string x, int y, double z)
{
    nome=x;
    matricula=y;
    salario=z;
}

Assalariado::~Assalariado()
{
    //dtor
}
void Assalariado::setSalario(double j)
{
    salario=j;
}

double Assalariado::getSalario()
{
    return salario;
}

double Assalariado::calculaSalario()
{
   return salario;
}
