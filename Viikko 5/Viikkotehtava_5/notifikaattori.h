#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <string>
#include "seuraaja.h"

class Notifikaattori
{
public:
    Notifikaattori();
    void poista(Seuraaja *);
    void lisaa(Seuraaja *);
    void tulosta();
    void postita(string);
private:
    Seuraaja *seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
