#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<algorithm>
#include<string>

class Player{
    public:
        virtual char makeMove()=0;
        virtual char getMove()=0;
        virtual std::string getName()=0;
};

#endif /* PLAYER_H */
