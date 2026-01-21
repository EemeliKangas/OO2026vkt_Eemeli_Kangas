#include <iostream>
#include "faija.h"
#include "son.h"
using namespace std;

int main()
{
    son poika("Pentti", "Matti");
    poika.printFaijaNimi();
    poika.printEducation();
    poika.faija::printEducation();
    return 0;
}
