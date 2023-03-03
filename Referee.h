#include<iostream>
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include<string>
#ifndef C1B23EE9_4A4C_4A54_8D86_C144B1FB3461
#define C1B23EE9_4A4C_4A54_8D86_C144B1FB3461

class Referee {
    public:
        Referee(){}; // constructor
        Player * refGame(Player * player1, Player * player2){}; // returns the reference to the winning player
};

#endif /* C1B23EE9_4A4C_4A54_8D86_C144B1FB3461 */
