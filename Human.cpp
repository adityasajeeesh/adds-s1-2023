#include<iostream>
#include<Human.h>
#include<Player.h>
#include<string>

std::string Human::getName(){
    return playerName;
};
char Human::makeMove(){
    std::cout << "Enter move:";
    std::cin >> playerMove;
    return playerMove;
}