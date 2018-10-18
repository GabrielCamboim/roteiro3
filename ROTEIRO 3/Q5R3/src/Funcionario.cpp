#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}
void Funcionario::setNome(std::string x)
{
    nome=x;
}

void Funcionario::setMatricula(int w)
{
    matricula=w;
}

std::string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}

