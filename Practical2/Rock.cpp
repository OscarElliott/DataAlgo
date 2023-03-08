#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"


Rock::Rock(std::string n = "Rock") : name (n) {
    victory.push_back(new Scissors());
    defeat.push_back(new Paper());


}
