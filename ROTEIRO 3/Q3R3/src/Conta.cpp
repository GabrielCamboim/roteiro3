#include "Conta.h"

Conta::Conta()
{
    //ctor
}
Conta::Conta(std::string nomeCliente, double salarioMensal, double numeroConta, double saldo)
{
    this->nomeCliente=nomeCliente;
    this->salarioMensal=salarioMensal;
    this->numeroConta=numeroConta;
    this->saldo=saldo;
}

Conta::~Conta()
{
    //dtor
}

void Conta::setNomeCliente(std::string nomeCliente)
{
    this->nomeCliente=nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal=salarioMensal;
}

void Conta::setNumeroConta(double numeroConta)
{
    this->numeroConta=numeroConta;
}

void Conta::setSaldo(double saldo)
{
    this->saldo=saldo;
}

void Conta::setLimite(double limite)
{
    this->limite=limite;
}

std::string Conta::getNomeCliente()
{
    return nomeCliente;
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

double Conta::getNumeroConta()
{
    return numeroConta;
}

double Conta::getSaldo()
{
    return saldo;
}

double Conta::getLimite()
{
    return limite;
}
void Conta::definirLimite()
{
    limite= 2*salarioMensal;
}

void Conta::sacar(double sacar)
{
    saldo=saldo-sacar;
}

void Conta::depositar(double depositar)
{
    saldo=saldo+depositar;
}

