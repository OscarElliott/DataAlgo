// header for human class
#ifndef o_h
#define o_h

#include <iostream>
#include "Player.h"

class Computer: public Player {
    private:
        string name; //name of player/computer
    public:
    Computer(string n = "Computer"); // default constructor
    string getName(); // returns name of computer
    char makeMove(); // returns move made by computer
}

#endif