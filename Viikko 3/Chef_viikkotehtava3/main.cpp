#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef kokki("Pete");
    kokki.makeSalad(12);
    kokki.makeSoup(6);
    ItalianChef ikok("Pietro");
    ikok.makeSalad(6);
    ikok.makeSoup(9);
    ikok.askSecret("pizza",6,6);


}
