#include "Human.h"
#include <iostream>


char Human::makeMove()
{
    char humanMove;
    std::cout << "Make a choice (R,P,S):" << std::endl;
    std::cin >> humanMove;

    setMove(humanMove);
    return humanMove;
}


void Human::setMove(char human)
{
    move = human;
}