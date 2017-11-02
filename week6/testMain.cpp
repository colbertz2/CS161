// Test main file for the Player and Team classes

#include "Player.hpp"
#include "Team.hpp"
#include <string>
#include <iostream>

int main()
{
    // Test code from the assignment description

    Player::Player p1("Charlotte", 24, 10, 7);
    Player::Player p2("Emily", 21, 13, 9);
    Player::Player p3("Anne", 20, 10, 8);
    Player::Player p4("Jane", 19, 10, 10);
    Player::Player p5("Mary", 18, 11, 8);
    p5.setRebounds(12);
   
    Team::Team team1(p1, p2, p3, p4, p5);
   
    Player::Player p = team1.getShootingGuard();
    std::cout << p.getName() << std::endl;

    return 0;
}