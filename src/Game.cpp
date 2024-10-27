#include <iostream>
#include "../include/Game.h"
#include "../include/Board.h"

char player1, player2;

void Game::startGame() {
    
    std::cout << "GAME STARTED: Tic-Tac-Toe" << std::endl;

    // Let players choose their names
    std::cout << "Player one, state your name: ";
    std::cin >> player1;
    std::cout << std::endl;
    std::cout << "Player two, state your name: ";
    std::cin >> player2;

}

bool Game::checkWin() {
    
    
}

void Game::endInDraw() {
    

}

void Game::switchPlayer2Move() {
    

}