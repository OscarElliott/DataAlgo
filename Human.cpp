// inherits from player
#include "Player.h"
#include "Human.h"
#include <iostream>

    Human::Human(std::string n) {
        name = n;
    }

    std::string Human::getName() {
        return name;
    }

    char Human::makeMove() {
        char move;
        std::cout << "Enter move";
        std::cin >> move;
        return move;
    }

};