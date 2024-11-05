#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>

class Player {
public:
    std::string playerName;
    char playerSymbol;
    void makeMove();
};

#endif 