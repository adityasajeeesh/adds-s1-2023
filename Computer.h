#include<iostream>
#include "Player.h"
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player{
    public:
        std::string computerName = "Computer";
        char computerMove;
        Computer(){};
        Computer(std::string compName){computerName=compName;}
        std::string getName(); // get name of computer
        char makeMove(); // sets move of computer
        char returnMove(); // returns move of computer
};

#endif /* COMPUTER_H */
