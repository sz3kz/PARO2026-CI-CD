#pragma once

class LetterHandler {
    char letter;
    int point_amount_reward;
public:
    LetterHandler(char letter, int point_amount_reward): letter(letter), point_amount_reward(point_amount_reward) {};
    auto getLetter() const -> char;
    auto getPointAmountReward() const -> int;
};