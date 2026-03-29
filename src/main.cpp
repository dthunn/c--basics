#include <iostream>
#include <memory>
#include "player.h"

int main() {
    auto test = new Player("Test", 0, 0);
    auto dylan = std::make_unique<Player>("Dylan", 100, 0);
    auto enemy = std::make_unique<Player>("Goblin", 50, 0);

    std::cout << test->getName() << std::endl;

    std::vector<std::unique_ptr<Player>> players;
    players.push_back(std::move(dylan));
    players.push_back(std::move(enemy));

    for (const auto& player : players) {
        std::cout << player->getName() << std::endl;
    }
}
