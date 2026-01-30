#include "asiakas.h"

asiakas::asiakas(string s, double m) : luottotili(s, m), kayttotili(s)
{
    nimi = s;
    cout<<"Asiakkuus luotu "<<nimi<<endl;
}

string asiakas::getNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout<<"Pankki"<<kayttotili.getbalance()<<endl;
    cout<<"Luotto"<<luottotili.getbalance()<<endl;
}

bool asiakas::talletus(double m)
{
   return kayttotili.deposit(m);
}

bool asiakas::nosto(double m)
{
    return kayttotili.withdraw(m);
}
bool asiakas::luotonMaksu(double m)
{
    return luottotili.deposit(m);
}
bool asiakas::luotonNosto(double m)
{
    return luottotili.withdraw(m);
}
bool asiakas::tiliSiirto(double m, asiakas& kohde)
{
    if (m <= 0)
        return false;

    if (kayttotili.withdraw(m))
    {
        kohde.kayttotili.deposit(m);
        return true;
    }

    return false;
}
