/*******************************************************************************
** Author: Zach Colbert
** Date: 15 November 2017
** Description: Repeat array takes a reference to a pointer to an array, 
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void repeatArray(int *& myArray, int myArraySize)
{
    // Make new array
    int *newArray = new int[myArraySize * 2];

    // Fill array with original array values
    for (int i = 0; i < myArraySize * 2; i++)
    {
        *(newArray + i) = *(myArray + (i % myArraySize));
    }

    // Delete original array
    delete [] myArray;
    myArray = nullptr;
    // Set pointer myArray to point to the new array
    myArray = newArray;
}