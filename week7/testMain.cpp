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
    system("clear");
    
    cout << "Testing findMedian..." << endl;
    
    int testArray[] = {1,2,3,4,5,6};
    
    for (int i : testArray)
    {
        cout << i << ", ";
    }
    cout << endl;
    cout << "Median: " << findMedian(testArray, 6) << endl;

    system("read -p 'Press enter to continue...'");
}

void testDev()
{
    system("clear");

    cout << "Testing stdDev..." << endl;
    
    Person person1("Zach", 20);

    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;

    system("read -p 'Press enter to continue...'");
}