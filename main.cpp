#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"



int main() {
    Referee ref;
    Player* human = new Human();
    Player* computer = new Computer();

    for (int i = 0; i < 3; i++) {
        ref.refGame(human, computer);
        std::cout << std::endl;
    }

    delete human;
    delete computer;

    return 0;
}