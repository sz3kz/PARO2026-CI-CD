#include <iostream>
#include <string>
#include "Rewarder.hpp"
#include "LetterHandler.hpp"

int main() {
    Rewarder rewarder;
    rewarder.add( LetterHandler('A',1));
    rewarder.add( LetterHandler('E',1));
    rewarder.add( LetterHandler('I',1));
    rewarder.add( LetterHandler('O',1));
    rewarder.add( LetterHandler('U',1));
    rewarder.add( LetterHandler('L',1));
    rewarder.add( LetterHandler('N',1));
    rewarder.add( LetterHandler('R',1));
    rewarder.add( LetterHandler('S',1));
    rewarder.add( LetterHandler('T',1));

    rewarder.add( LetterHandler('D',2));
    rewarder.add( LetterHandler('G',2));

    rewarder.add( LetterHandler('B',3));
    rewarder.add( LetterHandler('C',3));
    rewarder.add( LetterHandler('M',3));
    rewarder.add( LetterHandler('P',3));

    rewarder.add( LetterHandler('F',4));
    rewarder.add( LetterHandler('H',4));
    rewarder.add( LetterHandler('V',4));
    rewarder.add( LetterHandler('W',4));
    rewarder.add( LetterHandler('Y',4));

    rewarder.add( LetterHandler('K',5));

    rewarder.add( LetterHandler('J',8));
    rewarder.add( LetterHandler('X',8));

    rewarder.add( LetterHandler('Q',10));
    rewarder.add( LetterHandler('Z',10));

    std::string user_input;
    while (true) {
        std::cout << "Input: ";
        std::cin >> user_input;
        std::cout << "You scored: " << rewarder.getTotalReward(user_input) << " points!" << std::endl;
    }
}
