/*********************************************************************
** Author: Zach Colbert
** Date: 25 October 2017
** Description: Implementation file for the Taxicab class defines functions prototyped in Taxicab.hpp.
*********************************************************************/

// These functions are defined for the classes in Taxicab.hpp
#include "Taxicab.hpp"
#include <cmath>

// Default constructor sets all member variables to 0
Taxicab::Taxicab()
{
    x = 0;
    y = 0;
    dist = 0;
}

// Other constructor takes two arguments to set the starting coordinates
// And distance to 0
Taxicab::Taxicab(int x0, int y0)
{
    x = x0;
    y = y0;

    dist = 0;
}

// getXCoord returns the current x coordinate
int Taxicab::getXCoord()
{
    return x;
}

// getYCoord returns the current y coordinate
int Taxicab::getYCoord()
{
    return y;
}

// getDistanceTraveled returns the current distance
int Taxicab::getDistanceTraveled()
{
    return dist;
}

// moveX changes the x coordinate
int Taxicab::moveX(int dx)
{
    x += dx;
    dist += std::fabs(dx);

    return 0;
}

// moveY changes the y coordinate
int Taxicab::moveY(int dy)
{
    y += dy;
    dist += std::fabs(dy);

    return 0;
}