#include "seuraaja.h"

Seuraaja::Seuraaja(string s)
{
    nimi = s;
    cout<<"Seuraaja "<<s<<" luotu"<<endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string s)
{
    cout<<"Seuraaja "<<nimi<<" sai viestin: "<<s<<endl;
}

