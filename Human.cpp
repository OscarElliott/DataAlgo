// inherits from player
#include "Player.h"
#include "Human.h"

    Human::Human(std::string n = "Human") {
        name = n;
    }
    Human::std::string getName() {
        return name;
    }

    Human::char makeMove() {
        char move;
        std::cout << "Enter move";
        std::cin >> move;
        return move;
    }

    


};