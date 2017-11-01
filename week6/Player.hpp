/********************************************************************* 
** Author: Zach Colbert
** Date: 1 November 2017
** Description:
*********************************************************************/ 

#include <string>

#ifndef PLAYER_HPP
#define PLAYER_HPP


class Player
{
private:
    // Member variables are for player name and stats
    std::string name;
    int points, rebounds, assists;

public:
    // Default constructor sets the player's name to an empty string, and sets all stats to -1
    Player();

    // Constructor with 4 arguments sets the player's name and all three of the stats
    Player(std::string nameString, int pointValue, int reboundValue, int assistValue);
    
    // getName returns the player's name
    std::string getName();

    // setPoints sets the value of the points stat
    void setPoints(int pointValue);

    // getPoints returns the value of the points stat
    int getPoints();

    // setRebounds sets the value of the rebounds stat
    void setRebounds(int reboundValue);

    // getRebounds returns the value of the rebounds stat
    int getRebounds();

    // setAssists sets the value of the assists stat
    void setAssists(int assistValue);

    // getAssists returns the value of the assists stat
    int getAssists();

    // hasMorePointsThan takes another player object as input
    // Function returns boolean TRUE if the value of the called player's points stat is greater than the value of the argument player's points stat
    bool hasMorePointsThan(Player argPlayer);

};

#endif