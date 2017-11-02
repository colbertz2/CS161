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

Player::Player()
{
    // Set player name to empty string
    setName("");

    // Set player stats to -1
    setPoints(-1);
    setRebounds(-1);
    setAssists(-1);
}


/********************************************************************* 
** Description: This constructor for the Player class takes four arguments, and sets up a player object with name and stats based on those arguments.

** Usage: Player myPlayer(<name>, <points>, <rebounds>, <assists>);

** Example: Player player1(Zach, 20, 10, 0);
*********************************************************************/ 

Player::Player(std::string nameString, int pointValue, int reboundValue, int assistValue)
{
    // Set player name from argument
    setName(nameString);

    // Set player stats from arguments
    setPoints(pointValue);
    setRebounds(reboundValue);
    setAssists(assistValue);
}
 

// Accessor function for the name attribute

std::string Player::getName()
{
    return name;
}


// Mutator function for the points attribute 

void Player::setPoints(int pointValue)
{
    points = pointValue;
}


// Accessor function for the points attribute

int Player::getPoints()
{
    return points;
}


// Mutator function for the rebounds attribute

void Player::setRebounds(int reboundValue)
{
    rebounds = reboundValue;
}


// Accessor function for the rebounds attribute

int Player::getRebounds()
{
    return rebounds;
}


// Mutator function for the assists attribute

void Player::setAssists(int assistValue)
{
    assists = assistValue;
}


// Accessor function for the assists attribute

int Player::getAssists()
{
    return assists;
}


/********************************************************************* 
** Description: This function of the Player class takes one Player object as an argument, and returns a boolean value. It compares the points stats of the called Player object and the argument Player object, and returns TRUE if the value of the called player's points is greater than the value of the argument player's points. In the converse case, it returns FALSE.

** Usage: myPlayer.hasMorePointsThan(<otherPlayer>);

** Example Input: player1.hasMorePointsThan(player2);

** Example Output: FALSE
*********************************************************************/ 

bool Player::hasMorePointsThan(Player argPlayer)
{
    return points > argPlayer.getPoints();
}
