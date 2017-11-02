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
** Description: The constructor for the Team class takes five objects of the Player type as arguments, and sets them as positions on the team. Those positions are, in this order:

** Point Guard
** Shooting Guard
** Small Forward
** Power Forward
** Center

This class does not have a default constructor because there is no "I" in "Team."

** Example: Team::Team myTeam(pointGuard, shootingGuard, smallForward, powerForward, center);
*********************************************************************/ 
 Team::Team(Player point_Guard, Player shooting_Guard, Player small_Forward, Player power_Forward, Player center_In)
 {
    // Set each of the positions using mutator functions
    setPointGuard(point_Guard);
    setShootingGuard(shooting_Guard);
    setSmallForward(small_Forward);
    setPowerForward(power_Forward);
    setCenter(center_In);
 }


// Mutator for pointGuard
void Team::setPointGuard(Player pIn)
{
    pointGuard = pIn;
}


// Accessor for pointGuard
Player Team::getPointGuard()
{
    return pointGuard;
}


// Mutator for shootingGuard
void Team::setShootingGuard(Player pIn)
{
    shootingGuard = pIn;
}


// Accessor for shootingGuard
Player Team::getShootingGuard()
{
    return shootingGuard;
}


// Mutator for smallForward
void Team::setSmallForward(Player pIn)
{
    smallForward = pIn;
}


// Accessor for smallForward
Player Team::getSmallForward()
{
    return smallForward;
}


// Mutator for powerForward
void Team::setPowerForward(Player pIn)
{
    powerForward = pIn;
}


// Accessor for powerForward
Player Team::getPowerForward()
{
    return powerForward;
}


// Mutator for center
void Team::setCenter(Player pIn)
{
    center = pIn;
}


// Accessor for center
Player Team::getCenter()
{
    return center;
}


/********************************************************************* 
** Description: The totalPoints function of the Team class gets the points attribute from each Player object in the team, sums them, and returns the total value of points of all players on the team.

** Example: myTeam.totalPoints();
** Example Output: 12;
*********************************************************************/ 
int Team::totalPoints()
{
    return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
}