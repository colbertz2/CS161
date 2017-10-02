/*********************************************************************
** Author: Zach Colbert
** Date: 4 October 2017
** Description: Takes five floats as input, and returns their mean.
*********************************************************************/

#include <iostream>
// using namespace std;
    // TA said not to use namespace declaration like this
using std::cout;
using std::cin;
using std::endl;
    // Supplementary content said this method is best

// The function takes five floats as input from the user, and returns their mean.
int main()
{
    // Declare variables for each of the inputs and the output
    double input1, input2, input3, input4, input5, sumOfInputs, avgOfInputs;

    //Prompt the user for each of the necessary inputs
    cout << "Please enter five numbers." << endl;
    cin >> input1;
    cin >> input2;
    cin >> input3;
    cin >> input4;
    cin >> input5;

    // Calculate the mean of the input variables
    sumOfInputs = input1 + input2 + input3 + input4 + input5;
    avgOfInputs = sumOfInputs / 5;

    // Some garbage to test my output variables
    cout << "\n\n";
    cout << "Sum of inputs: " << sumOfInputs << endl;
    cout << "Average of inputs: " << avgOfInputs << endl;
    cout << "\n\n";

    // Output the mean
    cout << "The average of those numbers is:\n";
    cout << avgOfInputs << endl;

    return 0;
}
