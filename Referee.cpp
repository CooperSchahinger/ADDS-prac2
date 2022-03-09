#include "Referee.h"

char Referee::findWinner(char humanChoice, char computerChoice)
{
    char gameResult;

    int huChoice = humanChoice;

    int compChoice = computerChoice;

    if( huChoice == 'R' && compChoice == 'R')
    {
        gameResult = 'T';
    } 
    else if( huChoice == 'P' && compChoice == 'P')
    {
        gameResult = 'T';
    }
    else if( huChoice == 'S' && compChoice == 'S')
    {
        gameResult = 'T';
    }
    else if( huChoice == 'R' && compChoice == 'P')
    {
        gameResult = 'L';
    }
    else if( huChoice == 'R' && compChoice == 'S')
    {
        gameResult = 'W';
    }
    else if( huChoice == 'P' && compChoice == 'R')
    {
        gameResult = 'W';
    }
    else if( huChoice == 'P' && compChoice == 'S')
    {
        gameResult = 'L';
    }
    else if( huChoice == 'S' && compChoice == 'R')
    {
        gameResult = 'L';
    }
    else if( huChoice == 'S' && compChoice == 'P')
    {
        gameResult = 'W';
    }

    setResult(gameResult);
    return gameResult;
}

void Referee::setResult(char gameRes)
{
    result = gameRes;
}