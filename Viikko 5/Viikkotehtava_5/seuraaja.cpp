#include "seuraaja.h"

Seuraaja::Seuraaja(string s)
{
    nimi = string s;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string s)
{
    cout<<s<<endl;
}

