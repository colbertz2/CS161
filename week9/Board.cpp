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
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// ADD DOCUMENTATION!
Board::Board()
{
    // Set each cell of the gameBoard array to empty
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gameBoard[i][j] = '=';
        }
    }
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


// ADD DOCUMENTATION!
State Board::gameState()
{
    // Temp variable to store the game state
    State state;

    // usedSpaces counts the number of non-empty spaces
    int usedSpaces = 0;

    // Run through each space on the board
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            // Count the non-empty spaces
            if (gameBoard[y][x] != '=')
            {
                usedSpaces++;
            }

            // Check for an 'o' win
            if (gameBoard[y][x] == 'o')
            {
                // Check adjacents vertically
                if (gameBoard[y+1][x] == 'o' && gameBoard[y-1][x] == 'o')
                {
                    state = O_WON;
                }

                // Check adjacents horizontally
                if (gameBoard[y][x+1] == 'o' && gameBoard[y][x-1] == 'o')
                {
                    state = O_WON;
                }

                // Check adjacents on the diagonals
                if (gameBoard[y+1][x-1] == 'o' && gameBoard[y-1][x+1] == 'o')
                {
                    state = O_WON;
                }

                if (gameBoard[y+1][x+1] == 'o' && gameBoard[y-1][x-1] == 'o')
                {
                    state = O_WON;
                }
            }

            // Check for an 'x' win
            if (gameBoard[y][x] == 'x')
            {
                // Check adjacents vertically
                if (gameBoard[y+1][x] == 'x' && gameBoard[y-1][x] == 'x')
                {
                    state = X_WON;
                }

                // Check adjacents horizontally
                if (gameBoard[y][x+1] == 'x' && gameBoard[y][x-1] == 'x')
                {
                    state = X_WON;
                }

                // Check adjacents on the diagonals
                if (gameBoard[y+1][x-1] == 'x' && gameBoard[y-1][x+1] == 'x')
                {
                    state = X_WON;
                }

                if (gameBoard[y+1][x+1] == 'x' && gameBoard[y-1][x-1] == 'x')
                {
                    state = X_WON;
                }
            }
        }
    }

    // While there is no winner
    while (state != O_WON || state != X_WON)
    {
        // The game is incomplete until all spaces are full
        state = UNFINISHED;
        
        // If all the spaces are full, it's a draw
        if (usedSpaces == 9)
        {
            state = DRAW;
        } 
    }

    return state;
}


// printBoard is an accessor for debugging
void Board::printBoard()
{
    // Reminder: Array[y][x]

    // Print the array upside-down, so it makes sense graphically
    for (int y = 2; y >= 0; y--)
    {
        cout << "| ";
        
        for (int x = 0; x < 3; x++)
        {
            cout << gameBoard[y][x] << " | ";
        }

        cout << endl;

    }
}
