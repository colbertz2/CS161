/*******************************************************************************
** Author: Zach Colbert
** Date: 15 November 2017
** Description: smallSort2 takes the adresses of three int variables, and sorts the ints at their respective addresses.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void smallSort2(int &a, int &b, int &c)
{
    // Do the thing
}

// Takes three integer variables by reference, and sorts them in ascending order
void smallSort(int &argA, int &argB, int &argC)
{
    // If a is larger than b
    while (argA > argB)
    {
        // Swap them
        int temp = argA;
        argA = argB;
        argB = temp;

        // If b is larger than c
        while (argB > argC)
        {
            // Swap them
            int temp = argB;
            argB = argC;
            argC = temp;
        }
    }
}

int main()
{
    // Set up the variables to sort and print them
    int a, b, c;

    cout << "Enter three integers:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // Pass them to the function
    smallSort(a,b,c);

    cout << "\n" << "Sorting..." << "\n" << endl;

    // Print them out after sorting
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}