#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"



Paper::Paper(std::string n = "Paper") : name (n) {
    victory.push_back(new Rock());
    defeat.push_back(new Scissors());


}