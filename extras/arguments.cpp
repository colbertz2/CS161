/*********************************************************************
** Author: Zach Colbert
** Date: 2 October 2017
** Description: Demonstrates how command line arguments are handled in a program.
*********************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Prints all the arguments passed to it on the command line
int main(int argc, char* argv[])
{
    for( int i = 1; i < argc; i++)
    {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
}
