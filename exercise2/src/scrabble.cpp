#include "scrabble.hpp"
#include <cctype>

std::unordered_set<char> OnePoints   = {'A', 'E', 'I', 'O', 'U',
                                        'L', 'N', 'R', 'S', 'T'};
std::unordered_set<char> TwoPoints   = {'D', 'G'};
std::unordered_set<char> ThreePoints = {'B', 'C', 'M', 'P'};
std::unordered_set<char> FourPoints  = {'F', 'H', 'V', 'W', 'Y'};
std::unordered_set<char> FivePoints  = {'K'};
std::unordered_set<char> EightPoints = {'J', 'X'};
std::unordered_set<char> TenPoints   = {'Q', 'Z'};

int scrabble(std::string word) {

    int score = 0;
    for(char ca : word) {
        char c = std::toupper(ca);

        if(OnePoints.count(c)) {
            score += 1;
        }

        if(TwoPoints.count(c)) {
            score += 2;
        };
        if(ThreePoints.count(c)) {
            score += 3;
        };

        if(FourPoints.count(c)) {
            score += 4;
        };

        if(FivePoints.count(c)) {
            score += 5;
        };

        if(EightPoints.count(c)) {
            score += 8;
        };

        if(TenPoints.count(c)) {
            score += 10;
        };
    }
    return score;
}
