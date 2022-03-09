#include <iostream>
#include "Computer.h"
#include <ctime>

Computer::Computer()
{
    std::srand(std::time(0));
}

char Computer::makeMove()
{
    char choice;
    switch((rand() %3) + 1)
    {
        case 1:
            choice = 'R';
            break;
        case 2: 
            choice = 'P';
            break;
        case 3: 
            choice = 'S';
            break;
    }

    setMove(choice);
    return choice;
}

void Computer::setMove(char CompChoice)
{
    move = CompChoice;
}