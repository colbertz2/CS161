/*********************************************************************
** Author: Zach Colbert
** Date: 4 October 2017
** Description: Breaks a given number of cents down into the fewest number of coins of larger denominations.
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Get input from the user and output the fewest number of coins needed to represent that sum with larger denominations.
int main()
{
    // Declare variables for later
    int cents, quarters, dimes, nickels, pennies, total;

    // Prompt the user for input
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cents;

    // Get the number of quarters less than cents, then set cents to the remainder
    quarters = cents / 25;
    cents = cents % 25;

    // Get the number of dimes by the same method
    dimes = cents / 10;
    cents = cents % 10;

    // Get the number of nickels by the same method
    nickels = cents / 5;
    cents = cents % 5;

    // The number of pennies is the number of remaining cents
    pennies = cents;

    // Set the total to check our work
    total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;

    // Output for the user
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;
    cout << endl << "TOTAL: " << total << endl;

    return 0;
}
