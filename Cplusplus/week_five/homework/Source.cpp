#include <iostream>
#include "Character.h"
#include "Environment.h"
#include "PhysicsControl.h"
 
#define EARTH_GRAVITY 9.8f
#define MOON_GRAVITY 1.62f
#define AVERAGE_JUMP_SPEED 2.8f // 2.8m/s (10km/h)
using std::cout;
using std::endl;
 
int main()
{
    Character aCharacter = Character("Jhon Doe", 54.0f, AVERAGE_JUMP_SPEED, 22); // Name, (float)Mass KG, (float)Jump Speed m/s, Id
    Environment planetEarth = Environment(1, "Earth", EARTH_GRAVITY); // Id, Name, (float)Gravity
    Environment moon = Environment(2, "Moon", MOON_GRAVITY);
    PhysicsControl physicsEarth = PhysicsControl(planetEarth);
    PhysicsControl physicsMoon = PhysicsControl(moon);
 
    float twoMeterFence = 2.0f;
    float twentyCentimeterStep = 0.2f;
 
    float maximumJumpHeightInMeters = physicsEarth.maxJumpHeight(aCharacter);
    float jumpAirTimeInSeconds = physicsEarth.characterJumpAirTime(aCharacter);
    bool jumpOverTwoMeterFence = physicsEarth.characterCanJumpOver(aCharacter, twoMeterFence);
    bool jumpOverTwentyCentimeterStep = physicsEarth.characterCanJumpOver(aCharacter, twentyCentimeterStep);
    float jumpHeightInMetersOnMoon = physicsMoon.maxJumpHeight(aCharacter);
 
    cout << "How high can our Character jump? Answer: " << maximumJumpHeightInMeters << " meters" << endl
        << "How much seconds air time? Answer: " << jumpAirTimeInSeconds << " seconds" << endl
        << "Can our Character jump over 2m fence? Answer: " << jumpOverTwoMeterFence << " (0 == No)" << endl
        << "Can our Character jump over 20cm step? Answer: " << jumpOverTwentyCentimeterStep << " (1 == Yes)" << endl
        << "If our Character was on the Moon, how high" << endl
        << "would he be able to jump? Answer: " << jumpHeightInMetersOnMoon << " meters" << endl;
 
    return 0;
}
