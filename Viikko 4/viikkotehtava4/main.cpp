#include "luottotili.h"
#include "pankkitili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    asiakas p("Pekka",500);
    p.talletus(1000);
    p.luotonNosto(200);

    asiakas h("Heikki", 1000);

    p.tiliSiirto(500,h);
    p.showSaldo();
    h.showSaldo();
    h.luotonNosto(999);

    Pankkitili a("Arttu");
    a.deposit(4000);
    a.withdraw(5000);
    a.getbalance();
}
