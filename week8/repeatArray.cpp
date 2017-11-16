/*******************************************************************************
** Author: Zach Colbert
** Date: 15 November 2017
** Description: repeatArray takes a reference to a pointer to an array of doubles, and an int for the size of the array. It replaces the original array with one that is twice the size, and simply repeats the entries.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// repeatArray takes a reference to a pointer to an array of doubles, and an int for the size of the array. It replaces the original array with one that is twice the size, and simply repeats the entries.
void repeatArray(double *& myArray, int myArraySize)
{
    // Make new array, twice the size of the original
    double *newArray = new double[myArraySize * 2];

    // Fill the new array with original entries, twice over
    for (int i = 0; i < myArraySize * 2; i++)
    {
        // i goes through each entry of newArray
        // Since i goes to twice the size of the original, mod by the original array size to start cycling through myArray again
        *(newArray + i) = *(myArray + (i % myArraySize));
    }

    // Delete the original array
    delete [] myArray;
    // Set pointer for the original array to point to the new array
    myArray = newArray;

    // I feel like I should be getting rid of the newArray pointer, but the code breaks if I do that. Is there a risk of memory leak? Should I delete the newArray pointer from my main() function?
}