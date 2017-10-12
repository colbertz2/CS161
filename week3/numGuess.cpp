/*********************************************************************
** Author: Zach Colbert
** Date: 11 October 2017
** Description: 
*********************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

// The main function
int main()
{
    // Prompt the user for an integer
    cout << "Enter the number for the player to guess." << endl;
    
    // Store the integer from the user
    int goal;
    cin >> goal;

    // Prompt for a guess
    cout << "Enter your guess." << endl;

    // Store the guess and set counter to 1
    int guess, guessCount;
    cin >> guess;
    guessCount = 1;

    // While guess is wrong
    while (guess != goal)
    {
        // Give the user feedback on their guess
        if (guess < goal)
        {
            // Too low, try again
            cout << "Too low - try again." << endl;
        }
        else if (guess > goal)
        {
            // Too high, try again
            cout << "Too high - try again." << endl;
        }

        // Store another guess
        cin >> guess;

        // Add to the counter
        guessCount++;
    }

    // Once the guess is right, print the counter
    if (guessCount == 1)
    {
        // Grammar check
        cout << "You guessed it in " << guessCount << " try." << endl;
    }
    else
    {
        // Grammar check
        cout << "You guessed it in " << guessCount << " tries." << endl;
    }

    return 0;
}
