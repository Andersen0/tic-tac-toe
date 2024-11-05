#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>
#include <array>
#include <vector>

class Board {
public:
    int numRows;
    int numCols;
    std::vector<std::vector<std::string>> symbolBoard;

    void resetBoard();

    Board(int rows = 3, int cols = 3)
        : numRows(rows),
        numCols(cols),
        symbolBoard(rows, std::vector<std::string>(cols, emptySquare))
    {
    }

    static std::string emptySquare;
    static std::string player1Mark;
    static std::string player2Mark;

    void generateRandomBoard();
    void checkConditions();
    void displayBoard();
};

#endif 