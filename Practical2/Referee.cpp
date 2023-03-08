// Referee will match to players and return a refrence to a winning player but will return nullptr on a draw
#include "Referee.h"
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Move.h"
#include <iostream>
#include <vector>

using namespace std;



    Referee::Referee(){}; //default constructor

    Player* Referee::refGame(Player * player1, Player * player2){ 
        Move * move1 = player1->makeMove(); // player 1's Move object
        Move * move2 = player2->makeMove(); // player 2's Move object
        cout << "moves called";
        // make local vector with list of win and loss conditions
        vector<Move*> p1wincondition = move1->getWins();
        vector<Move*> p2wincondition = move1->getLosses();
        cout << "win com set";
        // record size of both vectors for use in loops
        int size1 = p1wincondition.size();
        int size2 = p2wincondition.size();
        // check of move2 is one of the win conditions for player 1
        for (int i=0; i<size1; i++) {
            if(move2 == p1wincondition[i]) {
                cout << player1->getName() << " wins" << endl;
                return player1;

            }
        };
        // check if move2 is one of the win conditions for player 2
        for (int i=0; i<size2; i++) {
            if(move2 == p2wincondition[i]){
                cout << player2->getName() << " wins" << endl;
                return player2;

            }
        };
        cout << "Tie" << endl;
        return nullptr;     
    }
