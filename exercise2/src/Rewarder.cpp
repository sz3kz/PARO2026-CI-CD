#include "Rewarder.hpp"
#include <iostream>
#include <algorithm>

std::string Rewarder::makeStringUppercase(std::string const &mystring) {
    std::string uppercase_scrabble_word;
    std::transform(mystring.begin(), mystring.end(),
                   std::back_inserter(uppercase_scrabble_word),
                   [](unsigned char c) { return std::toupper(c); });
    return uppercase_scrabble_word;
}
auto Rewarder::findRewardForCharacter(char character) const -> unsigned int {
    for ( auto const & handler  : letters) {
        if (character == handler.getLetter()) {
            return handler.getPointAmountReward();
        }
    }
    // This is the edge case -> character was not registered with a reward point value
    return 0;
}
void Rewarder::add(LetterHandler handler) { letters.push_back(handler); }

auto Rewarder::getTotalReward(const std::string &scrabble_word) const -> unsigned int {
    unsigned int total_point_reward{0};
    for(auto const & character : Rewarder::makeStringUppercase(scrabble_word) ) {
        total_point_reward += findRewardForCharacter(character);
    }
    return total_point_reward;
}