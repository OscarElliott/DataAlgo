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
    if (move == "rock") {
        return new Rock();
    } else if (move == "paper") {
        return new Paper();
    } else if (move == "scissors") {
        return new Scissors();
    } else {
        // to avoid crashes for invalid moves
        return nullptr;
    }
}
