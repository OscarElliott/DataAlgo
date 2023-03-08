#ifndef ROCK_h
#define ROCK_h

#include <string>
#include <vector>
#include "Move.h"
#include "Paper.h"
#include "Scissors.h"


class Rock: public Move {
    private:
        std::string name; //name of Move
        std::vector<Move> victory; // list of moves this move beats
        std::vector<Move> defeat; // list of moves this move losses to
    public:
        Rock(std::string n = "Rock"); // rock constructor, default name for rock is Rock

};

#endif