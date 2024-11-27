#include "Game.h"

Game::Game(const Player& p1, const Player& p2) : player1(p1), player2(p2), currentPlayer(&player1) {}

void Game::start() {
    while (true) {
        board.display();
        cout << currentPlayer->getName() << " (" << currentPlayer->getSymbol() << "), enter your move (1-9): ";
        int move;
        cin >> move;
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        if (board.markPosition(row, col, currentPlayer->getSymbol())) {
            if (checkWin()) {
                board.display();
                cout << currentPlayer->getName() << " wins!" << endl;
                break;
            }
            if (board.isFull()) {
                board.display();
                cout << "It's a draw!" << endl;
                break;
            }
            switchPlayer();
        }
        else {
            cout << "Invalid move. Try again." << endl;
        }
    }
}

bool Game::checkWin() const {
    const char(&grid)[3][3] = board.getGrid();
    char symbol = currentPlayer->getSymbol();

    for (int i = 0; i < 3; ++i) {
        if ((grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol) ||
            (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol))    
            return true;
    }

    if ((grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol) ||   
        (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol))       
        return true;

    return false;
}

void Game::switchPlayer() {
    currentPlayer = (currentPlayer == &player1) ? &player2 : &player1;
}
