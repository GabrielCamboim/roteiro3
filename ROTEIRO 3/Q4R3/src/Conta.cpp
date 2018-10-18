#include "Conta.h"

Conta::Conta()
{
    //ctor
}

Conta::Conta(std::string nomeCliente, int numero, double saldo)
{
    this->nomeCliente=nomeCliente;
    this->numero=numero;
    this->saldo=saldo;
}

void Conta::setNomeCLiente(std::string nomeCliente)
{
    this->nomeCliente=nomeCliente;
}

void Conta::setNumero(int numero)
{
    this->numero=numero;
}

void Conta::setSaldo(double saldo)
{
    this->saldo=saldo;
}

std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

Conta::~Conta()
{
    //dtor
}

void Conta::sacar(double sacar)
{
    if(saldo>=sacar)
        saldo=saldo-sacar;
    else
        std::cout << "Saldo indisponivel em conta" << std::endl;
}

void Conta::depositar(double depositar)
{
    saldo=saldo+depositar;
}
