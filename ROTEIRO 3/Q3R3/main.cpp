#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main()
{
    double sacar, depositar;

    Conta conta("Gabriel Camboim",25000,0,30000);
    ContaEspecial contaEsp("Jubileu Silva",1080,1,77);

    conta.definirLimite();
    contaEsp.definirLimite();

    cout << "sacar: " << endl;
    cin >>sacar;
    conta.sacar(sacar);
    cout << conta.getSaldo() << endl;

    cout << "depositar: " << endl;
    cin >>depositar;
    conta.depositar(depositar);
    cout << conta.getSaldo() << endl;

    cout << "sacar da conta especial: " << endl;
    cin >>sacar;
    contaEsp.sacar(sacar);
    cout << contaEsp.getSaldo() << endl;

    cout << "depositar da conta especial: " << endl;
    cin >>depositar;
    contaEsp.depositar(depositar);
    cout << contaEsp.getSaldo() << endl;

    return 0;
}
