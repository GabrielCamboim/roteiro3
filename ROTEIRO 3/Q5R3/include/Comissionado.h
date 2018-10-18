#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include <Funcionario.h>


class Comissionado : public Funcionario
{
    public:
        Comissionado();
        Comissionado(std::string, int, double, double);
        virtual ~Comissionado();

        void setVendasSemanais(double);
        void setPercentualComissao(double);

        double getVendasSemanais();
        double getPercentualComissao();

        double calculaSalario();

    private:
        double vendasSemanais;
        double percentualComissao;
};

#endif // COMISSIONADO_H
