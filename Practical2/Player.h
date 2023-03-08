#ifndef PLAYER_h
#define PLAYER_h

#include <string>
#include "Move.h"

class Player{
    private:
        std::string name;
    public:
        virtual Move * makeMove() = 0;
        std::string getName(); 

    
};

#endif