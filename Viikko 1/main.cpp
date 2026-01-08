#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int);

int main()
{
    int maxNum = 0;

    cout << "Anna maksimi luku:";
    cin >> maxNum;

    game(maxNum);

}
int game(int maxNum){
    srand(time(0));

    int rNum = rand() % (maxNum+1);
    int gNum = 0;
    int numGuess = 0;



    while(gNum!=rNum)
    {
        cout << "Arvaa luku valilta 1-"<<maxNum<<":";

        cin >> gNum;
        ++numGuess;

        if(gNum>rNum)
        {
            cout << "Arvaus oli liian suuri!"<<endl;
        }

        else if(gNum<rNum)
        {
            cout << "Arvaus oli liian pieni!"<<endl;
        }
    }
    cout << "Arvaus oli oikein!!"<<" Sait oikean numeron arvauskerralla:"<<numGuess<<endl;

    return numGuess;
}

