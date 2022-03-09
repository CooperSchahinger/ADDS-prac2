#include <iostream>
// #include "Human.h"
// #include "Computer.h"
#include "Referee.h"

int main()
{
    Human Player;
    Computer Computer;
    Referee Ref;

    std::cout << Ref.refGame(Player, Computer) << std::endl;

    return 0;
}