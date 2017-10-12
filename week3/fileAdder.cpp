/*********************************************************************
** Author: Zach Colbert
** Date: 11 October 2017
** Description: Gets an input file from the user, adds a list of integers from the file, and outputs to another file.
*********************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

// The main function
int main()
{   
    // Declare variables for later
    int ifData, ofData;
    
    // Prompt the user for the input file
    cout << "Please enter your filename." << endl;
    
    // Store the input file name
    string fileName;
    cin >> fileName;

    // Set up the filestream object and try to open the file
    ifstream inputFile(fileName);

    // If that fails, give the user an error
    if (!inputFile)
    {
        cout << "could not access file" << endl;
    }
    else if (inputFile)
    {
        // Set the data for the output file to zero
        ofData = 0;

        // Read until the end of the file
        while (inputFile >> ifData)
        {
            // Add the data we just read to the running total for the output file
            ofData += ifData;
        }

        // We're done with the input file, close it
        inputFile.close();

        // Output the total from the above loop to our output file
        ofstream outputFile("sum.txt");
        outputFile << ofData;

        // We're done with the output file, close it
        outputFile.close();

        // Notify the user
        cout << "result written to sum.txt" << endl;
    }

    return 0;
}
