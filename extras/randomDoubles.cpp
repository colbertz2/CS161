/*********************************************************************
** Author: Zach Colbert
** Date: 2 October 2017
** Description: Gets a random list of doubles and sends them to the clipboard. Used for testing week2/average.cpp
*********************************************************************/

#include <iostream>
#include <cmath>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

// Function declaration
double randGenerator(int seedAdd)
{
    // Seed random numbers from system time
    srand(time(NULL) + seedAdd);

    // Generate random number
    double randDouble = ((rand() % 20000) - 10000.) / 100.;

    // Print the random number
    // cout << randDouble << endl;

    return randDouble;
}
// Main function
int main()
{
    // Array declaration
    double randStorage[5];

    // For loop to output many values
    for( int i = 0; i < 5; i++ )
    {
        // Output variable declaration
        randStorage[i] = randGenerator(i);

        cout << randStorage << endl;
    }
}
