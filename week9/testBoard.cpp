/*************************************************
 *         TEST MAIN FOR THE BOARD CLASS         *
 ************************************************/

#include "Board.hpp"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void printGameState(State gameState);

int main()
{
    // Initialize a new board
    Board myBoard;

    // Print the board to make sure it's empty
    myBoard.printBoard();
    printGameState(myBoard.gameState());

    // Make a move
    myBoard.makeMove(0, 0, 'x');

    // Print the board to make sure it's empty
    myBoard.printBoard();
    printGameState(myBoard.gameState());

    // Make a move
    myBoard.makeMove(1, 0, 'o');

    // Print the board to make sure it's empty
    myBoard.printBoard();
    printGameState(myBoard.gameState());

    // Make a move
    myBoard.makeMove(0, 1, 'x');

    // Print the board to make sure it's empty
    myBoard.printBoard();
    printGameState(myBoard.gameState());

    // Make a move
    myBoard.makeMove(1, 1, 'o');

    // Print the board to make sure it's empty
    myBoard.printBoard();
    printGameState(myBoard.gameState());

    // Make a move
    myBoard.makeMove(0, 2, 'x');

    // Print the board to make sure it's empty
    myBoard.printBoard();
    printGameState(myBoard.gameState());

    return 0;
}

void printGameState(State gameState)
{
    switch (gameState)
    {
        case 0: 
            cout << "Game State: X_WON" << endl;
            break;

        case 1:
            cout << "Game State: O_WON" << endl;
            break;

        case 2:
            cout << "Game State: DRAW" << endl;
            break;

        case 3:
            cout << "Game State: UNFINISHED" << endl;
            break;
    }
}