#include "Player.h"
#include "Human.h"
#include "Referee.h"
#include "Move.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"
#include <iostream>


int main() {
    Referee ref;
    Player* human1 = new Human();
    Player* human2 = new Human();

 
    Player * winner = ref.refGame(human, computer);
        
        

    delete human1;
    delete human2;

    return 0;
}