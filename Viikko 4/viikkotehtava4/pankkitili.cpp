#include "pankkitili.h"

Pankkitili::Pankkitili(string s)
{
    s = omistaja;
    cout<<"Pankkitili luotiin omistajalle"<<omistaja<<endl;
}

double Pankkitili::getbalance()
{
    return saldo;
}

bool Pankkitili::deposit(double m)
{
    if(m < 0)
    {
        cout<<"Talletus epaonnistui";
        return false;
    }
    else
    {
        saldo = saldo+m;
        cout<<"tallettiin "<<m<<"tilille"<<endl;
        return true;
    }
}

bool Pankkitili::withdraw(double m)
{
    if(m < 0 || saldo-m<0)
    {
        cout<<"Nosto epaonnistui, yritit nostaa negatiivisen summan tai "
            >>"nostaa tilin saldon yli."<<endl;
        return false;
    }
    else
    {
        saldo=saldo-m;
        cout<<"nostettiin "<<m<<"tililta"<<endl;
        return true;
    }
}

