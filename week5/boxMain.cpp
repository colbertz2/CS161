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
    Box myBox;

    cout << "My box has dimensions:" << endl;
    cout << "Height: " << myBox.getHeight() << endl;
    cout << "Width: " << myBox.getWidth() << endl;
    cout << "Length: " << myBox.getLength() << "\n" << endl;

    cout << "My box has volume: " << myBox.calcVolume() << endl;

    return 0;
}