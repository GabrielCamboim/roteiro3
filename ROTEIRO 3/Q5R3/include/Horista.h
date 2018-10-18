#ifndef HORISTA_H
#define HORISTA_H

#include <Funcionario.h>


class Horista : public Funcionario
{
    public:
        Horista();
        Horista(std::string, int, double, double);
        virtual ~Horista();

        void setSalarioPorHora(double);
        void setHorasTrabalhadas(double);

        double getSalarioPorHora();
        double getHorasTrabalhadas();

        double calculaSalario();

    private:
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
