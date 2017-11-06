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
int findMedian(int array[], int arraySize);

int main()
{
    // Testing and development code goes here
    // Don't write anything important in this section because it's going away!

    int testArray[] = {1,2,3,4,5,6};

    cout << findMedian(testArray, 6) << endl;

    return 0;
}
