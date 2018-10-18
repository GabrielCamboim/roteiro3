#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>

class Conta
{
    public:
        Conta();
        Conta(std::string,int,double);
        virtual ~Conta();
        void sacar(double);
        void depositar(double);

        void setNomeCLiente(std::string);
        void setNumero(int);
        void setSaldo(double);

        std::string getNomeCliente();
        int getNumero();
        double getSaldo();

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;
};

#endif // CONTA_H
