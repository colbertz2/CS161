/********************************************************************* 
** Author: Zach Colbert
** Date: 1 November 2017
** Description:
*********************************************************************/ 

#include <string>
#include "Player.hpp"

#ifndef TEAM_HPP
#define TEAM_HPP


class Team
{
private:
    // Member variables for each position on the team
    Player::Player pointGuard, shootingGuard, smallForward, powerForward, center;

public:
    // Mutator for pointGuard
    void setPointGuard(Player::Player p);

    // Accessor for pointGuard
    Player::Player getPointGuard();

    // Mutator for shootingGuard
    void setShootingGuard(Player::Player p);

    // Accessor for shootingGuard
    Player::Player getShootingGuard();

    // Mutator for smallForward
    void setSmallForward(Player::Player p);

    // Accessor for smallForward
    Player::Player getSmallForward();

    // Mutator for powerForward
    void setPowerForward(Player::Player p);

    // Accessor for powerForward
    Player::Player getPowerForward();

    // Mutator for center
    void setCenter(Player::Player p);

    // Accessor for center
    Player::Player getCenter();

    // totalPoints gets the points attribute from each of the member variables, and returns the total
    int totalPoints();

};

#endif