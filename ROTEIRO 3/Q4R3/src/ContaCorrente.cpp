#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    //ctor
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}

ContaCorrente::ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario, int limite):Conta(nomeCliente,numero,saldo)
{
    this->salario=salario;
    this->limite=limite;
}

void ContaCorrente::setSalario(double salario)
{
    this->salario=salario;
}

void ContaCorrente::setLimite(int limite)
{
    this->limite=limite;
}

double ContaCorrente::getSalario()
{
    return salario;
}

int ContaCorrente::getLimite()
{
    return salario;
}

double ContaCorrente::definirLimite()
{
    return 2*salario;
}
