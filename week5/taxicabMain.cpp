/*********************************************************************
** Author: Zach Colbert
** Date: 
** Description: Testing for Taxicab class declared in Taxicab.hpp
*********************************************************************/

#include "Taxicab.hpp"
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
    Taxicab cab1;

    cab1.moveX(3);
    cab1.moveY(-4);
    cab1.moveX(-1);

    cout << cab1.getDistanceTraveled() << endl;

    return 0;
}