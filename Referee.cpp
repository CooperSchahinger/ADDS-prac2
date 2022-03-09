#include "Referee.h"

char Referee::refGame(Human Player, Computer Computer)
{
    char gameResult = 'T';

    int huChoice = Player.makeMove();

    int compChoice = Computer.makeMove();

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

// char Referee::showWinner()
// {
//     Human human;
//     Computer computer;
//     char winner = findWinner(human, computer);

//     return winner;
// }

void Referee::setResult(char gameRes)
{
    result = gameRes;
}