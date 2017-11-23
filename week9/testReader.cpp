/*************************************************
 *      TEST MAIN FOR THE T3READER CLASS         *
 ************************************************/

#include "T3Reader.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // Initialize a new reader object, and print the output
    cout << T3Reader::T3Reader newGame ("textInput.txt") << endl;

    return 0;
}