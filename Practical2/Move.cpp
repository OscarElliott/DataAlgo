#include "Move.h"
#include <string>

using namespace std;

//returns the name of a Move instance, for example "Ninja".
string Move::getName(){
    return name;
}

// returns list of moves given move beats
vector<Move> getWins(){
    return victory;
}

// returns list of moves given move losses too
vector<Move> getLosses(){
    return defeat;
}