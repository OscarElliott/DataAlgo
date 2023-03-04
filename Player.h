#ifndef PLAYER_h
#define PLAYER_h

#include <string>

class Player{
    public:
    virtual char makeMove( ) = 0;
    virtual std::string getName( ) = 0;
    
};

#endif