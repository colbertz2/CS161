/*********************************************************************
** Author: Zach Colbert
** Date: 25 October 2017
** Description: Interface file -- Use this to declare classes
*********************************************************************/

// Box.hpp is the header file, this is the include guard
#ifndef BOX_HPP
#define BOX_HPP

// Start class declaration
class Box
{
    private:
        // Dimensions of the box, only accessible to member functions
        double height, width, length;
    
    public:
        // PROTOTYPE: Default constructor sets dimensions to 1
        Box();

        // PROTO: Constructor with 3 arguments set dimensions
        Box(double h, double w, double l);

        // PROTO: setHeight sets the height member variable
        int setHeight(double h);

        // PROTO: setWidth sets the width member variable
        int setWidth(double w);

        // PROTO: setLength sets the length member variable
        int setLength(double l);

        // PROTO: calcVolume calculates the volume of the box
        double calcVolume();

        // PROTO: calcSurfaceArea calculates the surface area of the box
        double calcSurfaceArea();

        // TEST PROTOS: Get dimensions of the box
        double getHeight(){return height;}
        double getWidth(){return width;}
        double getLength(){return length;}

};

#endif