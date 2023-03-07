#ifndef SCISSORS_h
#define SCISSORS_h

#include <string>
#include "Move.h"

class Scissors: public Move {
    private:
        string name; //name of Move
        vector<Move> victory{Paper}; // list of moves this move beats
        vector<Move> defeat{Rock}; // list of moves this move losses to
};

#endif