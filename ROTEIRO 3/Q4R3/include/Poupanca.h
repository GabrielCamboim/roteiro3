#ifndef POUPANCA_H
#define POUPANCA_H

#include <Conta.h>


class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(std::string, int, double, int, double);
        virtual ~Poupanca();
        double render();

        void setVariacao(int);
        void setTaxaRendimento(double);

        int getVariacao();
        double getTaxaRendimento();

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
