#include <iostream>
#include "dht.h"

using namespace std;

int main()
{
    /*int bing bong;
    Random otus; //kutsutaan luokan constructor
    otus.setSeed(time(0));

    for(int i = 0;i < 10;i++){
        cout<<"satunnaisluku = "<<(otus.rand()%20)+1<<endl;
    }*/
    DHT olio;
    olio.begin();

    for(int i = 0;i < 10;i++){
        cout<<"lampotila = "<<olio.readTemperature()<<endl;
    }


    return 0;
}
