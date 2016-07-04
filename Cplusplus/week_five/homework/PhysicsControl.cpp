#include <iostream>
#include "PhysicsControl.h"
#include <math.h>
 
float PhysicsControl::maxJumpHeight(Character &character) // In meters
{
    // Formula used: http://www.dummies.com/how-to/content/how-to-calculate-the-maximum-height-of-a-projectil.html
    float maxHeightInMeters = (pow(0, 2) - pow(character.getJumpSpeed(), 2)) / (2 * -(getEnvironment().getGravity()));
    return maxHeightInMeters;
}
 
float PhysicsControl::characterJumpAirTime(Character &character) // In seconds
{
    // Formula used: http://www.dummies.com/how-to/content/how-to-calculate-how-long-a-projectile-is-airborne.html
    float jumpAirTime = (character.getJumpSpeed()) / (getEnvironment().getGravity());
    return jumpAirTime; //in seconds
}
 
bool PhysicsControl::characterCanJumpOver(Character &character,
    float &obstacleHeight)
{
    // If the character can jump higher or equal to the obstacle, return true
    if (maxJumpHeight(character) >= obstacleHeight)
    {
        return true;
    }
    else
    {
        return false;
    }
}
