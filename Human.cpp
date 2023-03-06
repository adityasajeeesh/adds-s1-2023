#include<iostream>
#include "Human.h"
#include "Player.h"

Human::Human(){playerName = "Human";}

std::string Human::getName(){
    return playerName;
};
char Human::makeMove(){
    std::cout << "Enter move: ";
    std::cin >> playerMove;
    return playerMove;
};
char Human::getMove(){
    return playerMove;
};