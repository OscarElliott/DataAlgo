// inherits from player, only capeable of picking rock
#include "Player.h"
#include "Computer.h"

    Computer::Computer(stdin::string n = "Computer"); // default constructor
    Computer::std::string getName(){
        return name;
    } // returns name of computer
    Computer::char makeMove(){
        return 'R'; //
    } // computer always plays rock

