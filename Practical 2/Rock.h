#ifndef ROCK_h
#define ROCK_h

#include <string>
#include "Move.h"

class Rock: public Move {
    private:
        string name; //name of Move
        vector<Move> victory{Scissors}; // list of moves this move beats
        vector<Move> defeat{Paper}; // list of moves this move losses to
};

#endif