#include <iostream>
#include <SistemaGerenciaFolha.h>

using namespace std;

int main()
{
    SistemaGerenciaFolha gerente;

    gerente.setFuncionarios();
    gerente.setFuncionarios();
    gerente.setFuncionarios();

    std::cout << gerente.calculaValorTotalFolha() << endl;
    std::cout << gerente.calculaSalarioFuncionario() << endl;

    return 0;
}
