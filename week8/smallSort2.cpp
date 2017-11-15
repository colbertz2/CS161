/*******************************************************************************
** Author: Zach Colbert
** Date: 15 November 2017
** Description: smallSort2 takes the adresses of three int variables, and sorts the ints at their respective addresses.
*******************************************************************************/

void smallSort2(int &a, int &b, int &c)
{
    // Do the thing
}

// Takes three integer variables by reference, and sorts them in ascending order
void smallSort(int &argA, int &argB, int &argC)
{
    // While things aren't in order
    while (argA > argB || argB > argC)
    {
        // If a is larger than b
        if (argA > argB)
        {
            // Swap them
            int temp = argA;
            argA = argB;
            argB = temp;
        }
        // If b is larger than c
        else if (argB > argC)
        {
            // Swap them
            int temp = argB;
            argB = argC;
            argC = temp;
        }
    }
}