#include "Poupanca.h"

Poupanca::Poupanca()
{

}

Poupanca::~Poupanca()
{

}

Poupanca::Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento)
{
    this->nomeCliente=nomeCliente;
    this->numero=numero;
    this->saldo=saldo;
    this->variacao=variacao;
    this->taxaRendimento=taxaRendimento;
}

double Poupanca::render()
{
    if(variacao==51)
        saldo=saldo+(saldo*taxaRendimento);
    if(variacao==1)
        saldo=saldo+(saldo*(taxaRendimento+(0.005*taxaRendimento)));
}

void Poupanca::setVariacao(int variacao)
{
    this->variacao=variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento)
{
    this->taxaRendimento=taxaRendimento;
}

int Poupanca::getVariacao()
{
    return variacao;
}

double Poupanca::getTaxaRendimento()
{
    return taxaRendimento;
}
