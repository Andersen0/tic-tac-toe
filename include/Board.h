#ifndef BOARD_H
#define BOARD_H

#include <string>
#include <array>
#include <vector>

class Board {
private:
    int numRows;
    int numCols;
    std::vector<std::vector<std::string>> symbolBoard;

    void resetBoard();

public:
    std::vector<int> rowSums{numRows};
    std::vector<int> columnSums{numCols};

    Board(int rows = 3, int cols = 3)
        : numRows(rows), numCols(cols)
    {
        resetBoard();
    }

    static const std::string emptySquare;
    static const std::string player1Mark;
    static const std::string player2Mark;

    void generateRandomBoard();
    void checkConditions();
    void displayBoard();
    
};

const std::string emptySquare = "⛶";
const std::string player1Mark = "✖";
const std::string player2Mark = "◍";

#endif