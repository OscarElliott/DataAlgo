#ifndef PLAYER_h
#define PLAYER_h

#include <string>
#include "Move"

class Player{
    private:
        std::string getName( ) 
        std::string name;
    public:
        virtual Move * makeMove( ) = 0;
        Player(string n) { name = n;}
    
};

#endif