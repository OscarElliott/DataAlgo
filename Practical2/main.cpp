#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Move.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"
#include <iostream>


int main() {
    Referee ref;
    Player* human = new Human();
    Player* computer = new Computer();
    std::cout << "players made";
 
    Player* winner = ref.refGame(human, computer);
        
        

    delete human;
    delete computer;

    return 0;
}