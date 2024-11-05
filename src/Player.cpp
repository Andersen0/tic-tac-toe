#include <iostream>
#include <string>
#include "../include/Board.hpp"
#include "../include/Player.hpp"

void Player::makeMove() {
    std::string input;

    while (true) {

        std::cout << "Make a move, " << playerName << ":" << std::endl;

        std::getline(std::cin, input);

        if (!(input >= "1" && input <= "9")) {
            std::cout << "That move is not on the board!";
        }
        else {
            // LOGIC ...


            break;
        }
    }
}
