#ifndef SCISSORS_h
#define SCISSORS_h

#include <string>
#include <vector>
#include "Move.h"
#include "Paper.h"
#include "Rock.h"

class Scissors: public Move {
    private:
        std::string name; //name of Move
        std::vector<Move> victory{Paper}; // list of moves this move beats
        std::vector<Move> defeat{Rock}; // list of moves this move losses to
    public:
        Scissors(std::string n = "Scissors"); // scissors constructor, default name for scissors is scissors

};

#endif