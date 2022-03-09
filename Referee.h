#ifndef REFEREE_H
#define REFEREE_H

class Referee
{
    char result;
    void setResult(char gameResult);
public:
    char findWinner(char humanChoice, char computerChoice);
};

#endif