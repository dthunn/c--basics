#include "player.h"
#include <utility>

Player::Player(std::string n, int h, int x)
    : name{std::move(n)}, health{h}, xp{x} {}

void Player::talk(const std::string& msg) {

}

bool Player::is_dead() const {
    return health <= 0;
}
