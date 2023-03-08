// inherits from player
#include "Player.h"
#include "Human.h"
#include "Move.h"
#include <iostream>

Human::Human(std::string n) {
    name = n;
}

std::string Human::getName() {
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
