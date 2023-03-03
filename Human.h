#include<iostream>
#include "Player.h"
#ifndef E06212A3_6FE6_490F_925D_2A3E8D6C6964
#define E06212A3_6FE6_490F_925D_2A3E8D6C6964

class Human : public Player{
    public:
        std::string playerName;
        char playerMove;
        Human(){};
        Human(std::string name){playerName=name;}
        std::string getName(); // get name of player
        char makeMove(); // sets move of player
};

#endif /* E06212A3_6FE6_490F_925D_2A3E8D6C6964 */
