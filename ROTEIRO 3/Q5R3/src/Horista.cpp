#include "Horista.h"

Horista::Horista()
{
    //ctor
}
Horista::Horista(std::string x, int y, double z, double w)
{
   nome=x;
   matricula=y;
   salarioPorHora=z;
   horasTrabalhadas=w;
}

Horista::~Horista()
{
    //dtor
}
void Horista::setSalarioPorHora(double x)
{
    salarioPorHora=x;
}

void Horista::setHorasTrabalhadas(double y)
{
    horasTrabalhadas=y;
}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}

double Horista::calculaSalario()
{
    double horasExtras;

    if(horasTrabalhadas<=40)
        return salarioPorHora*horasTrabalhadas;

    if(horasTrabalhadas>40){

        horasExtras=horasTrabalhadas-40;

        return (salarioPorHora*horasTrabalhadas)+(horasExtras*(1.5*salarioPorHora));
    }
}
