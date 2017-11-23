/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: 
*********************************************************************/

/*
Write a class called Board that represents a tic-tac-toe board. It should have a 3x3 array of chars ('x', 'o', or a space, where a space would represent an empty square) as a data member, which will store the locations of the players' moves. It should have a default constructor that initializes the 3x3 array to being empty (each element set to a space character). 

It should have a method called makeMove that takes two ints and a char (either 'x' or 'o') as parameters, representing the x and y coordinates of the move (see the example below) and which player's turn it is. If that location is unoccupied, makeMove should record the move and return true. 

If that location is already occupied, makeMove should just return false. There should be a method called gameState that takes no parameters and returns one of the four following values: X_WON, O_WON, DRAW, or UNFINISHED - use an enum for this, not strings (the enum definition should go in Board.hpp, before the class, not inside it).  [Optional: write a method called print, which just prints out the current board to the screen - this is not required, but will very likely be useful for debugging.]
*/

// INCLUDES GO HERE
#include "Board.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


// ADD DOCUMENTATION!
Board::Board()
{
    // Set each cell of the gameBoard array to empty
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gameBoard[i][j] = ' ';
        }
    }

    // Set gameProgress to UNFINISHED
    gameProgress = UNFINISHED;

}


// ADD DOCUMENTATION!
bool Board::makeMove(int xCoord, int yCoord, char gamePiece)
{
    // Reminder: Array[row][col]

    // If the space is already taken
    if (gameBoard[yCoord][xCoord] != ' ')
    {
        // Illegal move
        return false;
    }

    // Otherwise, record the move
    gameBoard[yCoord][xCoord] = gamePiece;

    // And return true
    return true;

}


// gameState is an accessor for the gameProgress variable
State Board::gameState()
{
    return gameProgress;

}


// printBoard is an accessor for debugging
void Board::printBoard()
{
    // Reminder: Array[y][x]

    // Print the array upside-down, so it makes sense graphically
    for (int y = 3; y >= 0; y--)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << gameBoard[y][x] << " | ";
        }

        cout << endl;
    }
}
