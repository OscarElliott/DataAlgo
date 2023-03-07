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
    Move move;
        std::cout << "Enter move";
        std::cin >> move;
        return move;
    }
