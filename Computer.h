// header for human class
#ifndef o_h
#define o_h

#include <iostream>
#include "Player.h"

class Computer: public Player {
    private:
        std::string name; //name of player/computer
    public:
    Computer(std::string n = "Computer"); // default constructor
    std::string getName(); // returns name of computer
    char makeMove(); // returns move made by computer
};

#endif