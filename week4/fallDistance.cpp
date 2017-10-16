/*********************************************************************
** Author: Zach Colbert
** Date: 18 October 2017
** Description: Defines a function to find the vertical displacement of a falling body in a given time.
*********************************************************************/

// For std::pow()
#include <cmath>

/*********************************************************************
Testing section MUST BE REMOVED OR COMMENTED BEFORE SUBMISSION
*********************************************************************/
// For testing
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double fallDistance(double time);

int main()
{
    // Declare a variable for the test input
    double testInput;
    
    // Get a time from the command line
    cout << "Enter a time falling:" << endl;
    cin >> testInput;

    // Print the result of the fallDistance function
    cout << "The displacement is " << fallDistance(testInput) << "m" << endl;

    return 0;
}
/*********************************************************************
End testing section
*********************************************************************/

// The function takes a time as its argument, and returns the vertical displacement of a body falling from rest over that time.
double fallDistance(double time)
{
    // One-liner: Calculate the displacement
    double displacement = 0.5*9.8*std::pow(time,2);

    // Return the displacement
    return displacement;
}