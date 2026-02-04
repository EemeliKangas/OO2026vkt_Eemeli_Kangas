#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();

    n.postita("bing bong");

    n.poista(&a);

    n.postita("Toinen viesti.");

    return 0;
}

