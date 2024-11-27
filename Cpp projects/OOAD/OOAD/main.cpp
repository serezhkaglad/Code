#include "Game.h"

int main() {
    Player player1("Mike", 'X');
    Player player2("Shrek", 'O');
    Game game(player1, player2);

    game.start();
    return 0;
}
