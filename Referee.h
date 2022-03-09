#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee
{
    char result;
    void setResult(char gameResult);
public:
    char refGame(Human Human, Computer Computer);
    // char showWinner();
};

#endif