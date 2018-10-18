#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <IConta.h>


class Conta : public IConta
{
    public:
        Conta();
        Conta(std::string,double,double,double);
        virtual ~Conta();
        void setNomeCliente(std::string);
        void setSalarioMensal(double);
        void setNumeroConta(double);
        void setSaldo(double);
        void setLimite(double);

        std::string getNomeCliente();
        double getSalarioMensal();
        double getNumeroConta();
        double getSaldo();
        double getLimite();

        void definirLimite();
        void sacar(double);
        void depositar(double);

    protected:
        std::string nomeCliente;
        double salarioMensal, numeroConta, saldo, limite;
};

#endif // CONTA_H
