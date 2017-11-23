/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: 
*********************************************************************/

/*
Write a class called T3Reader that uses the Board class to re-run a game of TicTacToe from moves that it reads from a text file. This class will have a field for a Board object and a field to keep track of which player's turn it is. 

It should have a constructor that takes a char parameter that specifies whether 'x' or 'o' should have the first move. 

It should have a method called readGameFile that takes a string parameter that gives the name of the game file. The readGameFile method should keep looping, reading a move from the file, and sending it to the board (with makeMove).  The readGameFile method should return false if any of the moves is for a square that was already occupied, or if there are still additional moves in the file after the game has finished.  Otherwise it should return true.  

Make sure you close the input file in every case.
*/

// INCLUDES GO HERE
#include "T3Reader.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// ADD DOCUMENTATION!
T3Reader::T3Reader(char firstTurn)
{
    nextTurn = firstTurn;
}


// ADD DOCUMENTATION!
bool T3Reader::readGameFile(string fileName)
{
    // Initialize variables to store the coords and results for each move
    int xCoord, yCoord;
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
            return false;
        }
        
        // Otherwise, record the result of each move
        moveResult = gameBoard.makeMove(xCoord, yCoord, nextTurn);

        // Return false if the move failed
        if (moveResult == false)
        {
            // Make sure to close the file!
            inFile.close();
            return false;
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

    // If you got this far, it worked! Close the file and return true.
    inFile.close();
    return true;
}