#include "../include/Rewarder.hpp"
#include <iostream>
#include <algorithm>

void Rewarder::add(LetterHandler handler) { letters.push_back(handler); }

auto Rewarder::getTotalReward(const std::string &scrabble_word) const -> int {
    int total_point_reward{0};
    std::string uppercase_scrabble_word;
    std::transform(scrabble_word.begin(),
                   scrabble_word.end(),
                   std::back_inserter(uppercase_scrabble_word),
                   [](unsigned char c) {
                       return std::toupper(c);
                   });
    for(auto const & character : uppercase_scrabble_word) {
        for(auto const & handler : letters) {
            if(character == handler.getLetter()) {
                total_point_reward += handler.getPointAmountReward();
                break;
            }
        }
    }
    return total_point_reward;
}
