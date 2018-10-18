#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <Conta.h>


class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(std::string, int, double, double, int);
        virtual ~ContaCorrente();

        void setSalario(double);
        void setLimite(int);

        double getSalario();
        int getLimite();

        double definirLimite();

    protected:
        double salario;
        int limite;
};

#endif // CONTACORRENTE_H
