#ifndef __PHISICS_CONTROL_
#define __PHISICS_CONTROL_

#include <iostream>
#include "Character.h"
#include "Environment.h"

class PhysicsControl
{
private:
    Environment _environment;
public:
    // Constructors
    PhysicsControl()
    {
    }

    PhysicsControl(Environment environment)
    {
        setEnvironment(environment);
    }

    // Destructor
    ~PhysicsControl()
    {
    }

    // Getters
    Environment getEnvironment()
    {
        return this->_environment;
    }

    // Setters
    void setEnvironment(Environment &newEnvironment)
    {
        this->_environment = newEnvironment;
    }

    float maxJumpHeight(Character &character);
    float characterJumpAirTime(Character &character);
    bool characterCanJumpOver(Character &character, float &height);
};
#endif
