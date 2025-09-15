#include "board.h"

#include "helpers.h"

void generate_board(std::vector<std::vector<std::pair<int, ticket>>>& board) {
    std::ifstream file("./board-data/taxi_map.txt");

    if (!file.is_open()) {
        throw std::runtime_error("Could not open file.");
    }

    std::string connection;
    std::pair<int, int> adjacent_nodes;
    while (getline(file, connection)) {
        adjacent_nodes = get_nodes(connection);
        board[adjacent_nodes.first - 1].push_back({adjacent_nodes.second - 1, taxi});
    }

    return;
}