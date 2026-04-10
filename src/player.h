#pragma once
#include <string>

class Player {


    public:
        std::string name;
        int health {};
        int xp {};

        Player() = default;
        Player(std::string n, int h, int x);

        [[nodiscard]] std::string getName() const { return name; }
        [[nodiscard]] int getHealth() const { return health; }
        [[nodiscard]] int getXp() const { return xp; }

        void setName(std::string n) { name = std::move(n); }
        void setHealth(int h) { health = (h < 0) ? 0 : h; }
        void setXp(int x) { xp = (x < 0) ? 0 : x; }

        void talk(const std::string&);
        [[nodiscard]] bool is_dead() const;
};
