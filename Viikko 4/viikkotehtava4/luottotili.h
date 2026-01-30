#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <iostream>
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double);
    bool deposit(double);
    bool withdraw(double);
protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
