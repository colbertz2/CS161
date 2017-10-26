/*********************************************************************
** Author: Zach Colbert
** Date: 25 October 2017
** Description: Interface file for the Taxicab class declares the class and prototypes functions. Function definitions are contained in Taxicab.cpp.

The Taxicab class contains member variables to describe the position and distance traveled by a taxi on a coordinate grid with integer intervals. It includes member functions to get the current values for position and distance traveled, and mutators to 'move' the vehicle on the coordinate system.
*********************************************************************/

// Taxicab.hpp is the header file, this is the include guard
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

// Start class declaration
class Taxicab
{
    private:
        // Member variables for the coordinates, and the distance traveled
        int x, y, dist;
    
    public:
        // Default constructor sets all member variables to 0
        Taxicab();

        // Other constructor takes two arguments to set the starting coordinates
        // And distance to 0
        Taxicab(int x0, int y0);

        // getXCoord returns the current x coordinate
        int getXCoord();

        // getYCoord returns the current y coordinate
        int getYCoord();

        // getDistanceTraveled returns the current distance
        int getDistanceTraveled();

        // moveX changes the x coordinate
        int moveX(int dx);

        // moveY changes the y coordinate
        int moveY(int dy);

};

#endif