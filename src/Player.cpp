#include <iostream>
#include <string>
#include "../include/Board.h"
#include "../include/Player.h"

void Player::makeMove() {
    std::string input;

    while (true) {

        std::cout << "Make a move, " << Name << ":" << std::endl;

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
