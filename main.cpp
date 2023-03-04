#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>


int main() {
    Referee ref;
    Player* human = new Human();
    Player* computer = new Computer();

 
    Player * winner = ref.refGame(human, computer);
        
        

    delete human;
    delete computer;

    return 0;
}