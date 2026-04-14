#include <iostream>
#include "player.h"
#include "super_player.h"

int main() {
    Player dylan{"Dylan", 100, 0};
    std::cout << dylan.getName() << " (health: " << dylan.getHealth() << ")\n";

    SuperPlayer hero{"SuperDylan", 200, 50, 5};
    std::cout << hero.getName() << " (health: " << hero.getHealth()
              << ", level: " << hero.getLevel() << ")\n";
    hero.superAttack();
}
