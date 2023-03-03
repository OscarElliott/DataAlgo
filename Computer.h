// header for human class
#ifndef COMPUTER_h
#define COMPUTER_h

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