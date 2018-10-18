#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    //ctor
}

ContaEspecial::ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario, int limite):ContaCorrente(nomeCliente,numero,saldo,salario, limite)
{

}

ContaEspecial::~ContaEspecial()
{
    //dtor
}

double ContaEspecial::definirLimite()
{
    return 4*salario;
}
