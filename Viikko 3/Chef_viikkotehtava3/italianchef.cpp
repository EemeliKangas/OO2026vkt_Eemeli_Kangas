#include "italianchef.h"

ItalianChef::ItalianChef(string chefName) : Chef (chefName)
{
    cout<<"Italian chef "<<chefName<<" has arrived"<<"    (constructor)"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian chef "<<chefName<<" has been shot!"<<"    (deconstructor)"<<endl;
}

bool ItalianChef::askSecret(string a, int water, int flour)
{
    if(password.compare(a)==0)
    {
        cout<<"Password correct!"<<endl;
        makePizza(water,flour);
        return true;
    }
    else
    {
        cout<<"Password incorrect!"<<endl;
        return false;
    }
}

int ItalianChef::makePizza(int water,int flour)
{
    int maara =min(water,flour)/5;
    cout<<chefName<<" has "<<water<<" and "<<flour<<". He can make "<<maara<<" pizzas"<<endl;
    return maara;
}
