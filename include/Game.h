#ifndef GAME_H
#define GAME_H

class Game {
public:

    void startGame(); // Initializes a game of TTT

    bool checkWin(); // Checks winning conditions

    void endInDraw(); // Alerts that the game ended in a tie and ends the game

    void switchPlayer2Move(); // Change the active player
    
};

#endif