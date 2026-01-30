#include "luottotili.h"

Luottotili::Luottotili(string s, double m): Pankkitili(s)
{
    luottoRaja = m;
    omistaja = s;
    cout<<"Luottotili luotiin omistajalle "<<omistaja<<
    ", luottorajalla "<<m<<endl;

}

bool Luottotili::deposit(double m)
{
    if(m < 0 || m + saldo > 0)
    {
        cout<<"Luoton maksu epaonnistui";
        return false;
    }
    else
    {
        saldo = saldo + m;
        cout<<"maksettiin "<<m<<" pankkitilille luottotililta"<<endl;
        return true;
    }
}

bool Luottotili::withdraw(double m)
{
    if(m < 0 || -m < -luottoRaja)
    {
        cout<<"Luoton nosto epaonnistui";
        return false;
    }
    else
    {
        saldo = saldo - m;
        cout<<omistaja<<" nosti "<<m<<" luottotililta. Luottoa jaljella: "<<luottoRaja-m<<endl;
        return true;
    }
}
