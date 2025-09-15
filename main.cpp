#include <iostream>
#include <vector>

#include "board.h"
#include "engine.h"
#include "helpers.h"

int main() {
    std::cout << "Number of detectives: ";
    int num_of_detectives;
    std::cin >> num_of_detectives;

    std::vector<int> detectives(num_of_detectives);
    for (int i = 1; i <= num_of_detectives; i++) {
        std::cout << "Starting position of detective " << i << ": ";
        std::cin >> detectives[i - 1];

        if (detectives[i - 1]) {};
    }

    int positions = get_num_of_positions();
    std::vector<std::vector<std::pair<int, ticket>>> board(
        positions, std::vector<std::pair<int, ticket>>());
    generate_board(board);

    for (auto &node : board) {
        for (auto &position : node) {
            std::cout << position.first << ' ';
        }
        std::cout << std::endl;
    }

    player mr_x;
    player detectives[num_of_detectives];

    return 0;
}
