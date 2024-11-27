#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Board.h"

class Game {
private:
    Board board;
    Player player1;
    Player player2;
    Player* currentPlayer;

public:
    Game(const Player& p1, const Player& p2);
    void start();
    bool checkWin() const;
    void switchPlayer();
};

#endif
