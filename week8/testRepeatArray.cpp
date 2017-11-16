#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Function prototype
void repeatArray(int *&, int);

int main()
{
    // Variable declarations
    int arraySize,
        *myArray = nullptr;      // Size of the array, user defined
    
    // Get array size from user
    cout << "Array size: " ;
    cin >> arraySize;

    // Dynamically allocate memory for that size array
    myArray = new int[arraySize];

    // Fill the array
    srand(time(NULL));
    // *myArray = rand() % arraySize + (2 * (rand() % 2) - 1);

    for (int i = 0; i < arraySize; i++)
    {
        *(myArray + i) = rand() % arraySize + (2 * (rand() % 2) - 1);

        cout << *(myArray + i) << " ";
    }

    cout << endl;

    // Test the function
    repeatArray(myArray, arraySize);

    // Print the new array
    for (int i = 0; i < arraySize * 2; i++)
    {
        cout << *(myArray + i) << " ";
    }

    cout << endl;

    // Delete the array
    delete []myArray;
    myArray = nullptr;
}