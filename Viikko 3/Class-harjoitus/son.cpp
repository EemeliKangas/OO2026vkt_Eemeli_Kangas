#include "son.h"
#include <iostream>
son::son(string isa, string poika) : faija(isa), sonName(poika)
{
    //Isän pitää olla hengissä, jotta voidaan käyttää metodeja.
    cout<<"Poika = "<<sonName
         <<" created"<<endl;
    this->faijaNickName = "Iska"; //ei vaadi this.
}

son::~son()
{
    cout<<"Poika = "<<sonName
         <<" deleted"<<endl;
}

void son::printEducation()
{
    cout<<"Sons education = koodari"<<endl;
}
