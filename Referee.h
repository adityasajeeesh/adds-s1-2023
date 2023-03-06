#include<iostream>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include<string>
#ifndef REFEREE_H
#define REFEREE_H

class Referee {
    public:
        Referee(){}; // constructor
        Player * refGame(Player * player1, Player * player2); // returns the reference to the winning player
};

#endif /* REFEREE_H */
