#include "../include/LetterHandler.hpp"

auto LetterHandler::getLetter() const -> char { return letter; }
auto LetterHandler::getPointAmountReward() const -> int {
    return point_amount_reward;
}
