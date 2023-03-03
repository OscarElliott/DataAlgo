// inherits from player, only capeable of picking rock

class Computer: public Player {
    private:
        string name; //name of player/computer
    public:
    Computer(string n = "Computer"); // default constructor
    string getName(){
        return name;
    } // returns name of computer
    char makeMove(){
        return 'R'; //
    } // computer always plays rock
    
}