// header for human class
#ifndef o_h
#define o_h

#include <iostream>
#include "Player.h"

class Human: public Player {
    private:
        string name; //name of player/human
        char move; // move chosen by human
    public:
    Human(string n = "Human"); // human constructor, default name for Human is Human
    Human(string n); // regular constructor
    string getName(); // returns name of human
    char makeMove(); // returns move made by human
}

#endif