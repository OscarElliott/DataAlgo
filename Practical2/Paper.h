#ifndef PAPER_h
#define PAPER_h

#include <string>
#include <vector>
#include "Move.h"
#include "Rock.h"
#include "Scissors.h"

class Paper: public Move {
    private:
        std::string name; //name of Move
        std::vector<Move> victory; // list of moves this move beats
        std::vector<Move> defeat; // list of moves this move losses to
    public:
        Paper(std::string n = "Paper"); // Paper constructor, default name for paper is paper

};

#endif