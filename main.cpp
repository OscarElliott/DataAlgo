#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>


int main() {
    Referee ref;
    Player* human = new Human();
    Player* computer = new Computer();

    for (int i = 0; i < 3; i++) {
        Player * winner = ref.refGame(human, computer);
        if(winner == nullptr) {
            std::cout << "Tie" << std::endl;
        }
        else {
            std::cout << winner->getName() << " wins" << std::endl;
        }
        std::cout << std::endl;
    }

    delete human;
    delete computer;

    return 0;
}