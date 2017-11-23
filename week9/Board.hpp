/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: 
*********************************************************************/

/*
Write a class called Board that represents a tic-tac-toe board. It should have a 3x3 array of chars ('x', 'o', or a space, where a space would represent an empty square) as a data member, which will store the locations of the players' moves. It should have a default constructor that initializes the 3x3 array to being empty (each element set to a space character). 

It should have a method called makeMove that takes two ints and a char (either 'x' or 'o') as parameters, representing the x and y coordinates of the move (see the example below) and which player's turn it is. If that location is unoccupied, makeMove should record the move and return true. If that location is already occupied, makeMove should just return false. 

There should be a method called gameState that takes no parameters and returns one of the four following values: X_WON, O_WON, DRAW, or UNFINISHED - use an enum for this, not strings (the enum definition should go in Board.hpp, before the class, not inside it).  [Optional: write a method called print, which just prints out the current board to the screen - this is not required, but will very likely be useful for debugging.]
*/

// INCLUDES GO HERE
#include <string>

using std::string;

#ifndef BOARD_HPP
#define BOARD_HPP

// Enumerated data type for the game state. Describes which player, if any, has won the game, or if the game ended in a draw.
enum State {X_WON, O_WON, DRAW, UNFINISHED};

// ADD DOCUMENTATION?!?
class Board
{
    private:
        char gameBoard[3][3];


    public:
        // The default constructor sets all board spaces to an empty (space) character
        Board();

        // makeMove takes int coordinates and a char representing a game piece and changes the corresponding space on the board
        bool makeMove(int xCoord, int yCoord, char gamePiece);

        // gameState determines the state of the game--if either player has won, if the game is a draw, or if the game is still in progress
        State gameState();

        // printBoard is for debugging
        void printBoard();

};


#endif