/*********************************************************************
** Author: Zach Colbert
** Date: 25 October 2017
** Description: Implementation file -- Use this to define functions for classes
*********************************************************************/

// These functions are defined for the classes in Box.hpp
#include "Box.hpp"

// Default constructor sets all dimensions of the box to 1
Box::Box()
{
    height = 1.0;
    width = 1.0;
    length = 1.0;
}

// Constructor with 3 arguments sets all the dimensions
Box::Box(double h, double w, double l)
{
    height = h;
    width = w;
    length = l;
}

// setHeight sets the height member variable
int Box::setHeight(double h)
{
    height = h;

    return 0;
}

// PROTO: setWidth sets the width member variable
int Box::setWidth(double w)
{
    width = w;

    return 0;
}

// PROTO: setLength sets the length member variable
int Box::setLength(double l)
{
    length = l;

    return 0;
}

// PROTO: calcVolume calculates the volume of the box
double Box::calcVolume()
{
    double volume = height * width * length;

    return volume;
}

// PROTO: calcSurfaceArea calculates the surface area of the box
double Box::calcSurfaceArea()
{
    double surfaceArea = (2.0 * height) + (2.0 * width) + (2.0 * length);

    return surfaceArea;
}