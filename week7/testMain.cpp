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
double stdDev(Person arrayArg[], int arraySize);


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
    
    int testArray[] = {9,5,4,7,6};
    
    for (int i : testArray)
    {
        cout << i << ", ";
    }
    cout << endl;
    cout << "Median: " << findMedian(testArray, 5) << endl;

    system("read -p 'Press enter to continue...'");
}

void testDev()
{
    system("clear");

    cout << "Testing stdDev..." << endl;
    
    Person a("Zach", 20);
    Person b("John", 25);
    Person c("Jim", 30);
    Person people[] = {a,b,c};

    for (Person person : people)
    {
        cout << "Name: " << person.getName() << endl;
        cout << "Age: " << person.getAge() << "\n" << endl;
    }

    double testResult = stdDev(people, 3);
    cout << testResult << endl;

    system("read -p 'Press enter to continue...'");
}