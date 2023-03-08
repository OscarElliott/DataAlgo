// header for computer class
#ifndef COMPUTER_h
#define COMPUTER_h

#include <string>
#include "Player.h"
#include "Move.h"

class Computer: public Player {
    private:
        std::string name; //name of player/computer
        Move move; // move chosen by computer
    public:
    Computer(std::string n = "Computer"); // default constructor
    std::string getName(); // returns name of computer
    Move * makeMove(); // returns move made by computer
};

#endif