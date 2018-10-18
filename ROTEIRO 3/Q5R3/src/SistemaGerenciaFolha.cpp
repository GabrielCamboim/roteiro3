#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}

void SistemaGerenciaFolha::setFuncionarios()
{
    static int i=0;
    int tipoFuncionario, matricula;
    std::string nome;

    std::cout << "tipo de funcionario: \n 1 - Assalariado  2 - Horista 3 - Comissionado" << std::endl;
    std::cin >> tipoFuncionario;
    std::cin.ignore();
    std::cout << "nome do funcionario" << std::endl;
    getline(std::cin, nome);
    std::cout << "matricula do funcionario" << std::endl;
    std::cin >> matricula;

    if(tipoFuncionario==1){

        double salario;
        std::cout << "valor do salario" << std::endl;
        std::cin >> salario;

        funcionarios[i] = new Assalariado(nome,matricula,salario);
        i++;
    }
    if(tipoFuncionario==2){

        double salarioPorHora;
        double horasTrabalhadas;

        std::cout << "salario por hora" << std::endl;
        std::cin >> salarioPorHora;
        std::cout << "quantidade de horas trabalhadas" << std::endl;
        std::cin >> horasTrabalhadas;

        funcionarios[i] = new Horista(nome,matricula,salarioPorHora,horasTrabalhadas);
        i++;
    }
    if(tipoFuncionario==3){

        double vendasSemanais;
        double percentualComissao;

        std::cout << "vendas semanais" << std::endl;
        std::cin >> vendasSemanais;
        std::cout << "percentual de comissao por venda" << std::endl;
        std::cin >> percentualComissao;

        funcionarios[i] = new Comissionado(nome, matricula, vendasSemanais, percentualComissao);
        i++;
    }
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    double total=0;

    for(int w=0;w<3;w++){

        total=total + funcionarios[w]->calculaSalario();
    }

    return total;
}

double SistemaGerenciaFolha::calculaSalarioFuncionario()
{
    int matri, funcionario;

    std::cout << "Digite a matricula" << std::endl;
    std::cin >> matri;

    for(int w=0; w<3; w++){

        if(matri==funcionarios[w]->getMatricula())
            funcionario=w;
    }

    return funcionarios[funcionario]->calculaSalario();
}
