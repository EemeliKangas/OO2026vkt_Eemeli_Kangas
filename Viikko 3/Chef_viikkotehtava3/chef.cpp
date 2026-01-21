#include "chef.h"

Chef::Chef(string s)
{
    chefName = s;
    cout<< "Chef "<<chefName<<" has arrived."<<"    (constructor)"<<endl;
}

Chef::~Chef()
{
    cout<< "Chef "<<getname()<<" has left the chat!"<<"    (deconstructor)"<<endl;
}

string Chef::getname()
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    cout<<"Using "<<aines<<" ingredients "<<chefName<<" can make "<<aines/5<<" salads."<<endl;
    return aines/5;
}

int Chef::makeSoup(int aines)
{
    cout<<"Using "<<aines<<" ingredients "<<chefName<<" can make "<<aines/3<<" soups."<<endl;
    return aines/3;
}
