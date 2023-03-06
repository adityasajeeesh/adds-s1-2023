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
    if((player1->returnMove() == 'P' && player2->returnMove() == 'R') ||
        (player1->returnMove() == 'S' && player2->returnMove() == 'P') ||
        (player1->returnMove() == 'R' && player2->returnMove() == 'S')){
        winner = player1;
    }
    else if(player1->returnMove() == player2->returnMove()){
        winner = nullptr;
    }
    else{
        winner = player2;
    }
    return winner;
};