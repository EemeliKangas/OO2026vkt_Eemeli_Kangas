#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Game::Game(int a)
{
    playerGuess=0;
    numOfGuesses=0;
    srand(time(0));
    maxNumber=a;
    cout<<"GAME CONSTRUCTOR: peli aloitettu "<<maxNumber<<" suurinpana arvauksena."<<endl;
}

Game::~Game()
{
    cout<<"GAME DESTRUCTOR: clear"<<endl;
}

void Game::play()
{

    randomNumber = rand() % maxNumber + 1;
    playerGuess = 0;

    while(playerGuess!=randomNumber)
    {
        cout << "Arvaa luku valilta 1-"<<maxNumber<<":"<<endl;

        cin >> playerGuess;
        ++numOfGuesses;

        if(playerGuess>randomNumber)
        {
            cout << "Arvaus oli liian suuri!"<<endl;
        }

        else if(playerGuess<randomNumber)
        {
            cout << "Arvaus oli liian pieni!"<<endl;
        }
    }

    printGameResult();
}

void Game::printGameResult()
{
    cout<<"Voitit pelin numerolla: "<<randomNumber<<". Se vaati sinulta: "<<numOfGuesses<<" arvauskertaa."<<endl;
}
