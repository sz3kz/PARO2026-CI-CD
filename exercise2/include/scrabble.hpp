#pragma once

#include <string>
#include <unordered_set>

int scrabble(std::string word);

extern std::unordered_set<char> OnePoints;
extern std::unordered_set<char> TwoPoints;
extern std::unordered_set<char> ThreePoints;
extern std::unordered_set<char> FourPoints;
extern std::unordered_set<char> FivePoints;
extern std::unordered_set<char> EightPoints;
extern std::unordered_set<char> TenPoints;

