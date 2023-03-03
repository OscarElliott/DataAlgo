// Referee will match to players and return a refrence to a winning player but will return nullptr on a draw
#include "Referee.h"
#include "Player.h"
#include "Computer.h"
#include "Human.h"


   Referee::Referee(){}; //default constructor

    Referee::Player * refGame(Player * player1, Player * player2){ 
        char move1 = player1->makeMove(); // player 1's move
        char move2 = player2->makeMove(); // player 2's move

        if (move1 == move2) {
        std::cout << "Tie!" << std::endl;
        return nullptr;
         }
        else if ((move1 == 'R' && move2 == 'S') || (move1 == 'P' && move2 == 'R') || (move1 == 'S' && move2 == 'P')) {
        std::cout << p1->getName() << " wins!" << std::endl;
        return p1;
        }
        else {
        std::cout << p2->getName() << " wins!" << std::endl;
        return p2;
    }
    }

};

    
