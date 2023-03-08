// inherits from player
#include "Player.h"
#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include <iostream>

using namespace std;


Human::Human(string n) {
    name = n;
}

string Human::getName() {
    return name;
}

Move* Human::makeMove() {
    string pmove;
    cout << "Enter move: ";
    cin >> pmove
    if (pmove == "Rock") {
        Move* r1 = new Rock();
        return r1;
    } else if (pmove == "Paper") {
        Move* p1 = new Paper();
        return p1;
    } else if (pmove == "Scissors") {
        Move* s1 = new Scissors();
        return s1;
    } else {
        // to avoid crashes for invalid moves
        cout << "Error: invalid Move";
        return nullptr;
    }
}
