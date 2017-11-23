/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: The T3Reader class interacts with the Board class to 
"play" a game of tic-tac-toe based on a set of instructions read from 
a text file. It features a simple constructor and a member function to 
feed the input file to.
*********************************************************************/

#include "T3Reader.hpp"
#include <fstream>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


// The constructor takes a char argument to indicate which "player" 
// will go first in the game
T3Reader::T3Reader(char firstTurn)
{
    nextTurn = firstTurn;
}


/*********************************************************************
** Description: readGameFile takes a string argument for the name of 
the input file. It reads the text file line by line, passing 
instructions to the makeMove function of the Board class.
It checks the state of the game after each move, returning false if 
the instructions continue beyond the end of the game. It also returns 
false when it encounters an illegal move.
After each move, it toggles the game piece that is placed in the 
succeeding turn.
*********************************************************************/
bool T3Reader::readGameFile(string fileName)
{
    // Initialize variables to store the coords and results for each move
    int xCoord, yCoord;
    int breakReturn = 0;
    bool moveResult;
    
    // Open the input file
    std::ifstream inFile(fileName);

    // Loop until the end of the file
    while (inFile >> xCoord >> yCoord)
    {
        // If the game is finished, return false
        if (gameBoard.gameState() != 3)
        {
            // Make sure to close the file!
            inFile.close();
            breakReturn = 1;
            break;
        }
        
        // Otherwise, record the result of each move
        moveResult = gameBoard.makeMove(xCoord, yCoord, nextTurn);

        // Return false if the move failed
        if (moveResult == false)
        {
            // Make sure to close the file!
            inFile.close();
            breakReturn = 1;
            break;
        }

        // Toggle the next player
        if (nextTurn == 'x')
        {
            nextTurn = 'o';
        }
        else
        {
            nextTurn = 'x';
        }
    }

    // Return false for the things that break the while loop
    if (breakReturn == 1)
    {
        return false;
    }
    else
    {
        // If you got this far, it worked! Close the file and return true.
        inFile.close();
        return true;
    }
}
