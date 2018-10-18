#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

        void setNome(std::string);
        void setMatricula(int);

        std::string getNome();
        int getMatricula();

        virtual double calculaSalario()=0;

    protected:
        std::string nome;
        int matricula;
};

#endif // FUNCIONARIO_H
