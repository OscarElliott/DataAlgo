// Referee will match to players and return a refrence to a winning player but will return nullptr on a draw
#include "Referee.h"
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include <iostream>
#include <vector>



    Referee::Referee(){}; //default constructor

    Player * Referee::refGame(Player * player1, Player * player2){ 
        Move * move1 = player1->makeMove(); // player 1's Move object
        Move * move2 = player2->makeMove(); // player 2's Move object
        
        // make local vector with list of win and loss conditions
        vector<Move> p1wincondition = move1->getWins();
        vector<Move> p2wincondition = move1->getLosses();
        // record size of both vectors for use in loops
        size1 = p1wincondition.size();
        size2 = p2wincondition.size();
        // check of move2 is one of the win conditions for player 1
        for (i=0, i++, i<size1){
            if(move2 == p1wincondition){
                std::cout << player1->getName() << " wins" << std::endl;
                return player1;

            }
        }
        // check if move2 is one of the win conditions for player 2
        for (i=0, i++, i<size2){
            if(move2 == p2wincondition){
                std::cout << player2->getName() << " wins" << std::endl;
                return player2;

            }
        }
        std::cout << "Tie" << std::endl;
        return nullptr;     
    }
