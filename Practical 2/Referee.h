#ifndef REFEREE_h
#define REFEREE_h

#include "Player.h"

class Referee{
    public:
        Referee(); //default constructor
        Player * refGame(Player * player1, Player * player2);
        // returns the reference to the winning player

        // call makeMove for player 1, then using returned move 'move'.getwiiners, 'move' getLosers, loop through the vectors check if player2's move matches a move in either.
        // return player 1 if they win, retuern player 2 if they win, return nullptr if no acceptable move occurs
};

#endif