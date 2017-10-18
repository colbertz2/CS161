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
void smallSort(int &argA, int &argB, int &argC);

int main()
{
    // Set up the variables to sort and print them
    int a = 5;
    int b = 17;
    int c = 2;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // Pass them to the function
    smallSort(a,b,c);

    cout << "\n" << "Sorting..." << "\n" << endl;

    // Print them out after sorting
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
/*********************************************************************
End Testing
*********************************************************************/

// Takes three integer variables by reference, and sorts them in ascending order
void smallSort(int &argA, int &argB, int &argC)
{
    // While things aren't in order
    while (argA > argB || argB > argC)
    {
        // If a is larger than b
        if (argA > argB)
        {
            // Swap them
            int temp = argA;
            argA = argB;
            argB = temp;
        }
        // If b is larger than c
        else if (argB > argC)
        {
            // Swap them
            int temp = argB;
            argB = argC;
            argC = temp;
        }
    }
}