/*********************************************************************
** Author: Zach Colbert
** Date: 8 November 2017
** Description: findMedian takes an array and the size of the array as arguments, sorts the array, and returns the median(s) of the array.
*********************************************************************/

// findMedian uses the built-in array sorting function
#include <algorithm>


int findMedian(int arrayArg[], int arraySize)
{
    // Sort the array
    std::sort(arrayArg, arrayArg + arraySize);

    // For odd-numbered lengths, return the median
    // According to i = (n-1)/2
    int median = arrayArg[(arraySize - 1) / 2];

    // For even-numbered lengths, find two medians
    // i = (n-1)/2 and i2 = n/2 where i will be floored
    // Then average the two values and return that average (which will also be floored)
    if (arraySize % 2 == 0)
    {
        int median2 = arrayArg[arraySize / 2];

        median = (median + median2) / 2;
    }

    return median;
}