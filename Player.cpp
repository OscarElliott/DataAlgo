// This is the parent class to Computer and Human it will provide framework for the game

#include <iostream>

class Player{

    public:

    virtual char makeMove( ) = 0;
    virtual std::string getName( ) = 0;
    
};