// header for human class
#ifndef HUMAN_h
#define HUMAN_h

#include <iostream>
#include "Player.h"

class Human: public Player {
    private:
        std::string name; //name of player/human
        char move; // move chosen by human
    public:
    Human(std::string n = "Human"); // human constructor, default name for Human is Human
    std::string getName(); // returns name of human
    char makeMove(); // returns move made by human
};

#endif