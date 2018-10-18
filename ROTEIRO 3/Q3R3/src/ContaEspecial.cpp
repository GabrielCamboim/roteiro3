#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

ContaEspecial::ContaEspecial(std::string x, double y, double z, double s)
{
    nomeCliente=x;
    salarioMensal=y;
    numeroConta=z;
    saldo=s;
}

void ContaEspecial::definirLimite()
{
    limite=salarioMensal*3;
}
