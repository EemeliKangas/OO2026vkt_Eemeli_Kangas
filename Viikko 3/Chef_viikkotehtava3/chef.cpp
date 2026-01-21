#include "chef.h"

Chef::Chef(string s)
{
    chefName = s;
    cout<< "Chef "<<chefName<<" has been arrived."<<endl;
}

Chef::~Chef()
{
    cout<< "Chef "<<getname()<<" has left the chat!"<<endl;
}

string Chef::getname()
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    return aines/5;
}

int Chef::makeSoup(int aines)
{
    return aines/3;
}
