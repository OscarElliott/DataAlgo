// header for human class
#ifndef HUMAN_h
#define HUMAN_h

#include <string>
#include "Player.h"
#include "Move.h"

class Human: public Player {
    private:
        std::string name; //name of player/human
        Move move; // move chosen by human
        std::string getName(); // returns name of human
    public:
        Human(std::string n = "Human"); // human constructor, default name for Human is Human
        Move * makeMove(); // returns move made by human
};

#endif