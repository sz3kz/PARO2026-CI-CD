
#include <cctype>
#include <iterator>
#include <scrabble.hpp>


void Scrabble::registerSymbol(char symbol, int points) {
    char up    = std::toupper(static_cast<unsigned char>(symbol));
    scores[up] = points;
}



int Scrabble::score(const std::string &word) const {
    int result = 0;

    for(char character : word) {
        char up = static_cast<char>(
            std::toupper(static_cast<unsigned char>(character)));

        auto it = scores.find(up);

        if(it != scores.end()) {
            result += it->second;
        }
    }

    return result;
}

Scrabble createDefaultScorer() {
    Scrabble scorer;

    scorer.registerSymbol('A', 1);
    scorer.registerSymbol('E', 1);
    scorer.registerSymbol('I', 1);
    scorer.registerSymbol('O', 1);
    scorer.registerSymbol('U', 1);
    scorer.registerSymbol('L', 1);
    scorer.registerSymbol('N', 1);
    scorer.registerSymbol('R', 1);
    scorer.registerSymbol('S', 1);
    scorer.registerSymbol('T', 1);

    scorer.registerSymbol('D', 2);
    scorer.registerSymbol('G', 2);

    scorer.registerSymbol('B', 3);
    scorer.registerSymbol('C', 3);
    scorer.registerSymbol('M', 3);
    scorer.registerSymbol('P', 3);

    scorer.registerSymbol('F', 4);
    scorer.registerSymbol('H', 4);
    scorer.registerSymbol('V', 4);
    scorer.registerSymbol('W', 4);
    scorer.registerSymbol('Y', 4);

    scorer.registerSymbol('K', 5);

    scorer.registerSymbol('J', 8);
    scorer.registerSymbol('X', 8);

    scorer.registerSymbol('Q', 10);
    scorer.registerSymbol('Z', 10);

    return scorer;
}


int scrabble(const std::string &word) {
    static const Scrabble scorer = createDefaultScorer();

    return scorer.score(word);
}
