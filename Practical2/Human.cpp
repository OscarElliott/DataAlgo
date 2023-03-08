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

Move * Human::makeMove() {
    string move;
    cout << "Enter move: ";
    cin >> move;
    if (move == "Rock") {
        return new Rock();
    } else if (move == "Paper") {
        return new Paper();
    } else if (move == "Scissors") {
        return new Scissors();
    } else {
        // to avoid crashes for invalid moves
        return nullptr;
    }
}
