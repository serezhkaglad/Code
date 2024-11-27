#include "Board.h"

Board::Board() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            grid[i][j] = '1' + (i * 3 + j);
}


void Board::display() const {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << grid[i][j] << (j < 2 ? " | " : "");
        }
        cout << endl;
        if (i < 2) cout << "--+---+--" << endl;
    }
}

bool Board::markPosition(int row, int col, char symbol) {
    if (grid[row][col] != 'X' && grid[row][col] != 'O') {
        grid[row][col] = symbol;
        return true;
    }
    return false;
}

bool Board::isFull() const {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (grid[i][j] != 'X' && grid[i][j] != 'O')
                return false;
    return true;
}

const char(&Board::getGrid() const)[3][3]{
    return grid;
}
