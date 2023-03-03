// inherits from player



class Human: public Player {
    private:
        string name;
        char move;
    public:
    Human(string n = "Human") {
        name = n;
    }
    string getName() {
        return name;
    }

    char makeMove() {
        char move;
        std::cout << "Enter move";
        std::cin >> move;
        return move;
    }

    


}