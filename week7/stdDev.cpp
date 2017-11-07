/*********************************************************************
** Author: Zach Colbert
** Date: 8 November 2017
** Description: The stdDev function takes an array of Person objects and returns the standard deviation of their ages. The standard deviation is calculated based on population, not sample.
*********************************************************************/

#include <string>
#include <cmath>
#include "Person.hpp"

double stdDev(Person arrayArg[], int arraySize)
{
    // Get the average of the ages
    double averageAge = 0.0;
    
    for (int i = 0; i < arraySize ; i++)
    {
        averageAge += arrayArg[i].getAge();
    }

    averageAge /= arraySize;

    // Calculate the standard deviation
    double stndDev = 0.0;

    for (int i = 0; i < arraySize; i++)
    {
        stndDev += std::pow(arrayArg[i].getAge() - averageAge, 2);
    }

    return sqrt(stndDev / arraySize);
}