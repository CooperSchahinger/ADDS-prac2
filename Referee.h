#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee
{
    char result;
    void setResult(char gameResult);
    char findWinner(Human Human, Computer Computer);
public:
    char showWinner();
};

#endif