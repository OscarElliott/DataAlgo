// inherits from player, only capeable of picking rock
#include "Player.h"
#include "Computer.h"
#include "Move.h"

 // default constructor
Computer::Computer(std::string n){
    name = n;
};

// returns name of computer
std::string Computer::getName(){
   return name;
} 

// computer always plays rock
Move * Computer::makeMove() {
    Move* pmove = new Move();
    std::string move = "Rock";
    pmove->setName(move);
    return pmove;
}