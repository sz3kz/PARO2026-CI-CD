#include "string"
#include "unordered_map"

class Scrabble {

  public:
    void registerSymbol(char symbol, int points);
    int score(const std::string &word) const;

  private:
    std::unordered_map<char, int> scores;
};

Scrabble createDefaultScorer();

int scrabble(const std::string &word);
