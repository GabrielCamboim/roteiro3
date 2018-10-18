#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include <Funcionario.h>


class Assalariado : public Funcionario
{
    public:
        Assalariado();
        Assalariado(std::string, int, double);
        virtual ~Assalariado();

        void setSalario(double);
        double getSalario();

        double calculaSalario();

    private:
        double salario;
};

#endif // ASSALARIADO_H
