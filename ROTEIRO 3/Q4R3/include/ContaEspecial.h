#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <ContaCorrente.h>


class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(std::string, int, double, double, int);
        virtual ~ContaEspecial();
        double definirLimite();
};

#endif // CONTAESPECIAL_H
