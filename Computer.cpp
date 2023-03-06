#include<iostream>
#include "Player.h"
#include "Computer.h"

Computer::Computer(){};

std::string Computer::getName(){
    return computerName;
};
char Computer::makeMove(){
    char computerMove = 'R';
    return 0;
};
char Computer::getMove(){
    return computerMove;
};