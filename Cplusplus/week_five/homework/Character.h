#ifndef __CHARACTER_H_
#define __CHARACTER_H_

#include <string>

class Character
{
private:
    // Attributes
    std::string _name;
    float _mass; // In KG
    float _jumpSpeed; // In m/s
    unsigned int _id;
public:
    // Constructors
    Character()
    {
    }

    Character(std::string name, float mass, float jumpSpeed, unsigned int id)
    {
        setName(name);
        setMass(mass);
        setJumpSpeed(jumpSpeed);
        setId(id);
    }

    // Destructor
    ~Character()
    {

    }

    // Getters
    std::string getName()
    {

        return this->_name;
    }

    float getMass()
    {
        return this->_mass;
    }

    float getJumpSpeed()
    {
        return this->_jumpSpeed;
    }

    unsigned int getId()
    {
        return this->_id;
    }

    // Setters
    void setName(std::string &newName)
    {
        this->_name = newName;
    }

    void setMass(float &newMass)
    {
        this->_mass = newMass;
    }

    void setJumpSpeed(float &newJumpSpeed)
    {
        this->_jumpSpeed = newJumpSpeed;
    }

    void setId(unsigned int &newId)
    {
        this->_id = newId;
    }
};
#endif
