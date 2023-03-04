// inherits from player, only capeable of picking rock
#include "Player.h"
#include "Computer.h"

    Computer::Computer(std::string n){
        name = n;
    }; // default constructor
    std::string Computer::getName(){
        return name;
    } // returns name of computer
    char Computer::makeMove(){
        return 'R'; //
    } // computer always plays rock

