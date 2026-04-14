#pragma once
#include <iostream>
#include "player.h"
class SuperPlayer : public Player {
    int level {};

public:
    SuperPlayer(std::string n, int h, int x, int lvl)
        : Player(n, h, x), level(lvl) {}

    int getLevel() const { return level; }

    void superAttack() const {
        std::cout << name << " unleashes a super attack! (level " << level << ")\n";
    }
};
