/*********************************************************************
** Author: Zach Colbert
** Date: 11 October 2017
** Description: Gets a set of integers from the user, and returns the minimum and maximum values.
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Gets a set of integers from the user, and outputs the minimum and maximum values
int main()
{
	int intCount, minInt, maxInt, latestInt;
	// Get the number of integers from the user
	cout << "How many integers would you like to enter?" << endl;
	cin >> intCount;

	// Get the integers from the user and store them
	cout << "Please enter " << intCount << " integers." << endl;

	// Repeat this block the number of times specified by the user
	for (int i = 0; i < intCount; i++)
	{
		// Get an integer and store it
		cin >> latestInt;

		// If this is the first loop, just store the first integer
		if (i == 0)
		{
			minInt = latestInt;
			maxInt = latestInt;
		}
		else
		{
			// If the latest integer is smaller than the minimum, reassign the minimum
			if (latestInt < minInt)
			{
				minInt = latestInt;
			}
			// Otherwise, if the latest integer is larger than the maximum, reassign the maximum
			else if (latestInt > maxInt)
			{
				maxInt = latestInt;
			}
		}
	}

	// Now we're done with the loop, print the min and max values
	cout << "min: " << minInt << endl;
	cout << "max: " << maxInt << endl;

    return 0;
}
