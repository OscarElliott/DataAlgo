#ifndef MOVE_h
#define MOVE_h

#include <string>
#include <vector>

class Move{
    private:
        std::string name; //name of Move
        std::vector<Move> victory{}; // list of moves this move beats
        std::vector<Move> defeat{}; // list of moves this move losses to
    public:
        std::string getName(); //returns the name of a Move instance, for example "Ninja".  This function exists purely so I can do some tests.  I don't expect you to call it in your code other than while testing.
        void setName(std::string newname); // Allows to set name which is private with public function
        std::vector<Move> getWins(); // returns list of moves given move beats
        std::vector<Move> getLosses(); // returns list of moves given move losses too
};

#endif