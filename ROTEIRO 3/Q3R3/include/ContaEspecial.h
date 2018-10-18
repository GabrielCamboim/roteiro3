#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <Conta.h>


class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(std::string,double,double,double);
        virtual ~ContaEspecial();
        void definirLimite();
};

#endif // CONTAESPECIAL_H
