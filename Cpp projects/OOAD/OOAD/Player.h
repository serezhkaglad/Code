#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name;
    char symbol;

public:
    Player(const string& name, char symbol);
    string getName() const;
    char getSymbol() const;
};

#endif
