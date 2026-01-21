#include "faija.h"
#include<iostream>
faija::faija(string s)
{
    faijaNimi = s;
    cout<<"Faija = "<<faijaNimi
        <<" created"<<endl;
}

faija::~faija()
{
    cout<<"Faija = "<<faijaNimi
         <<" deleted"<<endl;
}

void faija::printFaijaNimi()
{
    cout<<"Father name = "<<faijaNimi<<endl;
    cout<<"Father nickname = "<<faijaNickName<<endl;
}

void faija::printEducation()
{
    cout<<"Father education = puuseppa"<<endl;
}
