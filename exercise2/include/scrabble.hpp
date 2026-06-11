#include "string"
#include "unordered_set"

int scrabble(std::string word);

std::unordered_set<char> OnePoints   = {'A', 'E', 'I', 'O', 'U',
                                        'L', 'N', 'R', 'S', 'T'};
std::unordered_set<char> TwoPoints   = {'D', 'G'};
std::unordered_set<char> ThreePoints = {'B', 'C', 'M', 'P'};
std::unordered_set<char> FourPoints  = {'F', 'H', 'V', 'W', 'Y'};
std::unordered_set<char> FivePoints  = {'K'};
std::unordered_set<char> EightPoints = {'J', 'X'};
std::unordered_set<char> TenPoints   = {'Q', 'Z'};
