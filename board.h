#ifndef BOARD_H
#define BOARD_H

#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

enum ticket {
    taxi,
    bus,
    underground,
    black,
    double_move,
};

void generate_board(std::vector<std::vector<std::pair<int, ticket>>>& board);

#endif
