/********************************************************************* 
** Author: Zach Colbert
** Date: 1 November 2017
** Description:
*********************************************************************/ 

// Pre-processing includes pre-requisite libraries for the functions below
#include <string>

// Make sure to include the header file where we declare the player class!
#include "Player.hpp"


/********************************************************************* 
** Description: The default constructor for the Player class takes no arguments, and sets the player's name and stats to default values.

Default name: ""
Default stats: -1
*********************************************************************/ 

// Default constructor


/********************************************************************* 
** Description: This constructor for the Player class takes four arguments, and sets up a player object with name and stats based on those arguments.

** Usage: Player myPlayer(<name>, <points>, <rebounds>, <assists>);

** Example: Player player1(Zach, 20, 10, 0);
*********************************************************************/ 

// Constructor with arguments
 

/********************************************************************* 
** Description: This function of the Player class takes no arguments, and returns the string "name" member variable of a called Player object.

** Usage: myPlayer.getName();
*********************************************************************/ 

// function getName


/********************************************************************* 
** Description: This function of the Player class takes one argument, and modifies the integer "points" member variable of a called Player object.

** Usage: myPlayer.setPoints(<pointValue>);

** Example: myPlayer.setPoints(7);
*********************************************************************/ 

// function setPoints


/********************************************************************* 
** Description: This function of the Player class takes no arguments, and returns the integer value of the "points" member variable of a called Player object.

** Usage: myPlayer.getPoints();
*********************************************************************/ 

// function getPoints


/********************************************************************* 
** Description: This function of the Player class takes one argument, and modifies the integer "rebounds" member variable of a called Player object.

** Usage: myPlayer.setRebounds(<reboundValue>);

** Example: myPlayer.setRebounds(4);
*********************************************************************/ 

// function setRebounds


/********************************************************************* 
** Description: This function of the Player class takes no arguments, and returns the integer value of the "rebounds" member variable of a called Player object.

** Usage: myPlayer.getRebounds();
*********************************************************************/ 

// function getRebounds


/********************************************************************* 
** Description: This function of the Player class takes one argument, and modifies the integer "assists" member variable of a called Player object.

** Usage: myPlayer.setAssists(<assistValue>);

** Example: myPlayer.setAssists(10);
*********************************************************************/ 

// function setAssists


/********************************************************************* 
** Description: This function of the Player class takes no arguments, and returns the integer value of the "assists" member variable of a called Player object.

** Usage: myPlayer.getAssists();
*********************************************************************/ 

// function getAssists


/********************************************************************* 
** Description: This function of the Player class takes one Player object as an argument, and returns a boolean value. It compares the points stats of the called Player object and the argument Player object, and returns TRUE if the value of the called player's points is greater than the value of the argument player's points. In the converse case, it returns FALSE.

** Usage: myPlayer.hasMorePointsThan(<otherPlayer>);

** Example Input: player1.hasMorePointsThan(player2);

** Example Output: FALSE
*********************************************************************/ 

// function hasMorePointsThan