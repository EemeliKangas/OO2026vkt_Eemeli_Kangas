#include "pankkitili.h"

Pankkitili::Pankkitili(string s)
{
    omistaja = s;
    saldo = 0;
    cout<<"Pankkitili luotiin omistajalle "<<omistaja<<endl;
}

double Pankkitili::getbalance()
{
    cout<<omistaja<<" tilin saldo: "<<saldo<<endl;
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
        cout<<omistaja<<" talletti "<<m<<" tilille"<<endl;
        return true;
    }
}

bool Pankkitili::withdraw(double m)
{
    if(m < 0 || saldo-m<0)
    {
        cout<<"Nosto epaonnistui, yritit nostaa negatiivisen summan tai "
            <<"nostaa tilin saldon yli."<<endl;
        return false;
    }
    else
    {
        saldo=saldo-m;
        cout<<omistaja<<" nosti "<<m<<" tililta"<<endl;
        return true;
    }
}

