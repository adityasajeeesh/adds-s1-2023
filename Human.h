#include<iostream>
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player{
            std::string playerName;
            char playerMove;
        public:
            Human();
            Human(std::string name){playerName=name;}
            std::string getName(); // get name of player
            char makeMove(); // sets move of player
            char getMove(); // returns move of player
};

#endif /* HUMAN_H */
