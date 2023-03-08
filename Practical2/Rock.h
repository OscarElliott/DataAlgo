#ifndef ROCK_h
#define ROCK_h

#include <string>
#include "Move.h"
#include "Paper.h"
#include "Scissors.h"


class Rock: public Move {
    private:
        std::string name; //name of Move
        std::vector<Move> victory{Scissors}; // list of moves this move beats
        std::vector<Move> defeat{Paper}; // list of moves this move losses to
};

#endif