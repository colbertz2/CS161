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
void setPointGuard(Player p)
{
    pointGuard = p;
}


// Accessor for pointGuard
Player getPointGuard()
{
    return pointGuard;
}


// Mutator for shootingGuard
void setShootingGuard(Player p)
{
    shootingGuard = p;
}


// Accessor for shootingGuard
Player getShootingGuard()
{
    return shootingGuard;
}


// Mutator for smallForward
void setSmallForward(Player p)
{
    smallForward = p;
}


// Accessor for smallForward
Player getSmallForward()
{
    return smallForward;
}


// Mutator for powerForward
void setPowerForward(Player p)
{
    powerForward = p;
}


// Accessor for powerForward
Player getPowerForward()
{
    return powerForward;
}


// Mutator for center
void setCenter(Player p)
{
    center = p;
}


// Accessor for center
Player getCenter()
{
    return center;
}


/********************************************************************* 
** Description: The totalPoints function of the Team class gets the points attribute from each Player object in the team, sums them, and returns the total value of points of all players on the team.

** Example: myTeam.totalPoints();
** Example Output: 12;
*********************************************************************/ 
int totalPoints()
{
    return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
}