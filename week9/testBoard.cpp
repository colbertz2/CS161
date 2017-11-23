/*************************************************
 *         TEST MAIN FOR THE BOARD CLASS         *
 ************************************************/

#include "Board.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Initialize a new board
    Board::Board myBoard;

    // Print the board to make sure it's empty
    // myBoard.printBoard();

    // Print the game state
    cout << "\n" << myBoard.gameState() << endl;

    return 0;
}