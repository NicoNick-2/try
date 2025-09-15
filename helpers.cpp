#include "helpers.h"

// Get number of positions on the board
int get_num_of_positions() {
    std::ifstream data_file("./board-data/num_of_positions.txt");

    if (!data_file.is_open()) {
        throw std::runtime_error("Could not open file.");
    }

    std::string num_of_nodes;
    getline(data_file, num_of_nodes);
    data_file.close();

    return stoi(num_of_nodes);
}


// Convert a connection string (i.e. "6 29") into a pair of nodes
std::pair<int, int> get_nodes(std::string connection) {
    size_t i;
    for (i = 0; i < connection.length() && connection[i] != ' '; i++) {}

    int node1 = stoi(connection.substr(0, i));
    int node2 = stoi(connection.substr(i + 1, connection.length() - i - 1));

    return {node1, node2};
}