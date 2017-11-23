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
#include "Board.hpp"
#include <string>

#ifndef T3READER_HPP
#define T3READER_HPP

class T3Reader
{
    private:
        // Board object for the game
        Board gameBoard;

        // Which player goes next
        char nextTurn;

    public:
        // Default constructor takes a char to determine which player goes first
        T3Reader(char firstTurn);

        // readGameFile reads the file containing a list of moves and calls Board::makeMove to make successive moves
        bool readGameFile(std::string fileName);

};

#endif
