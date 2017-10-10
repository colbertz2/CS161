/*********************************************************************
** Author: Zach Colbert
** Date: 11 October 2017
** Description: Takes a set of integers as input, and returns the minimum and maximum values.
*********************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Gets a set of integers from the user, and outputs the minimum and maximum values
int main()
{
	int intCount;
	// Get the number of integers from the user
	cout << "How many integers would you like to enter?" << endl;
	cin >> intCount;

	// Get the integers from the user and store them
	cout << "Please enter " << intCount << " integers." << endl;

	for (int i = 0; i < intCount; i++)
	{
		int number_i;
		
		cin >> number_i;
	}

	cout << "You entered " << endl;

	for (int i = 0; i < intCount; i++)
	{
		cout << number_i; << ", ";
	}

    // If the number of integers entered is not equal to the number of integers requested
	//     Tell the user they entered the wrong number of integers
	//     Get choice from the user: Retry entering integers, or start over
	//     If user chooses to start over
	// 	    Start over
	//     Else if user chooses to retry
	// 	    Get the integers from the user
    // Else
	//     Find the minimum and maximum of the entered integers
	//     Print those for the user

    return 0;
}
