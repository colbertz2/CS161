/*************************************************
 *      TEST MAIN FOR THE T3READER CLASS         *
 ************************************************/

#include "T3Reader.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool testFunction(int &x);

int main()
{
    // Initialize a new game
    T3Reader newGame('x');

    cout << newGame.readGameFile("textInput.txt") << endl;

    return 0;
}