#include "Player.h"

Player::Player(string n){
    // default constructor for Player
    name=n;
}

std::string Player::getName() {
    // Returns name of given player
    return name;
}

