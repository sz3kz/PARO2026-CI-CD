#pragma once
#include "LetterHandler.hpp"

#include <string>
#include <vector>

class Rewarder {
    std::vector<LetterHandler> letters;

public:
    Rewarder() = default;

    void add(LetterHandler handler);

    [[nodiscard]]
    auto getTotalReward(const std::string &scrabble_word) const -> int;
};