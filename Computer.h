#include<iostream>
#include "Player.h"
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player{
    protected:
        std::string computerName;
        char computerMove;
    public:
        Computer();
        Computer(std::string compName){computerName=compName;}
        std::string getName(); // get name of computer
        char makeMove(); // sets move of computer
        char getMove(); // returns move of computer
};

#endif /* COMPUTER_H */
