/*********************************************************************
** Author: Zach Colbert
** Date: 
** Description: Testing for Box class declared in Box.hpp
*********************************************************************/

#include "Box.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    Box myBox(2.4, 7.1, 5.0);

    // myBox.setHeight(7.6);

    cout << myBox.calcVolume() << endl;

    cout << myBox.calcSurfaceArea() << endl;

    return 0;
}