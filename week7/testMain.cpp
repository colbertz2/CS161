#include <iostream>
#include <fstream>
#include <string>
#include "Person.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

// Function prototypes
void testMedian();
void testDev();

int findMedian(int arrayArg[], int arraySize);


int main()
{
    // Testing and development code goes here
    // Don't write anything important in this section because it's going away!

    testMedian();

    testDev();

    return 0;
}

void testMedian()
{
    int testArray[] = {1,2,3,4,5,6};
    
    cout << findMedian(testArray, 6) << endl;
}

void testDev()
{
    Person person1("Zach", 20);
}