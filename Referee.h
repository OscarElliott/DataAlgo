#ifndef o_h
#define o_h

#include <iostream>
#include <string>
#include "Player.h"

class Referee{

    public:

    Referee(); //default constructor
    Player * refGame(Player * player1, Player * player2)
    // returns the reference to the winning player

};

#endif