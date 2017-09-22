/*********************************************************************
** Author: Zach Colbert
** Date: 27 September 2017
** Description: A simple input/output program.
*********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
  std::string faveAnimal;
  std::cout << "Please enter your favorite animal." << std::endl;
  std::cin >> faveAnimal;
  std::cout << "Your favorite animal is the " << faveAnimal;
  std::cout << "." << std::endl;

  return 0;
}
