#include "Move.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"


Scissors::Scissors(std::string n = "Scissors") : name(n) {
    victory.push_back(new Paper());
    defeat.push_back(new Rock());


}
