#include<iostream>
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player{
    public:
        std::string playerName;
        char playerMove;
        Human(){};
        Human(std::string name){playerName=name;}
        std::string getName(); // get name of player
        char makeMove(); // sets move of player
        char returnMove(); // returns move of player
};

#endif /* HUMAN_H */
