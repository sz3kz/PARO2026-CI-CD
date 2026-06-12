#pragma once
#include "LetterHandler.hpp"

#include <string>
#include <vector>

class Rewarder {
    std::vector<LetterHandler> letters;

    static auto makeStringUppercase(std::string const &mystring) -> std::string;
    auto findRewardForCharacter(char letter) const -> int;

  public:
    explicit Rewarder() = default;

    void add(LetterHandler handler);

    auto getTotalReward(const std::string &scrabble_word) const -> int;
};