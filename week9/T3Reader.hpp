/*********************************************************************
** Author: Zach Colbert
** Date: 22 November 2017
** Description: The T3Reader class interacts with the Board class to 
"play" a game of tic-tac-toe based on a set of instructions read from 
a text file. It features a simple constructor and a member function to 
feed the input file to.
*********************************************************************/

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
