/*******************************************************************************
** Author: Zach Colbert
** Date: 15 November 2017
** Description: smallSort2 takes the adresses of three int variables, and sorts the ints at their respective addresses.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void smallSort2(int *a, int *b, int *c)
{
    // If a is larger than b
    while (*a > *b)
    {
        // Swap them
        int temp = *a;
        *a = *b;
        *b = temp;

        // While b is larger than c
        while (*b > *c)
        {
            // Swap them
            int temp = *b;
            *b = *c;
            *c = temp;
        }
    }
}



int main()
{
    int a = 14;
    int b = -90;
    int c = 2;

    smallSort2(&a, &b, &c);

    cout << a << ", " << b << ", " << c << endl;

    return 0;
}