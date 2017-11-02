/********************************************************************* 
** Author: Zach Colbert
** Date: 1 November 2017
** Description:
*********************************************************************/ 

// Pre-processing includes pre-requisite libraries for the functions below
#include <string>

// Make sure to include the header file where we declare the player and team classes!
#include "Player.hpp"
#include "Team.hpp"


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


// This class doesn't get a default constructor, because there's no "I" in "Team"
//  REPLACE THIS COMMEMTN!!!!!!!
 Team::Team(Player::Player point_Guard, Player::Player shooting_Guard, Player::Player small_Forward, Player::Player power_Forward, Player::Player center_In)
 {
    // Set each of the positions using mutator functions
    setPointGuard(point_Guard);
    setShootingGuard(shooting_Guard);
    setSmallForward(small_Forward);
    setPowerForward(power_Forward);
    setCenter(center_In);
 }

// Mutator for pointGuard
void setPointGuard(Player::Player p)
{
    pointGuard = p;
}

// Accessor for pointGuard
Player::Player getPointGuard()
{
    return pointGuard;
}

// Mutator for shootingGuard
void setShootingGuard(Player::Player p)
{
    shootingGuard = p;
}

// Accessor for shootingGuard
Player::Player getShootingGuard()
{
    return shootingGuard;
}

// Mutator for smallForward
void setSmallForward(Player::Player p)
{
    smallForward = p;
}

// Accessor for smallForward
Player::Player getSmallForward()
{
    return smallForward;
}

// Mutator for powerForward
void setPowerForward(Player::Player p)
{
    powerForward = p;
}

// Accessor for powerForward
Player::Player getPowerForward()
{
    return powerForward;
}

// Mutator for center
void setCenter(Player::Player p)
{
    center = p;
}

// Accessor for center
Player::Player getCenter()
{
    return center;
}

// totalPoints gets the points attribute from each of the member variables, and returns the total
// REPLACE THIS COMMENT!!!!!!!!
int totalPoints()
{
    return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
}