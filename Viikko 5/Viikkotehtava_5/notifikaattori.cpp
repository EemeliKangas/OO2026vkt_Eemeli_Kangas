#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout<<"notifikaattori luotu"<<endl;
}
void Notifikaattori::lisaa(Seuraaja* s)
{
    s->next = seuraajat;
    seuraajat = s;
    cout<<"Seuraaja "<<s->getNimi()<<" lisattiin"<<endl;
}
void Notifikaattori::poista(Seuraaja* s)
{
    Seuraaja* nykyinen = seuraajat;
    Seuraaja* edellinen = nullptr;

    while (nykyinen != nullptr)
    {
        if (nykyinen == s)
        {
            if (edellinen == nullptr)
            {
                seuraajat = nykyinen->next;
            } else
                {
                edellinen->next = nykyinen->next;
                }
            nykyinen->next = nullptr;
            return;
        }
        edellinen = nykyinen;
        nykyinen = nykyinen->next;
    }
}
void Notifikaattori::tulosta()
{
    Seuraaja* o = seuraajat;

    while (o != nullptr)
    {
        cout <<o->getNimi()<<endl;
        o = o->next;
    }
}

void Notifikaattori::postita(string s)
{
    cout<<"Notifikaattori postitti viestin: "<<s<<endl;
    Seuraaja* o = seuraajat;
    while (o != nullptr)
    {
    o->paivitys(s); // tehdään silmukassa jotain oliolle
    o = o->next;
    }
}
