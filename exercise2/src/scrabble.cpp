
#include "scrabble.hpp"
#include <cctype>

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
