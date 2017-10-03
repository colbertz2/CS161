/*********************************************************************
** Author: Zach Colbert
** Date: 4 October 2017
** Description: This program converts a given temperature from degrees Celsius to degrees Fahrenheit.
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Converts a given temperature from degrees Celsius to degrees Fahrenheit
int main()
{
    // Declare variables for later
    double tempF, tempC;

    // Prompt the user for Celsius temperature to convert
    cout << "Please enter a Celsius temperature." << endl;
    cin >> tempC;

    // Convert tempC (Celsius) to tempF (Fahrenheit)
    tempF = (9 * tempC / 5) + 32;

    // Print tempF for the user
    cout << "The equivalent Fahrenheit temperature is:" << endl << tempF << endl;

    return 0;
}
