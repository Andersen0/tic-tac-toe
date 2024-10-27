#include <iostream>
#include <thread> 
#include <iomanip>
#include <locale>
#include <vector>

int main() {

    const int Rows = 3;
    const int Cols = 3;

    std::vector<std::vector<int>> boardValueMatrix(Rows, std::vector<int>(Cols)); // 3x3 matrix of zeros for empty board

    std::cout << "Current state of the board: \n" << std::endl;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
        std::cout << boardValueMatrix[Rows - 1][Cols - 1] << " ";
        }
    std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "⬚ ◍ ⬚ \n";

    return 0;
}