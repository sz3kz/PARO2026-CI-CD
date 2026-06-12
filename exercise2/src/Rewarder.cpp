#include "../include/Rewarder.hpp"
#include <iostream>
#include <algorithm>

std::string Rewarder::makeStringUppercase(std::string const &mystring) {
    std::string uppercase_scrabble_word;
    std::transform(mystring.begin(), mystring.end(),
                   std::back_inserter(uppercase_scrabble_word),
                   [](unsigned char c) { return std::toupper(c); });
    return uppercase_scrabble_word;
}
void Rewarder::add(LetterHandler handler) { letters.push_back(handler); }

auto Rewarder::getTotalReward(const std::string &scrabble_word) const -> int {
    int total_point_reward{0};
    for(auto const & character : Rewarder::makeStringUppercase(scrabble_word) ) {
        for(auto const & handler : letters) {
            if(character == handler.getLetter()) {
                total_point_reward += handler.getPointAmountReward();
                break;
            }
        }
    }
    return total_point_reward;
}
