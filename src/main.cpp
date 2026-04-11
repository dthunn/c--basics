#include <iostream>
#include <memory>
#include "player.h"

int main() {
    // auto dylan = std::make_unique<Player>("Dylan", 100, 0);
    // auto enemy = std::make_unique<Player>("Goblin", 50, 0);
    std::vector<Player> players;
    players.emplace_back("Dylan", 100, 0);
    players.emplace_back("Goblin", 50, 0);
    // players.push_back(std::move(enemy));

    for (auto& player : players) {
        std::cout << player.getName() << std::endl;
    }
}
