/*********************************************************************
** Author: Zach Colbert
** Date: 8 November 2017
** Description: Definitions for functions declared in the Person class. The person class is a simple object containing a string name and double age to descibe a person.
*********************************************************************/

#include "Person.hpp"
#include <string>

/*********************************************************************
** Description: This constructor function sets up an object of the Player class with the name and age member variables.
*********************************************************************/
Person::Person(std::string nameString, double ageValue)
{
    name = nameString;
    age = ageValue;
}

/*********************************************************************
** Description: This accessor function returns the name attribute of a Player object.
*********************************************************************/
std::string Person::getName()
{
    return name;
}

/*********************************************************************
** Description: This accessor function returns the age attribute of a Player object.
*********************************************************************/
double Person::getAge()
{
    return age;
}