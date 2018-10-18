#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(std::string x, int y, double z, double s)
{
    nome=x;
    matricula=y;
    vendasSemanais=z;
    percentualComissao=s;
}

Comissionado::~Comissionado()
{
    //dtor
}

void Comissionado::setVendasSemanais(double x)
{
  vendasSemanais=x;
}

void Comissionado::setPercentualComissao(double w)
{
    percentualComissao=w;
}

double Comissionado::getVendasSemanais()
{
    return vendasSemanais;
}

double Comissionado::getPercentualComissao()
{
    return percentualComissao;
}

double Comissionado::calculaSalario()
{
    return 4*(vendasSemanais*percentualComissao);
}
