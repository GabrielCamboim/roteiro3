#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main()
{
    Conta conta = Conta("Gabriel", 1, 670);
    ContaCorrente contacorrente = ContaCorrente("joao", 2, 830, 1000, 2000);
    ContaEspecial contaespecial = ContaEspecial("julio", 3, 900, 900, 1800);

    cout << "Conta normal" << endl;
    cout << "Nome: " << conta.getNomeCliente() << endl;
    cout << "Numero: "<< conta.getNumero() << endl;
    cout << "Saldo: "<< conta.getSaldo() << endl;
    cout << "Deposito de R$ 500" << endl;
    conta.depositar(500);
    cout << "Saldo: "<< conta.getSaldo() << endl;
    cout << "Saque de 1000" << endl;
    conta.sacar(1000);
    cout << "Saldo: "<< conta.getSaldo() << endl;
    cout << endl << endl;

    cout << "Conta corrente" << endl;
    cout << "Nome: " << contacorrente.getNomeCliente() << endl;
    cout << "Numero: "<< contacorrente.getNumero() << endl;
    cout << "Saldo: "<< contacorrente.getSaldo() << endl;
    cout << "Salario: "<< contacorrente.getSalario() << endl;
    contacorrente.definirLimite();
    cout << "Limite: "<< contacorrente.getLimite() << endl;
    cout << "Deposito de R$ 500!" << endl;
    contacorrente.depositar(500);
    cout << "Saldo: "<< contacorrente.getSaldo() << endl;
    cout << "Saque de 1000!" << endl;
    contacorrente.sacar(1000);
    cout << "Saldo: "<< contacorrente.getSaldo() << endl;
    cout << endl << endl;

    cout << "Conta especial" << endl;
    cout << "Nome: " << contaespecial.getNomeCliente() << endl;
    cout << "Numero: "<< contaespecial.getNumero() << endl;
    cout << "Saldo: "<< contaespecial.getSaldo() << endl;
    cout << "Salario: "<< contaespecial.getSalario() << endl;
    contaespecial.definirLimite();
    cout << "Limite: "<< contaespecial.getLimite() << endl;
    cout << "Deposito de R$ 500!" << endl;
    contaespecial.depositar(500);
    cout << "Saldo: "<< contaespecial.getSaldo() << endl;
    cout << "Saque de 1000!" << endl;
    contaespecial.sacar(1000);
    cout << "Saldo: "<< contaespecial.getSaldo() << endl;
    cout << endl << endl;

    return 0;

}
