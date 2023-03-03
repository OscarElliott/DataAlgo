// inherits from player, only capeable of picking rock
#include "Player.h"
#include "Computer.h"


class Computer: public Player {
    private:
        std::string name; //name of player/computer
    public:
    Computer::Computer(stdin::string n = "Computer"); // default constructor
    Computer::std::string getName(){
        return name;
    } // returns name of computer
    Computer::char makeMove(){
        return 'R'; //
    } // computer always plays rock

};