#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;

int main()
{
    vector<student> Luokka;
    Luokka.reserve(10);
    Luokka.emplace_back(student("Saku Sammkko", 1));
    Luokka.emplace_back("Jeppe Niilonpoika", 2);
    Luokka.emplace_back("Aku Ankka", 3);

    vector<student>::iterator it = Luokka.begin();

    for(auto & s : Luokka)
    {
        cout<<"Student ="<<s.getName()<<endl;
    }

    auto sortFKT = [&](student & a, student & b){
        return a.getNumber() > b.getNumber();
    };
    /*sort(Luokka.begin(),Luokka.end(),[](student & a, student & b)
         {
        return a.getNumber()>b.getNumber();
    });*/
    sort(Luokka.begin(),Luokka.end(),sortFKT);
    for(auto & s : Luokka)
    {
        cout<<"Student ="<<s.getName()<<endl;
    }

    cout<<"Luoka eka: "<<it++->getName()<<endl;
    cout<<"Luoka toka: "<<it++->getName()<<endl;
    cout<<"Luoka kolmas: "<<it->getName()<<endl;
    return 0;
}
