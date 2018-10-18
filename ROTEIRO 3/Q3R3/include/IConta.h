#ifndef ICONTA_H
#define ICONTA_H


class IConta
{
    public:
        IConta();
        virtual ~IConta();
        virtual void sacar(double)=0;
        virtual void depositar(double)=0;

};

#endif // ICONTA_H
