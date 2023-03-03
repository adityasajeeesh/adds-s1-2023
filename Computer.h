#include<iostream>
#include "Player.h"
#ifndef BCD1F12B_9D97_4CB3_BAAD_E179D9D7C4E1
#define BCD1F12B_9D97_4CB3_BAAD_E179D9D7C4E1

class Computer : public Player{
    public:
        std::string computerName = "Computer";
        char computerMove;
        Computer(){};
        std::string getName(); // get name of computer
        char makeMove(); // sets move of computer
};

#endif /* BCD1F12B_9D97_4CB3_BAAD_E179D9D7C4E1 */
