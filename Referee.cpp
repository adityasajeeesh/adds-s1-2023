#include<iostream>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include "Referee.h"
#include<string>

Player * Referee::refGame(Player * player1, Player * player2){
    Player * winner;
    player1->makeMove();
    player2->makeMove();
    if((player1->getMove() == 'P' && player2->getMove() == 'R') ||
        (player1->getMove() == 'S' && player2->getMove() == 'P') ||
        (player1->getMove() == 'R' && player2->getMove() == 'S')){
        winner = player1;
    }
    else if(player1->getMove() == player2->getMove()){
        winner = nullptr;
    }
    else{
        winner = player2;
    }
    return winner;
};