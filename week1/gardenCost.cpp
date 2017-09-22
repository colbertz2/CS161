/*********************************************************************
** Author: Zach Colbert
** Date: 27 September 2017
** Description: A simple input/output program with mathematical operations. By prompting the user for three floats, the program will calculate and output a sum.
*********************************************************************/

#include <iostream>
using namespace std;

// A simple input/output program with mathematical operations.
int main()
{
  // Declare variables for each of the input and output values
  float soilCost, seedCost, fenceCost, totalCost;

  // Prompt the user, get the soil cost
  cout << "What does the soil cost?\n";
  cin >> soilCost;

  // Prompt the user, get the seed cost
  cout << "What do the flower seeds cost?\n";
  cin >> seedCost;

  // Prompt the user, get the fence cost
  cout << "What does the fence cost?\n";
  cin >> fenceCost;

  // Calculate the total cost of the three items
  totalCost = soilCost + seedCost + fenceCost;

  // Display the total cost
  cout << "The total cost is " << totalCost << endl;
  return 0;
}
