#include<iostream>
#include<Human.h>
#include<Player.h>
#include<Computer.h>
#include<Referee.h>
#include<string>

Player Referee::*refGame(Player * player1, Player * player2){
    if(player1->makeMove() == 'P' && player2->makeMove() == 'R' ||
        player1->makeMove() == 'S' && player2->makeMove() == 'P' ||
        player1->makeMove() == 'R' && player2->makeMove() == 'S'){
        player1->getName();
    }
    if(player2->makeMove() == 'P' && player1->makeMove() == 'R' ||
        player2->makeMove() == 'S' && player1->makeMove() == 'P' ||
        player2->makeMove() == 'R' && player1->makeMove() == 'S'){
        player2->getName();
    }
};