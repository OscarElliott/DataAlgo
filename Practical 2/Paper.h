#ifndef PAPER_h
#define PAPER_h

#include <string>
#include "Move.h"

class Paper: public Move {
    private:
        string name; //name of Move
        vector<Move> victory{Rock}; // list of moves this move beats
        vector<Move> defeat{Scissors}; // list of moves this move losses to
};

#endif