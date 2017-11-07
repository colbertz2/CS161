/*********************************************************************
** Author: Zach Colbert
** Date: 8 November 2017
** Description: The Person class comes with two member variables, string name and double age, to describe a person. Player objects have a few simple constructor and accessor functions built in.
*********************************************************************/

#include <string>

#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
private:
    // Name and age member variables describe the person
    std::string name;
    double age;

public:
    // No default constructor, because we don't want empty people
    Person(std::string nameString, double ageValue);

    // getName returns the name of the person
    std::string getName();

    // getAge returns the age of the person
    double getAge();

};

#endif