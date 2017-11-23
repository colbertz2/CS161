/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: The Board class builds a 3x3 tic-tac-toe board, tracking 
the pieces in each space. It has a mutator function to change board 
elements (i.e. to make a move, placing a piece on a space), and a 
function to check if any players have won the game yet.
*********************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

// Enumerated data type for the game state. Describes which player, if 
// any, has won the game, or if the game ended in a draw.
enum State {X_WON, O_WON, DRAW, UNFINISHED};


class Board
{
    private:
        // The gameBoard variable stores the "board" in a 3x3 array
        char gameBoard[3][3];


    public:
        // The default constructor sets all board spaces to an empty (space) character
        Board();

        // makeMove takes int coordinates and a char representing a game piece and changes the corresponding space on the board
        bool makeMove(int xCoord, int yCoord, char gamePiece);

        // gameState determines the state of the game--if either player has won
        // if the game is a draw, or if the game is still in progress
        State gameState();

        // printBoard is for debugging
        void printBoard();

};


#endif