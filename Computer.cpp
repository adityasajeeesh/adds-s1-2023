#include<iostream>
#include "Player.h"
#include "Computer.h"

Computer::Computer(){};

std::string Computer::getName(){
    computerName = "Computer";
    return computerName;
};
char Computer::makeMove(){
    computerMove = 'R';
    return computerMove;
};
char Computer::getMove(){
    return computerMove;
};