#ifndef BOARD_H
#define BOARD_H

#include <iostream>
using namespace std;

class Board {
private:
    char grid[3][3];

public:
    Board();
    void display() const;
    bool markPosition(int row, int col, char symbol);
    bool isFull() const;

    const char(&getGrid() const)[3][3];
};

#endif
