/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: The Board class builds a 3x3 tic-tac-toe board, tracking the pieces in each space. It has a mutator function to change board elements (i.e. to make a move, placing a piece on a space), and a function to check if any players have won the game yet.
*********************************************************************/

#include "Board.hpp"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// The default constructor sets all board spaces to an empty (space) character
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
}


/*********************************************************************
** Description: makeMove takes three arguments. x- and y-coordinates 
for a space on the board, and the game piece to place in that space.
The function will return false for illegal moves (where a space is 
already taken), and true for other moves.
*********************************************************************/
bool Board::makeMove(int xCoord, int yCoord, char gamePiece)
{
    // Reminder: Array[row][col]

    // If the space is already taken
    if (gameBoard[yCoord][xCoord] == 'x' || gameBoard[yCoord][xCoord] == 'o')
    {
        // Illegal move
        return false;
    }

    // Otherwise, record the move
    gameBoard[yCoord][xCoord] = gamePiece;

    // And return true
    return true;

}


/*********************************************************************
** Description: gameState takes no arguments, and does logical 
operations on the gameBoard to check if a player has won the game. If 
no player has won the game, it checks whether the board is full 
(resulting in a draw) or if there are still spaces open (game still in 
progress). It uses an enumerated data type for the state of the game, 
defined in Board.hpp.
*********************************************************************/
State Board::gameState()
{
    // usedSpaces counts the number of non-empty spaces
    int usedSpaces = 0;

    // Run through each space on the board
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            // Count the non-empty spaces
            if (gameBoard[y][x] != ' ')
            {
                usedSpaces++;
            }

            // Check for an 'o' win
            if (gameBoard[y][x] == 'o')
            {
                // Check adjacents vertically
                if (gameBoard[y+1][x] == 'o' && gameBoard[y-1][x] == 'o')
                {
                    return O_WON;
                }

                // Check adjacents horizontally
                else if (gameBoard[y][x+1] == 'o' && gameBoard[y][x-1] == 'o')
                {
                    return O_WON;
                }

                // Check adjacents on the diagonals
                else if (gameBoard[y+1][x-1] == 'o' && gameBoard[y-1][x+1] == 'o')
                {
                    return O_WON;
                }

                else if (gameBoard[y+1][x+1] == 'o' && gameBoard[y-1][x-1] == 'o')
                {
                    return O_WON;
                }
            }

            // Check for an 'x' win
            if (gameBoard[y][x] == 'x')
            {
                // Check adjacents vertically
                if (gameBoard[y+1][x] == 'x' && gameBoard[y-1][x] == 'x')
                {
                    return X_WON;
                }

                // Check adjacents horizontally
                else if (gameBoard[y][x+1] == 'x' && gameBoard[y][x-1] == 'x')
                {
                    return X_WON;
                }

                // Check adjacents on the diagonals
                else if (gameBoard[y+1][x-1] == 'x' && gameBoard[y-1][x+1] == 'x')
                {
                    return X_WON;
                }

                else if (gameBoard[y+1][x+1] == 'x' && gameBoard[y-1][x-1] == 'x')
                {
                    return X_WON;
                }
            }
        }
    }

    // While there is no winner 
    // If all the spaces are full, it's a draw
    if (usedSpaces == 9)
    {
        return DRAW;
    }

    return UNFINISHED;
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
