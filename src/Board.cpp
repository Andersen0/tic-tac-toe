#include <iostream>
#include <vector>
#include <cstdlib>
#include <random>
#include <locale>

#include "../include/Board.hpp"

std::string Board::emptySquare = "⛶";
std::string Board::player1Mark = "✖";
std::string Board::player2Mark = "◍";

void Board::resetBoard() {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            symbolBoard[i][j] = emptySquare;
        }
    }
}

void Board::generateRandomBoard() {
    std::random_device rand_device;
    std::mt19937 gen(rand_device());
    std::uniform_int_distribution<> distribution(0, 2); // Generate random number between 0 and 2

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            int randValue = distribution(gen);
            if (randValue == 0) {
                symbolBoard[i][j] = emptySquare;
            } else if (randValue == 1) {
                symbolBoard[i][j] = player1Mark;
            } else if (randValue == 2) {
                symbolBoard[i][j] = player2Mark;
            }
        }
    }
}

void Board::checkConditions() {


}

void Board::displayBoard() {

    std::cout << "Current state of the board: \n" << std::endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) { 
            std::cout << symbolBoard[i][j] << " ";
        }
    std::cout << std::endl;
    }
    std::cout << std::endl;

}