/*******************************************************************************
** Author: Zach Colbert
** Date: 15 November 2017
** Description: smallSort2 takes the adresses of three int variables, and sorts the ints at their respective addresses.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// smallSort2 takes the addresses of three int variables, and sorts the ints at their respective addresses.
void smallSort2(int *a, int *b, int *c)
{
    // While a is larger than b
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
