#pragma once
#include "LetterHandler.hpp"

#include <string>
#include <vector>
#include <algorithm>

class Rewarder {
    std::vector<LetterHandler> letters;

    static auto makeStringUppercase(std::string const &mystring) -> std::string;

  public:
    Rewarder() = default;

    void add(LetterHandler handler);

    [[nodiscard]]
    auto getTotalReward(const std::string &scrabble_word) const -> int;
};