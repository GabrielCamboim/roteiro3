#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <Funcionario.h>
#include <iostream>
#include <Assalariado.h>
#include <Comissionado.h>
#include <Horista.h>

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        virtual ~SistemaGerenciaFolha();

        void setFuncionarios();
        double calculaValorTotalFolha();
        double calculaSalarioFuncionario();

    private:
        Funcionario *funcionarios[3];

};

#endif // SISTEMAGERENCIAFOLHA_H
