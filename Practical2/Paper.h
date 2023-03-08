#ifndef PAPER_h
#define PAPER_h

#include <string>
#include "Move.h"
#include "Rock.h"
#include "Scissors.h"

class Paper: public Move {
    private:
        std::string name; //name of Move
        std::vector<Move> victory{Rock}; // list of moves this move beats
        std::vector<Move> defeat{Scissors}; // list of moves this move losses to
};

#endif