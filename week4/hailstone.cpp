/*********************************************************************
** Author: Zach Colbert
** Date: 18 October 2017
** Description: 
*********************************************************************/

/*********************************************************************
Pre-Processing
*********************************************************************/
// This section is for pre-processor objects that are needed for actual code (not for the testing and development)


/*********************************************************************
End Pre-Processing
*********************************************************************/

/*********************************************************************
Testing -- MUST BE REMOVED OR COMMENTED BEFORE SUBMISSION
*********************************************************************/
// For testing -- move the pre-processing objects needed for the actual code up to the Pre-Processing section
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

// Function prototype
int hailstone(int stone);

int main()
{
    // Get a test number
    int testInt;

    cout << "Enter an integer." << endl;
    cin >> testInt;

    cout << "Hailstone length is: " << hailstone(testInt) << endl;

    return 0;
}
/*********************************************************************
End Testing
*********************************************************************/

// Start defining actual functions here
int hailstone(int stone)
{
    // Initialize a counter
    int stepCount = 0;

    // While stone is not equal to 1
    while (stone != 1)
    {
        // If stone is even
        if (stone%2 == 0)
        {
            // Divide stone by 2 and reassign
            stone /= 2;
        }
        // Else if stone is odd
        else
        {
            // Multiple stone by 3 and add one, then reassign
            stone *= 3;
            stone += 1;
        }

        // Add 1 to the counter
        stepCount += 1;
    }

    return stepCount;
}