#include "Move.h"
#include <string>

using namespace std;

//returns the name of a Move instance, for example "Ninja".
string Move::getName(){
    return name;
}

// Allows to set name which is private with public function
void Move::setName(string newname){
    name = newname;
}


// returns list of moves given move beats
vector<Move> Move::getWins(){
    return victory;
}

// returns list of moves given move losses too
vector<Move> Move::getLosses(){
    return defeat;
}