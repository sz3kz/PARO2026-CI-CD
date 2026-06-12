#include "../include/LetterHandler.hpp"

auto LetterHandler::getLetter() const -> char { return letter; }
auto LetterHandler::getPointAmountReward() const -> unsigned int {
    return point_amount_reward;
}
