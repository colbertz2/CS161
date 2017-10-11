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
		// In the first loop only, set both variables to the user's first integer 
		if (i = 0)
		{
			cin >> minInt;
			maxInt = minInt;
		} 
		// In all the other loops, compare the input to the stored numbers
		else if (i > 0)
		{
			cin >> latestInt;

			// If the input is smaller than minInt, reassign minInt
			if (latestInt < minInt)
			{
				minInt = latestInt;
			} 
			// If the input is larger than maxInt, reassign maxInt
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
